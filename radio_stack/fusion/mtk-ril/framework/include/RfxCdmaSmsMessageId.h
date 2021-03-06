/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __RFX_CDMA_SMS_MESSAGE_ID_HEADER__
#define __RFX_CDMA_SMS_MESSAGE_ID_HEADER__

RFX_MSG_ID_EXPN(RFX_MSG_EVENT_CDMA_SMS_NEW_SMS_ERR_ACK)
RFX_MSG_ID_EXPN(RFX_MSG_EVENT_CDMA_SMS_PENDING_VMI)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_CDMA_SEND_SMS)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_CDMA_SMS_ACKNOWLEDGE)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_CDMA_SMS_BROADCAST_ACTIVATION)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_CDMA_DELETE_SMS_ON_RUIM)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_CDMA_WRITE_SMS_TO_RUIM)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_GET_SMS_RUIM_MEM_STATUS)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_CDMA_GET_BROADCAST_SMS_CONFIG)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_CDMA_SET_BROADCAST_SMS_CONFIG)
RFX_MSG_ID_EXPN(RFX_MSG_URC_CDMA_NEW_SMS)
RFX_MSG_ID_EXPN(RFX_MSG_URC_CDMA_CARD_INITIAL_ESN_OR_MEID)
RFX_MSG_ID_EXPN(RFX_MSG_URC_CDMA_RUIM_SMS_STORAGE_FULL)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_CDMA_SMS_ACKNOWLEDGE_EX)
RFX_MSG_ID_EXPN(RFX_MSG_URC_CDMA_NEW_SMS_EX)
RFX_MSG_ID_EXPN(RFX_MSG_REQUEST_CDMA_SMS_ACKNOWLEDGE_INTERNAL)

#endif
