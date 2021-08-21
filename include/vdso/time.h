/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __VDSO_TIME_H
#define __VDSO_TIME_H

#include <uapi/linux/types.h>

struct timens_offset {
	s64	sec;
	u64	nsec;
	struct timespec64 init_ts;
        s64     factor;
};

#endif /* __VDSO_TIME_H */
