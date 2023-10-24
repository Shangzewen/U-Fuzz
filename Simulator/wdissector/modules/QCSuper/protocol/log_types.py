#!/usr/bin/python3
#-*- encoding: Utf-8 -*-

"""
    This file enumerates DIAG log types, used in DIAG_LOG_F packets.
"""

"""
    These are 2G-related log types.
"""

LOG_GSM_RR_SIGNALING_MESSAGE_C = 0x512f

DCCH = 0x00
BCCH = 0x01
L2_RACH = 0x02
CCCH = 0x03
SACCH = 0x04
SDCCH = 0x05
FACCH_F = 0x06
FACCH_H = 0x07
L2_RACH_WITH_NO_DELAY = 0x08

"""
    These are GPRS-related log types.
"""

LOG_GPRS_MAC_SIGNALLING_MESSAGE_C = 0x5226

PACCH_RRBP_CHANNEL = 0x03
UL_PACCH_CHANNEL = 0x04
DL_PACCH_CHANNEL = 0x83

PACKET_CHANNEL_REQUEST = 0x20

"""
    These are 5G-related log types.
"""

LOG_NR_RRC_OTA_MSG_LOG_C = 0xb821

"""
    These are 4G-related log types.
"""

LOG_LTE_MAC_DL_TRANSPORT_BLOCK_C = 0xb063
LOG_LTE_MAC_UL_TRANSPORT_BLOCK_C = 0xb064
LOG_LTE_RRC_OTA_MSG_LOG_C = 0xb0c0
LOG_LTE_NAS_ESM_OTA_IN_MSG_LOG_C = 0xb0e2
LOG_LTE_NAS_ESM_OTA_OUT_MSG_LOG_C = 0xb0e3
LOG_LTE_NAS_EMM_OTA_IN_MSG_LOG_C = 0xb0ec
LOG_LTE_NAS_EMM_OTA_OUT_MSG_LOG_C = 0xb0ed

LTE_BCCH_BCH_v0 = 1
LTE_BCCH_DL_SCH_v0 = 2
LTE_MCCH_v0 = 3
LTE_PCCH_v0 = 4
LTE_DL_CCCH_v0 = 5
LTE_DL_DCCH_v0 = 6
LTE_UL_CCCH_v0 = 7
LTE_UL_DCCH_v0 = 8

LTE_BCCH_BCH_v14 = 1
LTE_BCCH_DL_SCH_v14 = 2
LTE_MCCH_v14 = 4
LTE_PCCH_v14 = 5
LTE_DL_CCCH_v14 = 6
LTE_DL_DCCH_v14 = 7
LTE_UL_CCCH_v14 = 8
LTE_UL_DCCH_v14 = 9

LTE_BCCH_BCH_v9 = 8
LTE_BCCH_DL_SCH_v9 = 9
LTE_MCCH_v9 = 10
LTE_PCCH_v9 = 11
LTE_DL_CCCH_v9 = 12
LTE_DL_DCCH_v9 = 13
LTE_UL_CCCH_v9 = 14
LTE_UL_DCCH_v9 = 15

LTE_BCCH_BCH_v19 = 1
LTE_BCCH_DL_SCH_v19 = 3
LTE_MCCH_v19 = 6
LTE_PCCH_v19 = 7
LTE_DL_CCCH_v19 = 8
LTE_DL_DCCH_v19 = 9
LTE_UL_CCCH_v19 = 10
LTE_UL_DCCH_v19 = 11

LTE_BCCH_BCH_NB = 45
LTE_BCCH_DL_SCH_NB = 46
LTE_PCCH_NB = 47
LTE_DL_CCCH_NB = 48
LTE_DL_DCCH_NB = 49
LTE_UL_CCCH_NB = 50
LTE_UL_DCCH_NB = 52

"""
    These are 5G-related log types.
"""

# common to v1-v14 so far
NR_DL_BCCH_BCH_v9 = 0x01
NR_DL_BCCH_SCH_v9 = 0x02
NR_DL_CCCH_v9 = 0x03
NR_DL_DCCH_v9 = 0x04
NR_DL_PCCH_v9 = 0x05
NR_UL_CCCH_v9 = 0x06
NR_UL_DCCH_v9 = 0x08
NR_UL_DCCH_RECONF_v9 = 0x0a

"""
    These are 3G-related log types.
"""

RRCLOG_SIG_UL_CCCH = 0
RRCLOG_SIG_UL_DCCH = 1
RRCLOG_SIG_DL_CCCH = 2
RRCLOG_SIG_DL_DCCH = 3
RRCLOG_SIG_DL_BCCH_BCH = 4
RRCLOG_SIG_DL_BCCH_FACH = 5
RRCLOG_SIG_DL_PCCH = 6
RRCLOG_SIG_DL_MCCH = 7
RRCLOG_SIG_DL_MSCH = 8
RRCLOG_EXTENSION_SIB = 9
RRCLOG_SIB_CONTAINER = 10


"""
    3G layer 3 packets:
"""

WCDMA_SIGNALLING_MESSAGE = 0x412f


"""
    Upper layers
"""

LOG_DATA_PROTOCOL_LOGGING_C = 0x11eb

LOG_UMTS_NAS_OTA_MESSAGE_LOG_PACKET_C = 0x713a



