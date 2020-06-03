/*
 * System call names.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD$
 */

const char *linux_syscallnames[] = {
#define	nosys	linux_nosys
	"#0",			/* 0 = linux_io_setup */
	"#1",			/* 1 = linux_io_destroy */
	"#2",			/* 2 = linux_io_submit */
	"#3",			/* 3 = linux_io_cancel */
	"#4",			/* 4 = linux_io_getevents */
	"linux_setxattr",			/* 5 = linux_setxattr */
	"linux_lsetxattr",			/* 6 = linux_lsetxattr */
	"linux_fsetxattr",			/* 7 = linux_fsetxattr */
	"linux_getxattr",			/* 8 = linux_getxattr */
	"linux_lgetxattr",			/* 9 = linux_lgetxattr */
	"linux_fgetxattr",			/* 10 = linux_fgetxattr */
	"linux_listxattr",			/* 11 = linux_listxattr */
	"linux_llistxattr",			/* 12 = linux_llistxattr */
	"linux_flistxattr",			/* 13 = linux_flistxattr */
	"linux_removexattr",			/* 14 = linux_removexattr */
	"linux_lremovexattr",			/* 15 = linux_lremovexattr */
	"linux_fremovexattr",			/* 16 = linux_fremovexattr */
	"linux_getcwd",			/* 17 = linux_getcwd */
	"linux_lookup_dcookie",			/* 18 = linux_lookup_dcookie */
	"linux_eventfd2",			/* 19 = linux_eventfd2 */
	"linux_epoll_create1",			/* 20 = linux_epoll_create1 */
	"linux_epoll_ctl",			/* 21 = linux_epoll_ctl */
	"linux_epoll_pwait",			/* 22 = linux_epoll_pwait */
	"dup",			/* 23 = dup */
	"linux_dup3",			/* 24 = linux_dup3 */
	"linux_fcntl",			/* 25 = linux_fcntl */
	"linux_inotify_init1",			/* 26 = linux_inotify_init1 */
	"linux_inotify_add_watch",			/* 27 = linux_inotify_add_watch */
	"linux_inotify_rm_watch",			/* 28 = linux_inotify_rm_watch */
	"linux_ioctl",			/* 29 = linux_ioctl */
	"linux_ioprio_set",			/* 30 = linux_ioprio_set */
	"linux_ioprio_get",			/* 31 = linux_ioprio_get */
	"flock",			/* 32 = flock */
	"linux_mknodat",			/* 33 = linux_mknodat */
	"linux_mkdirat",			/* 34 = linux_mkdirat */
	"linux_unlinkat",			/* 35 = linux_unlinkat */
	"linux_symlinkat",			/* 36 = linux_symlinkat */
	"linux_linkat",			/* 37 = linux_linkat */
	"linux_renameat",			/* 38 = linux_renameat */
	"#39",			/* 39 = linux_umount2 */
	"linux_mount",			/* 40 = linux_mount */
	"linux_pivot_root",			/* 41 = linux_pivot_root */
	"#42",			/* 42 = nfsservctl */
	"linux_statfs",			/* 43 = linux_statfs */
	"linux_fstatfs",			/* 44 = linux_fstatfs */
	"linux_truncate",			/* 45 = linux_truncate */
	"linux_ftruncate",			/* 46 = linux_ftruncate */
	"linux_fallocate",			/* 47 = linux_fallocate */
	"linux_faccessat",			/* 48 = linux_faccessat */
	"linux_chdir",			/* 49 = linux_chdir */
	"fchdir",			/* 50 = fchdir */
	"chroot",			/* 51 = chroot */
	"fchmod",			/* 52 = fchmod */
	"linux_fchmodat",			/* 53 = linux_fchmodat */
	"linux_fchownat",			/* 54 = linux_fchownat */
	"fchown",			/* 55 = fchown */
	"linux_openat",			/* 56 = linux_openat */
	"close",			/* 57 = close */
	"linux_vhangup",			/* 58 = linux_vhangup */
	"linux_pipe2",			/* 59 = linux_pipe2 */
	"#60",			/* 60 = linux_quotactl */
	"linux_getdents64",			/* 61 = linux_getdents64 */
	"linux_lseek",			/* 62 = linux_lseek */
	"read",			/* 63 = read */
	"write",			/* 64 = write */
	"readv",			/* 65 = readv */
	"writev",			/* 66 = writev */
	"linux_pread",			/* 67 = linux_pread */
	"linux_pwrite",			/* 68 = linux_pwrite */
	"linux_preadv",			/* 69 = linux_preadv */
	"linux_pwritev",			/* 70 = linux_pwritev */
	"linux_sendfile",			/* 71 = linux_sendfile */
	"linux_pselect6",			/* 72 = linux_pselect6 */
	"linux_ppoll",			/* 73 = linux_ppoll */
	"linux_signalfd4",			/* 74 = linux_signalfd4 */
	"linux_vmsplice",			/* 75 = linux_vmsplice */
	"linux_splice",			/* 76 = linux_splice */
	"linux_tee",			/* 77 = linux_tee */
	"linux_readlinkat",			/* 78 = linux_readlinkat */
	"linux_newfstatat",			/* 79 = linux_newfstatat */
	"linux_newfstat",			/* 80 = linux_newfstat */
	"#81",			/* 81 = linux_sync */
	"fsync",			/* 82 = fsync */
	"linux_fdatasync",			/* 83 = linux_fdatasync */
	"linux_sync_file_range",			/* 84 = linux_sync_file_range */
	"linux_timerfd_create",			/* 85 = linux_timerfd_create */
	"linux_timerfd_settime",			/* 86 = linux_timerfd_settime */
	"linux_timerfd_gettime",			/* 87 = linux_timerfd_gettime */
	"linux_utimensat",			/* 88 = linux_utimensat */
	"acct",			/* 89 = acct */
	"linux_capget",			/* 90 = linux_capget */
	"linux_capset",			/* 91 = linux_capset */
	"linux_personality",			/* 92 = linux_personality */
	"linux_exit",			/* 93 = linux_exit */
	"linux_exit_group",			/* 94 = linux_exit_group */
	"linux_waitid",			/* 95 = linux_waitid */
	"linux_set_tid_address",			/* 96 = linux_set_tid_address */
	"linux_unshare",			/* 97 = linux_unshare */
	"linux_sys_futex",			/* 98 = linux_sys_futex */
	"linux_set_robust_list",			/* 99 = linux_set_robust_list */
	"linux_get_robust_list",			/* 100 = linux_get_robust_list */
	"linux_nanosleep",			/* 101 = linux_nanosleep */
	"linux_getitimer",			/* 102 = linux_getitimer */
	"linux_setitimer",			/* 103 = linux_setitimer */
	"linux_kexec_load",			/* 104 = linux_kexec_load */
	"linux_init_module",			/* 105 = linux_init_module */
	"linux_delete_module",			/* 106 = linux_delete_module */
	"linux_timer_create",			/* 107 = linux_timer_create */
	"linux_timer_gettime",			/* 108 = linux_timer_gettime */
	"linux_timer_getoverrun",			/* 109 = linux_timer_getoverrun */
	"linux_timer_settime",			/* 110 = linux_timer_settime */
	"linux_timer_delete",			/* 111 = linux_timer_delete */
	"linux_clock_settime",			/* 112 = linux_clock_settime */
	"linux_clock_gettime",			/* 113 = linux_clock_gettime */
	"linux_clock_getres",			/* 114 = linux_clock_getres */
	"linux_clock_nanosleep",			/* 115 = linux_clock_nanosleep */
	"linux_syslog",			/* 116 = linux_syslog */
	"linux_ptrace",			/* 117 = linux_ptrace */
	"linux_sched_setparam",			/* 118 = linux_sched_setparam */
	"linux_sched_setscheduler",			/* 119 = linux_sched_setscheduler */
	"linux_sched_getscheduler",			/* 120 = linux_sched_getscheduler */
	"linux_sched_getparam",			/* 121 = linux_sched_getparam */
	"linux_sched_setaffinity",			/* 122 = linux_sched_setaffinity */
	"linux_sched_getaffinity",			/* 123 = linux_sched_getaffinity */
	"sched_yield",			/* 124 = sched_yield */
	"linux_sched_get_priority_max",			/* 125 = linux_sched_get_priority_max */
	"linux_sched_get_priority_min",			/* 126 = linux_sched_get_priority_min */
	"linux_sched_rr_get_interval",			/* 127 = linux_sched_rr_get_interval */
	"#128",			/* 128 = restart_syscall */
	"linux_kill",			/* 129 = linux_kill */
	"linux_tkill",			/* 130 = linux_tkill */
	"linux_tgkill",			/* 131 = linux_tgkill */
	"linux_sigaltstack",			/* 132 = linux_sigaltstack */
	"linux_rt_sigsuspend",			/* 133 = linux_rt_sigsuspend */
	"linux_rt_sigaction",			/* 134 = linux_rt_sigaction */
	"linux_rt_sigprocmask",			/* 135 = linux_rt_sigprocmask */
	"linux_rt_sigpending",			/* 136 = linux_rt_sigpending */
	"linux_rt_sigtimedwait",			/* 137 = linux_rt_sigtimedwait */
	"linux_rt_sigqueueinfo",			/* 138 = linux_rt_sigqueueinfo */
	"linux_rt_sigreturn",			/* 139 = linux_rt_sigreturn */
	"setpriority",			/* 140 = setpriority */
	"linux_getpriority",			/* 141 = linux_getpriority */
	"linux_reboot",			/* 142 = linux_reboot */
	"setregid",			/* 143 = setregid */
	"setgid",			/* 144 = setgid */
	"setreuid",			/* 145 = setreuid */
	"setuid",			/* 146 = setuid */
	"setresuid",			/* 147 = setresuid */
	"getresuid",			/* 148 = getresuid */
	"setresgid",			/* 149 = setresgid */
	"getresgid",			/* 150 = getresgid */
	"linux_setfsuid",			/* 151 = linux_setfsuid */
	"linux_setfsgid",			/* 152 = linux_setfsgid */
	"linux_times",			/* 153 = linux_times */
	"setpgid",			/* 154 = setpgid */
	"getpgid",			/* 155 = getpgid */
	"linux_getsid",			/* 156 = linux_getsid */
	"setsid",			/* 157 = setsid */
	"linux_getgroups",			/* 158 = linux_getgroups */
	"linux_setgroups",			/* 159 = linux_setgroups */
	"linux_newuname",			/* 160 = linux_newuname */
	"linux_sethostname",			/* 161 = linux_sethostname */
	"linux_setdomainname",			/* 162 = linux_setdomainname */
	"linux_getrlimit",			/* 163 = linux_getrlimit */
	"linux_setrlimit",			/* 164 = linux_setrlimit */
	"getrusage",			/* 165 = getrusage */
	"umask",			/* 166 = umask */
	"linux_prctl",			/* 167 = linux_prctl */
	"linux_getcpu",			/* 168 = linux_getcpu */
	"gettimeofday",			/* 169 = gettimeofday */
	"settimeofday",			/* 170 = settimeofday */
	"linux_adjtimex",			/* 171 = linux_adjtimex */
	"linux_getpid",			/* 172 = linux_getpid */
	"linux_getppid",			/* 173 = linux_getppid */
	"linux_getuid",			/* 174 = linux_getuid */
	"geteuid",			/* 175 = geteuid */
	"linux_getgid",			/* 176 = linux_getgid */
	"getegid",			/* 177 = getegid */
	"linux_gettid",			/* 178 = linux_gettid */
	"linux_sysinfo",			/* 179 = linux_sysinfo */
	"linux_mq_open",			/* 180 = linux_mq_open */
	"linux_mq_unlink",			/* 181 = linux_mq_unlink */
	"linux_mq_timedsend",			/* 182 = linux_mq_timedsend */
	"linux_mq_timedreceive",			/* 183 = linux_mq_timedreceive */
	"linux_mq_notify",			/* 184 = linux_mq_notify */
	"linux_mq_getsetattr",			/* 185 = linux_mq_getsetattr */
	"linux_msgget",			/* 186 = linux_msgget */
	"linux_msgctl",			/* 187 = linux_msgctl */
	"linux_msgrcv",			/* 188 = linux_msgrcv */
	"linux_msgsnd",			/* 189 = linux_msgsnd */
	"linux_semget",			/* 190 = linux_semget */
	"linux_semctl",			/* 191 = linux_semctl */
	"linux_semtimedop",			/* 192 = linux_semtimedop */
	"linux_semop",			/* 193 = linux_semop */
	"linux_shmget",			/* 194 = linux_shmget */
	"linux_shmctl",			/* 195 = linux_shmctl */
	"linux_shmat",			/* 196 = linux_shmat */
	"linux_shmdt",			/* 197 = linux_shmdt */
	"linux_socket",			/* 198 = linux_socket */
	"linux_socketpair",			/* 199 = linux_socketpair */
	"linux_bind",			/* 200 = linux_bind */
	"linux_listen",			/* 201 = linux_listen */
	"linux_accept",			/* 202 = linux_accept */
	"linux_connect",			/* 203 = linux_connect */
	"linux_getsockname",			/* 204 = linux_getsockname */
	"linux_getpeername",			/* 205 = linux_getpeername */
	"linux_sendto",			/* 206 = linux_sendto */
	"linux_recvfrom",			/* 207 = linux_recvfrom */
	"linux_setsockopt",			/* 208 = linux_setsockopt */
	"linux_getsockopt",			/* 209 = linux_getsockopt */
	"linux_shutdown",			/* 210 = linux_shutdown */
	"linux_sendmsg",			/* 211 = linux_sendmsg */
	"linux_recvmsg",			/* 212 = linux_recvmsg */
	"#213",			/* 213 = linux_readahead */
	"linux_brk",			/* 214 = linux_brk */
	"munmap",			/* 215 = munmap */
	"linux_mremap",			/* 216 = linux_mremap */
	"linux_add_key",			/* 217 = linux_add_key */
	"linux_request_key",			/* 218 = linux_request_key */
	"linux_keyctl",			/* 219 = linux_keyctl */
	"linux_clone",			/* 220 = linux_clone */
	"linux_execve",			/* 221 = linux_execve */
	"linux_mmap2",			/* 222 = linux_mmap2 */
	"linux_fadvise64",			/* 223 = linux_fadvise64 */
	"swapon",			/* 224 = swapon */
	"linux_swapoff",			/* 225 = linux_swapoff */
	"linux_mprotect",			/* 226 = linux_mprotect */
	"linux_msync",			/* 227 = linux_msync */
	"mlock",			/* 228 = mlock */
	"munlock",			/* 229 = munlock */
	"mlockall",			/* 230 = mlockall */
	"munlockall",			/* 231 = munlockall */
	"linux_mincore",			/* 232 = linux_mincore */
	"madvise",			/* 233 = madvise */
	"linux_remap_file_pages",			/* 234 = linux_remap_file_pages */
	"linux_mbind",			/* 235 = linux_mbind */
	"linux_get_mempolicy",			/* 236 = linux_get_mempolicy */
	"linux_set_mempolicy",			/* 237 = linux_set_mempolicy */
	"linux_migrate_pages",			/* 238 = linux_migrate_pages */
	"linux_move_pages",			/* 239 = linux_move_pages */
	"linux_rt_tgsigqueueinfo",			/* 240 = linux_rt_tgsigqueueinfo */
	"linux_perf_event_open",			/* 241 = linux_perf_event_open */
	"linux_accept4",			/* 242 = linux_accept4 */
	"linux_recvmmsg",			/* 243 = linux_recvmmsg */
	"#244",			/* 244 = unimpl_md_syscall */
	"#245",			/* 245 = unimpl_md_syscall */
	"#246",			/* 246 = unimpl_md_syscall */
	"#247",			/* 247 = unimpl_md_syscall */
	"#248",			/* 248 = unimpl_md_syscall */
	"#249",			/* 249 = unimpl_md_syscall */
	"#250",			/* 250 = unimpl_md_syscall */
	"#251",			/* 251 = unimpl_md_syscall */
	"#252",			/* 252 = unimpl_md_syscall */
	"#253",			/* 253 = unimpl_md_syscall */
	"#254",			/* 254 = unimpl_md_syscall */
	"#255",			/* 255 = unimpl_md_syscall */
	"#256",			/* 256 = unimpl_md_syscall */
	"#257",			/* 257 = unimpl_md_syscall */
	"#258",			/* 258 = unimpl_md_syscall */
	"#259",			/* 259 = unimpl_md_syscall */
	"linux_wait4",			/* 260 = linux_wait4 */
	"linux_prlimit64",			/* 261 = linux_prlimit64 */
	"linux_fanotify_init",			/* 262 = linux_fanotify_init */
	"linux_fanotify_mark",			/* 263 = linux_fanotify_mark */
	"linux_name_to_handle_at",			/* 264 = linux_name_to_handle_at */
	"linux_open_by_handle_at",			/* 265 = linux_open_by_handle_at */
	"linux_clock_adjtime",			/* 266 = linux_clock_adjtime */
	"linux_syncfs",			/* 267 = linux_syncfs */
	"linux_setns",			/* 268 = linux_setns */
	"linux_sendmmsg",			/* 269 = linux_sendmmsg */
	"linux_process_vm_readv",			/* 270 = linux_process_vm_readv */
	"linux_process_vm_writev",			/* 271 = linux_process_vm_writev */
	"linux_kcmp",			/* 272 = linux_kcmp */
	"linux_finit_module",			/* 273 = linux_finit_module */
	"linux_sched_setattr",			/* 274 = linux_sched_setattr */
	"linux_sched_getattr",			/* 275 = linux_sched_getattr */
	"linux_renameat2",			/* 276 = linux_renameat2 */
	"linux_seccomp",			/* 277 = linux_seccomp */
	"linux_getrandom",			/* 278 = linux_getrandom */
	"linux_memfd_create",			/* 279 = linux_memfd_create */
	"linux_bpf",			/* 280 = linux_bpf */
	"linux_execveat",			/* 281 = linux_execveat */
	"linux_userfaultfd",			/* 282 = linux_userfaultfd */
	"linux_membarrier",			/* 283 = linux_membarrier */
	"linux_mlock2",			/* 284 = linux_mlock2 */
	"linux_copy_file_range",			/* 285 = linux_copy_file_range */
	"linux_preadv2",			/* 286 = linux_preadv2 */
	"linux_pwritev2",			/* 287 = linux_pwritev2 */
	"linux_pkey_mprotect",			/* 288 = linux_pkey_mprotect */
	"linux_pkey_alloc",			/* 289 = linux_pkey_alloc */
	"linux_pkey_free",			/* 290 = linux_pkey_free */
	"#291",			/* 291 = nosys */
};
