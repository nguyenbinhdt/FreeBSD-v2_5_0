/*-
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * Copyright (c) 1994-1995 Søren Schmidt
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD$");

#include <sys/param.h>
#include <sys/kernel.h>
#include <sys/sdt.h>
#include <sys/systm.h>
#include <sys/proc.h>

#include <i386/linux/linux.h>
#include <i386/linux/linux_proto.h>
#include <compat/linux/linux_dtrace.h>
#include <compat/linux/linux_util.h>

/* DTrace init */
LIN_SDT_PROVIDER_DECLARE(LINUX_DTRACE);

UNIMPLEMENTED(afs_syscall);
UNIMPLEMENTED(break);
UNIMPLEMENTED(create_module);	/* Added in Linux 1.0 removed in 2.6. */
UNIMPLEMENTED(ftime);
UNIMPLEMENTED(get_kernel_syms);	/* Added in Linux 1.0 removed in 2.6. */
UNIMPLEMENTED(getpmsg);
UNIMPLEMENTED(gtty);
UNIMPLEMENTED(stty);
UNIMPLEMENTED(lock);
UNIMPLEMENTED(mpx);
UNIMPLEMENTED(nfsservctl);	/* Added in Linux 2.2 removed in 3.1. */
UNIMPLEMENTED(prof);
UNIMPLEMENTED(profil);
UNIMPLEMENTED(putpmsg);
UNIMPLEMENTED(query_module);	/* Added in Linux 2.2 removed in 2.6. */
UNIMPLEMENTED(ulimit);
UNIMPLEMENTED(vserver);

DUMMY(stime);
DUMMY(fstat);
DUMMY(olduname);
DUMMY(syslog);
DUMMY(uname);
DUMMY(vhangup);
DUMMY(vm86old);
DUMMY(swapoff);
DUMMY(adjtimex);
DUMMY(init_module);
DUMMY(delete_module);
DUMMY(quotactl);
DUMMY(bdflush);
DUMMY(sysfs);
DUMMY(vm86);
DUMMY(sendfile);		/* different semantics */
DUMMY(setfsuid);
DUMMY(setfsgid);
DUMMY(pivot_root);
DUMMY(lookup_dcookie);
DUMMY(remap_file_pages);
DUMMY(mbind);
DUMMY(get_mempolicy);
DUMMY(set_mempolicy);
DUMMY(kexec_load);
/* Linux 2.6.11: */
DUMMY(add_key);
DUMMY(request_key);
DUMMY(keyctl);
/* Linux 2.6.13: */
DUMMY(ioprio_set);
DUMMY(ioprio_get);
DUMMY(inotify_init);
DUMMY(inotify_add_watch);
DUMMY(inotify_rm_watch);
/* Linux 2.6.16: */
DUMMY(migrate_pages);
DUMMY(unshare);
/* Linux 2.6.17: */
DUMMY(splice);
DUMMY(sync_file_range);
DUMMY(tee);
DUMMY(vmsplice);
/* Linux 2.6.18: */
DUMMY(move_pages);
/* Linux 2.6.19: */
DUMMY(getcpu);
/* Linux 2.6.22: */
DUMMY(signalfd);
/* Linux 2.6.27: */
DUMMY(signalfd4);
DUMMY(inotify_init1);
/* Linux 2.6.31: */
DUMMY(perf_event_open);
/* Linux 2.6.33: */
DUMMY(fanotify_init);
DUMMY(fanotify_mark);
/* Linux 2.6.39: */
DUMMY(name_to_handle_at);
DUMMY(open_by_handle_at);
DUMMY(clock_adjtime);
/* Linux 3.0: */
DUMMY(setns);
/* Linux 3.2: */
DUMMY(process_vm_readv);
DUMMY(process_vm_writev);
/* Linux 3.5: */
DUMMY(kcmp);
/* Linux 3.8: */
DUMMY(finit_module);
DUMMY(sched_setattr);
DUMMY(sched_getattr);
/* Linux 3.14: */
DUMMY(renameat2);
/* Linux 3.15: */
DUMMY(seccomp);
DUMMY(memfd_create);
/* Linux 3.18: */
DUMMY(bpf);
/* Linux 3.19: */
DUMMY(execveat);
/* Linux 4.2: */
DUMMY(userfaultfd);
/* Linux 4.3: */
DUMMY(membarrier);
/* Linux 4.4: */
DUMMY(mlock2);
/* Linux 4.5: */
DUMMY(copy_file_range);
/* Linux 4.6: */
DUMMY(preadv2);
DUMMY(pwritev2);
/* Linux 4.8: */
DUMMY(pkey_mprotect);
DUMMY(pkey_alloc);
DUMMY(pkey_free);

#define DUMMY_XATTR(s)						\
int								\
linux_ ## s ## xattr(						\
    struct thread *td, struct linux_ ## s ## xattr_args *arg)	\
{								\
								\
	return (ENOATTR);					\
}
DUMMY_XATTR(set);
DUMMY_XATTR(lset);
DUMMY_XATTR(fset);
DUMMY_XATTR(get);
DUMMY_XATTR(lget);
DUMMY_XATTR(fget);
DUMMY_XATTR(list);
DUMMY_XATTR(llist);
DUMMY_XATTR(flist);
DUMMY_XATTR(remove);
DUMMY_XATTR(lremove);
DUMMY_XATTR(fremove);