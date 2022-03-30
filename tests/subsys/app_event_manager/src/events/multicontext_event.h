/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef _MULTICONTEXT_EVENT_H_
#define _MULTICONTEXT_EVENT_H_

/**
 * @brief Multicontext Event
 * @defgroup multicontext_event Multicontext Event
 * @{
 */

#include <app_evt_mgr.h>
#include <app_evt_mgr_profiler_tracer.h>

#ifdef __cplusplus
extern "C" {
#endif

struct multicontext_event {
	struct application_event_header header;

	int val1;
	int val2;
};

APPLICATION_EVENT_TYPE_DECLARE(multicontext_event);

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* _MULTICONTEXT_EVENT_H_ */