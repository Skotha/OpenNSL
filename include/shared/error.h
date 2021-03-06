/*********************************************************************
 *
 * (C) Copyright Broadcom Corporation 2013-2014
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 **********************************************************************
 * File:        error.h
 * Details:     This file defines common error codes to be shared 
 * 				between API layers.
 *
 * 				Its contents are not used directly by applications; 
 * 				it is used only by header files of parent APIs which 
 * 				need to define error codes.
 *********************************************************************/

#ifndef _SHR_ERROR_H
#define _SHR_ERROR_H

typedef enum {
    _SHR_E_NONE                 = 0,
    _SHR_E_INTERNAL             = -1,
    _SHR_E_MEMORY               = -2,
    _SHR_E_UNIT                 = -3,
    _SHR_E_PARAM                = -4,
    _SHR_E_EMPTY                = -5,
    _SHR_E_FULL                 = -6,
    _SHR_E_NOT_FOUND            = -7,
    _SHR_E_EXISTS               = -8,
    _SHR_E_TIMEOUT              = -9,
    _SHR_E_BUSY                 = -10,
    _SHR_E_FAIL                 = -11,
    _SHR_E_DISABLED             = -12,
    _SHR_E_BADID                = -13,
    _SHR_E_RESOURCE             = -14,
    _SHR_E_CONFIG               = -15,
    _SHR_E_UNAVAIL              = -16,
    _SHR_E_INIT                 = -17,
    _SHR_E_PORT                 = -18,

    _SHR_E_LIMIT                = -19           /* Must come last */
} _shr_error_t;

#define _SHR_ERRMSG_INIT        { \
        "Ok",                           /* E_NONE */ \
        "Internal error",               /* E_INTERNAL */ \
        "Out of memory",                /* E_MEMORY */ \
        "Invalid unit",                 /* E_UNIT */ \
        "Invalid parameter",            /* E_PARAM */ \
        "Table empty",                  /* E_EMPTY */ \
        "Table full",                   /* E_FULL */ \
        "Entry not found",              /* E_NOT_FOUND */ \
        "Entry exists",                 /* E_EXISTS */ \
        "Operation timed out",          /* E_TIMEOUT */ \
        "Operation still running",      /* E_BUSY */ \
        "Operation failed",             /* E_FAIL */ \
        "Operation disabled",           /* E_DISABLED */ \
        "Invalid identifier",           /* E_BADID */ \
        "No resources for operation",   /* E_RESOURCE */ \
        "Invalid configuration",        /* E_CONFIG */ \
        "Feature unavailable",          /* E_UNAVAIL */ \
        "Feature not initialized",      /* E_INIT */ \
        "Invalid port",                 /* E_PORT */ \
        "Unknown error"                 /* E_LIMIT */ \
        }

extern char *_shr_errmsg[];

#define _SHR_ERRMSG(r)          \
        _shr_errmsg[(((int)r) <= 0 && ((int)r) > _SHR_E_LIMIT) ? -(r) : -_SHR_E_LIMIT]

#define _SHR_E_SUCCESS(rv)              ((rv) >= 0)
#define _SHR_E_FAILURE(rv)              ((rv) < 0)

typedef enum {
    _SHR_SWITCH_EVENT_RESERVED_VAL1 = 1,
    _SHR_SWITCH_EVENT_RESERVED_VAL2 = 2,
    _SHR_SWITCH_EVENT_RESERVED_VAL3 = 3,
    _SHR_SWITCH_EVENT_RESERVED_VAL4 = 4,
    _SHR_SWITCH_EVENT_RESERVED_VAL5 = 5,
    _SHR_SWITCH_EVENT_RESERVED_VAL6 = 6,
    _SHR_SWITCH_EVENT_RESERVED_VAL7 = 7,
    _SHR_SWITCH_EVENT_RESERVED_VAL8 = 8,
    _SHR_SWITCH_EVENT_RESERVED_VAL9 = 9,
    _SHR_SWITCH_EVENT_RESERVED_VAL10 = 10,
    _SHR_SWITCH_EVENT_RESERVED_VAL11 = 11,
    _SHR_SWITCH_EVENT_RESERVED_VAL12 = 12,
    _SHR_SWITCH_EVENT_RESERVED_VAL13 = 13,
    _SHR_SWITCH_EVENT_RESERVED_VAL14 = 14,
    _SHR_SWITCH_EVENT_MMU_BST_TRIGGER = 15,
    _SHR_SWITCH_EVENT_RESERVED_VAL16 = 16,
    _SHR_SWITCH_EVENT_RESERVED_VAL17 /* last, as always */
} _shr_switch_event_t;

#endif  /* !_SHR_ERROR_H */
