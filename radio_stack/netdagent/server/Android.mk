LOCAL_PATH := $(call my-dir)

###
### netd daemon.
###
include $(CLEAR_VARS)

LOCAL_C_INCLUDES := \
        system/libhidl/base/include   \
        system/libhidl/transport/include \
        vendor/mediatek/ims/radio_stack/netdagent/include

LOCAL_CLANG := true
# LOCAL_CPPFLAGS := -std=c++11 -Wall
LOCAL_MODULE := netdagent

# Bug: http://b/29823425 Disable -Wvarargs for Clang update to r271374
LOCAL_CPPFLAGS +=  -Wno-varargs

ifeq ($(TARGET_ARCH), x86)
ifneq ($(TARGET_PRODUCT), gce_x86_phone)
        LOCAL_CPPFLAGS += -D NETLINK_COMPAT32
endif
endif

ifneq ($(filter userdebug eng,$(TARGET_BUILD_VARIANT)),)
    LOCAL_CPPFLAGS += -DMTK_DEBUG
endif

LOCAL_SHARED_LIBRARIES := \
        libcutils \
        liblog \
        libforkexecwrap \
        libutils \
        libhwbinder  \
        libhidlbase \
        libhidltransport  \
        libifcutils_mtk \
        vendor.mediatek.hardware.netdagent@1.0

LOCAL_SRC_FILES := \
        CommandListener.cpp \
        CommandService.cpp  \
        CommandController.cpp \
        CommandRespondor.cpp \
        CommandDispatch.cpp \
        FirewallController.cpp \
        ThrottleController.cpp  \
        NetworkController.cpp   \
        IptablesInterface.cpp \
        NetlinkCommands.cpp  \
        NetdagentUtils.cpp    \
        main.cpp

LOCAL_INIT_RC := netdagent.rc

LOCAL_PROPRIETARY_MODULE := true

LOCAL_MODULE_OWNER := mtk

include $(BUILD_EXECUTABLE)
