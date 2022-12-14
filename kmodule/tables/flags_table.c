/*

Copyright (c) 2013-2018 Draios Inc. dba Sysdig.

This file is dual licensed under either the MIT or GPL 2. See MIT.txt
or GPL2.txt for full copies of the license.

*/

#include "events.h"

const struct nod_name_value socket_families[] = {
	{"AF_NFC", NOD_AF_NFC},
	{"AF_ALG", NOD_AF_ALG},
	{"AF_CAIF", NOD_AF_CAIF},
	{"AF_IEEE802154", NOD_AF_IEEE802154},
	{"AF_PHONET", NOD_AF_PHONET},
	{"AF_ISDN", NOD_AF_ISDN},
	{"AF_RXRPC", NOD_AF_RXRPC},
	{"AF_IUCV", NOD_AF_IUCV},
	{"AF_BLUETOOTH", NOD_AF_BLUETOOTH},
	{"AF_TIPC", NOD_AF_TIPC},
	{"AF_CAN", NOD_AF_CAN},
	{"AF_LLC", NOD_AF_LLC},
	{"AF_WANPIPE", NOD_AF_WANPIPE},
	{"AF_PPPOX", NOD_AF_PPPOX},
	{"AF_IRDA", NOD_AF_IRDA},
	{"AF_SNA", NOD_AF_SNA},
	{"AF_RDS", NOD_AF_RDS},
	{"AF_ATMSVC", NOD_AF_ATMSVC},
	{"AF_ECONET", NOD_AF_ECONET},
	{"AF_ASH", NOD_AF_ASH},
	{"AF_PACKET", NOD_AF_PACKET},
	{"AF_ROUTE", NOD_AF_ROUTE},
	{"AF_NETLINK", NOD_AF_NETLINK},
	{"AF_KEY", NOD_AF_KEY},
	{"AF_SECURITY", NOD_AF_SECURITY},
	{"AF_NETBEUI", NOD_AF_NETBEUI},
	{"AF_DECnet", NOD_AF_DECnet},
	{"AF_ROSE", NOD_AF_ROSE},
	{"AF_INET6", NOD_AF_INET6},
	{"AF_X25", NOD_AF_X25},
	{"AF_ATMPVC", NOD_AF_ATMPVC},
	{"AF_BRIDGE", NOD_AF_BRIDGE},
	{"AF_NETROM", NOD_AF_NETROM},
	{"AF_APPLETALK", NOD_AF_APPLETALK},
	{"AF_IPX", NOD_AF_IPX},
	{"AF_AX25", NOD_AF_AX25},
	{"AF_INET", NOD_AF_INET},
	{"AF_LOCAL", NOD_AF_LOCAL},
	{"AF_UNIX", NOD_AF_UNIX},
	{"AF_UNSPEC", NOD_AF_UNSPEC},
	{0, 0},
};

const struct nod_name_value file_flags[] = {
	{"O_LARGEFILE", NOD_O_LARGEFILE},
	{"O_DIRECTORY", NOD_O_DIRECTORY},
	{"O_DIRECT", NOD_O_DIRECT},
	{"O_TRUNC", NOD_O_TRUNC},
	{"O_SYNC", NOD_O_SYNC},
	{"O_NONBLOCK", NOD_O_NONBLOCK},
	{"O_EXCL", NOD_O_EXCL},
	{"O_DSYNC", NOD_O_DSYNC},
	{"O_APPEND", NOD_O_APPEND},
	{"O_CREAT", NOD_O_CREAT},
	{"O_RDWR", NOD_O_RDWR},
	{"O_WRONLY", NOD_O_WRONLY},
	{"O_RDONLY", NOD_O_RDONLY},
	{"O_CLOEXEC", NOD_O_CLOEXEC},
	{"O_NONE", NOD_O_NONE},
	{"O_TMPFILE", NOD_O_TMPFILE},
	{0, 0},
};

const struct nod_name_value flock_flags[] = {
	{"LOCK_SH", NOD_LOCK_SH},
	{"LOCK_EX", NOD_LOCK_EX},
	{"LOCK_NB", NOD_LOCK_NB},
	{"LOCK_UN", NOD_LOCK_UN},
	{"LOCK_NONE", NOD_LOCK_NONE},
	{0, 0},
};

const struct nod_name_value clone_flags[] = {
	{"CLONE_FILES", NOD_CL_CLONE_FILES},
	{"CLONE_FS", NOD_CL_CLONE_FS},
	{"CLONE_IO", NOD_CL_CLONE_IO},
	{"CLONE_NEWIPC", NOD_CL_CLONE_NEWIPC},
	{"CLONE_NEWNET", NOD_CL_CLONE_NEWNET},
	{"CLONE_NEWNS", NOD_CL_CLONE_NEWNS},
	{"CLONE_NEWPID", NOD_CL_CLONE_NEWPID},
	{"CLONE_NEWUTS", NOD_CL_CLONE_NEWUTS},
	{"CLONE_PARENT", NOD_CL_CLONE_PARENT},
	{"CLONE_PARENT_SETTID", NOD_CL_CLONE_PARENT_SETTID},
	{"CLONE_PTRACE", NOD_CL_CLONE_PTRACE},
	{"CLONE_SIGHAND", NOD_CL_CLONE_SIGHAND},
	{"CLONE_SYSVSEM", NOD_CL_CLONE_SYSVSEM},
	{"CLONE_THREAD", NOD_CL_CLONE_THREAD},
	{"CLONE_UNTRACED", NOD_CL_CLONE_UNTRACED},
	{"CLONE_VM", NOD_CL_CLONE_VM},
	{"CLONE_INVERTED", NOD_CL_CLONE_INVERTED},
	{"NAME_CHANGED", NOD_CL_NAME_CHANGED},
	{"CLOSED", NOD_CL_CLOSED},
	{"CLONE_NEWUSER", NOD_CL_CLONE_NEWUSER},
	{"CLONE_CHILD_CLEARTID", NOD_CL_CLONE_CHILD_CLEARTID},
	{"CLONE_CHILD_SETTID", NOD_CL_CLONE_CHILD_SETTID},
	{"CLONE_SETTLS", NOD_CL_CLONE_SETTLS},
	{"CLONE_STOPPED", NOD_CL_CLONE_STOPPED},
	{"CLONE_VFORK", NOD_CL_CLONE_VFORK},
	{"CLONE_NEWCGROUP", NOD_CL_CLONE_NEWCGROUP},
	{0, 0},
};

const struct nod_name_value futex_operations[] = {
	{"FUTEX_CLOCK_REALTIME", NOD_FU_FUTEX_CLOCK_REALTIME},
	{"FUTEX_PRIVATE_FLAG", NOD_FU_FUTEX_PRIVATE_FLAG},
	{"FUTEX_CMP_REQUEUE_PI", NOD_FU_FUTEX_CMP_REQUEUE_PI},
	{"FUTEX_WAIT_REQUEUE_PI", NOD_FU_FUTEX_WAIT_REQUEUE_PI},
	{"FUTEX_WAKE_BITSET", NOD_FU_FUTEX_WAKE_BITSET},
	{"FUTEX_WAIT_BITSET", NOD_FU_FUTEX_WAIT_BITSET},
	{"FUTEX_TRYLOCK_PI", NOD_FU_FUTEX_TRYLOCK_PI},
	{"FUTEX_UNLOCK_PI", NOD_FU_FUTEX_UNLOCK_PI},
	{"FUTEX_LOCK_PI", NOD_FU_FUTEX_LOCK_PI},
	{"FUTEX_WAKE_OP", NOD_FU_FUTEX_WAKE_OP},
	{"FUTEX_CMP_REQUEUE", NOD_FU_FUTEX_CMP_REQUEUE},
	{"FUTEX_REQUEUE", NOD_FU_FUTEX_REQUEUE},
	{"FUTEX_FD", NOD_FU_FUTEX_FD},
	{"FUTEX_WAKE", NOD_FU_FUTEX_WAKE},
	{"FUTEX_WAIT", NOD_FU_FUTEX_WAIT},
	{0, 0},
};

const struct nod_name_value poll_flags[] = {
	{"POLLIN", NOD_POLLIN},
	{"POLLPRI", NOD_POLLPRI},
	{"POLLOUT", NOD_POLLOUT},
	{"POLLRDHUP", NOD_POLLRDHUP},
	{"POLLERR", NOD_POLLERR},
	{"POLLHUP", NOD_POLLHUP},
	{"POLLNVAL", NOD_POLLNVAL},
	{"POLLRDNORM", NOD_POLLRDNORM},
	{"POLLRDBAND", NOD_POLLRDBAND},
	{"POLLWRNORM", NOD_POLLWRNORM},
	{"POLLWRBAND", NOD_POLLWRBAND},
	{0, 0},
};

/* http://lxr.free-electrons.com/source/include/uapi/linux/fs.h?v=4.2#L65 */
const struct nod_name_value mount_flags[] = {
	{"RDONLY", NOD_MS_RDONLY},
	{"NOSUID", NOD_MS_NOSUID},
	{"NODEV", NOD_MS_NODEV},
	{"NOEXEC", NOD_MS_NOEXEC},
	{"SYNCHRONOUS", NOD_MS_SYNCHRONOUS},
	{"REMOUNT", NOD_MS_REMOUNT},
	{"MANDLOCK", NOD_MS_MANDLOCK},
	{"DIRSYNC", NOD_MS_DIRSYNC},
	{"NOATIME", NOD_MS_NOATIME},
	{"NODIRATIME", NOD_MS_NODIRATIME},
	{"BIND", NOD_MS_BIND},
	{"MOVE", NOD_MS_MOVE},
	{"REC", NOD_MS_REC},
	{"SILENT", NOD_MS_SILENT},
	{"POSIXACL", NOD_MS_POSIXACL},
	{"UNBINDABLE", NOD_MS_UNBINDABLE},
	{"PRIVATE", NOD_MS_PRIVATE},
	{"SLAVE", NOD_MS_SLAVE},
	{"SHARED", NOD_MS_SHARED},
	{"RELATIME", NOD_MS_RELATIME},
	{"KERNMOUNT", NOD_MS_KERNMOUNT},
	{"I_VERSION", NOD_MS_I_VERSION},
	{"STRICTATIME", NOD_MS_STRICTATIME},
	{"LAZYTIME", NOD_MS_LAZYTIME},
	{"NOSEC", NOD_MS_NOSEC},
	{"BORN", NOD_MS_BORN},
	{"ACTIVE", NOD_MS_ACTIVE},
	{"NOUSER", NOD_MS_NOUSER},
	{0, 0},
};

/* http://lxr.free-electrons.com/source/include/linux/fs.h?v=4.2#L1251 */
const struct nod_name_value umount_flags[] = {
	{"FORCE", NOD_MNT_FORCE},
	{"DETACH", NOD_MNT_DETACH},
	{"EXPIRE", NOD_MNT_EXPIRE},
	{"NOFOLLOW", NOD_UMOUNT_NOFOLLOW},
	{0, 0},
};

const struct nod_name_value lseek_whence[] = {
	{"SEEK_END", NOD_SEEK_END},
	{"SEEK_CUR", NOD_SEEK_CUR},
	{"SEEK_SET", NOD_SEEK_SET},
	{0, 0},
};

const struct nod_name_value shutdown_how[] = {
	{"SHUT_RDWR", NOD_SHUT_RDWR},
	{"SHUT_WR", NOD_SHUT_WR},
	{"SHUT_RD", NOD_SHUT_RD},
	{0, 0},
};

const struct nod_name_value rlimit_resources[] = {
	{"RLIMIT_UNKNOWN", NOD_RLIMIT_UNKNOWN},
	{"RLIMIT_RTTIME", NOD_RLIMIT_RTTIME},
	{"RLIMIT_RTPRIO", NOD_RLIMIT_RTPRIO},
	{"RLIMIT_NICE", NOD_RLIMIT_NICE},
	{"RLIMIT_MSGQUEUE", NOD_RLIMIT_MSGQUEUE},
	{"RLIMIT_SIGPENDING", NOD_RLIMIT_SIGPENDING},
	{"RLIMIT_LOCKS", NOD_RLIMIT_LOCKS},
	{"RLIMIT_AS", NOD_RLIMIT_AS},
	{"RLIMIT_MEMLOCK", NOD_RLIMIT_MEMLOCK},
	{"RLIMIT_NOFILE", NOD_RLIMIT_NOFILE},
	{"RLIMIT_NPROC", NOD_RLIMIT_NPROC},
	{"RLIMIT_RSS", NOD_RLIMIT_RSS},
	{"RLIMIT_CORE", NOD_RLIMIT_CORE},
	{"RLIMIT_STACK", NOD_RLIMIT_STACK},
	{"RLIMIT_DATA", NOD_RLIMIT_DATA},
	{"RLIMIT_FSIZE", NOD_RLIMIT_FSIZE},
	{"RLIMIT_CPU", NOD_RLIMIT_CPU},
	{0, 0},
};

const struct nod_name_value fcntl_commands[] = {
	{"F_GETPIPE_SZ", NOD_FCNTL_F_GETPIPE_SZ},
	{"F_SETPIPE_SZ", NOD_FCNTL_F_SETPIPE_SZ},
	{"F_NOTIFY", NOD_FCNTL_F_NOTIFY},
	{"F_DUPFD_CLOEXEC", NOD_FCNTL_F_DUPFD_CLOEXEC},
	{"F_CANCELLK", NOD_FCNTL_F_CANCELLK},
	{"F_GETLEASE", NOD_FCNTL_F_GETLEASE},
	{"F_SETLEASE", NOD_FCNTL_F_SETLEASE},
	{"F_GETOWN_EX", NOD_FCNTL_F_GETOWN_EX},
	{"F_SETOWN_EX", NOD_FCNTL_F_SETOWN_EX},
#ifndef CONFIG_64BIT
	{"F_SETLKW64", NOD_FCNTL_F_SETLKW64},
	{"F_SETLK64", NOD_FCNTL_F_SETLK64},
	{"F_GETLK64", NOD_FCNTL_F_GETLK64},
#endif
	{"F_GETSIG", NOD_FCNTL_F_GETSIG},
	{"F_SETSIG", NOD_FCNTL_F_SETSIG},
	{"F_GETOWN", NOD_FCNTL_F_GETOWN},
	{"F_SETOWN", NOD_FCNTL_F_SETOWN},
	{"F_SETLKW", NOD_FCNTL_F_SETLKW},
	{"F_SETLK", NOD_FCNTL_F_SETLK},
	{"F_GETLK", NOD_FCNTL_F_GETLK},
	{"F_SETFL", NOD_FCNTL_F_SETFL},
	{"F_GETFL", NOD_FCNTL_F_GETFL},
	{"F_SETFD", NOD_FCNTL_F_SETFD},
	{"F_GETFD", NOD_FCNTL_F_GETFD},
	{"F_DUPFD", NOD_FCNTL_F_DUPFD},
	{"F_OFD_GETLK", NOD_FCNTL_F_OFD_GETLK},
	{"F_OFD_SETLK", NOD_FCNTL_F_OFD_SETLK},
	{"F_OFD_SETLKW", NOD_FCNTL_F_OFD_SETLKW},
	{"UNKNOWN", NOD_FCNTL_UNKNOWN},
	{0, 0},
};

const struct nod_name_value sockopt_levels[] = {
	{"SOL_SOCKET", NOD_SOCKOPT_LEVEL_SOL_SOCKET},
	{"SOL_TCP", NOD_SOCKOPT_LEVEL_SOL_TCP},
	{"UNKNOWN", NOD_SOCKOPT_LEVEL_UNKNOWN},
	{0, 0},
};

const struct nod_name_value sockopt_options[] = {
	{"SO_COOKIE", NOD_SOCKOPT_SO_COOKIE},
	{"SO_MEMINFO", NOD_SOCKOPT_SO_MEMINFO},
	{"SO_PEERGROUPS", NOD_SOCKOPT_SO_PEERGROUPS},
	{"SO_ATTACH_BPF", NOD_SOCKOPT_SO_ATTACH_BPF},
	{"SO_INCOMING_CPU", NOD_SOCKOPT_SO_INCOMING_CPU},
	{"SO_BPF_EXTENSIONS", NOD_SOCKOPT_SO_BPF_EXTENSIONS},
	{"SO_MAX_PACING_RATE", NOD_SOCKOPT_SO_MAX_PACING_RATE},
	{"SO_BUSY_POLL", NOD_SOCKOPT_SO_BUSY_POLL},
	{"SO_SELECT_ERR_QUEUE", NOD_SOCKOPT_SO_SELECT_ERR_QUEUE},
	{"SO_LOCK_FILTER", NOD_SOCKOPT_SO_LOCK_FILTER},
	{"SO_NOFCS", NOD_SOCKOPT_SO_NOFCS},
	{"SO_PEEK_OFF", NOD_SOCKOPT_SO_PEEK_OFF},
	{"SO_WIFI_STATUS", NOD_SOCKOPT_SO_WIFI_STATUS},
	{"SO_RXQ_OVFL", NOD_SOCKOPT_SO_RXQ_OVFL},
	{"SO_DOMAIN", NOD_SOCKOPT_SO_DOMAIN},
	{"SO_PROTOCOL", NOD_SOCKOPT_SO_PROTOCOL},
	{"SO_TIMESTAMPING", NOD_SOCKOPT_SO_TIMESTAMPING},
	{"SO_MARK", NOD_SOCKOPT_SO_MARK},
	{"SO_TIMESTAMPNS", NOD_SOCKOPT_SO_TIMESTAMPNS},
	{"SO_PASSSEC", NOD_SOCKOPT_SO_PASSSEC},
	{"SO_PEERSEC", NOD_SOCKOPT_SO_PEERSEC},
	{"SO_ACCEPTCONN", NOD_SOCKOPT_SO_ACCEPTCONN},
	{"SO_TIMESTAMP", NOD_SOCKOPT_SO_TIMESTAMP},
	{"SO_PEERNAME", NOD_SOCKOPT_SO_PEERNAME},
	{"SO_DETACH_FILTER", NOD_SOCKOPT_SO_DETACH_FILTER},
	{"SO_ATTACH_FILTER", NOD_SOCKOPT_SO_ATTACH_FILTER},
	{"SO_BINDTODEVICE", NOD_SOCKOPT_SO_BINDTODEVICE},
	{"SO_SECURITY_ENCRYPTION_NETWORK", NOD_SOCKOPT_SO_SECURITY_ENCRYPTION_NETWORK},
	{"SO_SECURITY_ENCRYPTION_TRANSPORT", NOD_SOCKOPT_SO_SECURITY_ENCRYPTION_TRANSPORT},
	{"SO_SECURITY_AUTHENTICATION", NOD_SOCKOPT_SO_SECURITY_AUTHENTICATION},
	{"SO_SNDTIMEO", NOD_SOCKOPT_SO_SNDTIMEO},
	{"SO_RCVTIMEO", NOD_SOCKOPT_SO_RCVTIMEO},
	{"SO_SNDLOWAT", NOD_SOCKOPT_SO_SNDLOWAT},
	{"SO_RCVLOWAT", NOD_SOCKOPT_SO_RCVLOWAT},
	{"SO_PEERCRED", NOD_SOCKOPT_SO_PEERCRED},
	{"SO_PASSCRED", NOD_SOCKOPT_SO_PASSCRED},
	{"SO_REUSEPORT", NOD_SOCKOPT_SO_REUSEPORT},
	{"SO_BSDCOMPAT", NOD_SOCKOPT_SO_BSDCOMPAT},
	{"SO_LINGER", NOD_SOCKOPT_SO_LINGER},
	{"SO_PRIORITY", NOD_SOCKOPT_SO_PRIORITY},
	{"SO_NO_CHECK", NOD_SOCKOPT_SO_NO_CHECK},
	{"SO_OOBINLINE", NOD_SOCKOPT_SO_OOBINLINE},
	{"SO_KEEPALIVE", NOD_SOCKOPT_SO_KEEPALIVE},
	{"SO_RCVBUFFORCE", NOD_SOCKOPT_SO_RCVBUFFORCE},
	{"SO_SNDBUFFORCE", NOD_SOCKOPT_SO_SNDBUFFORCE},
	{"SO_RCVBUF", NOD_SOCKOPT_SO_RCVBUF},
	{"SO_SNDBUF", NOD_SOCKOPT_SO_SNDBUF},
	{"SO_BROADCAST", NOD_SOCKOPT_SO_BROADCAST},
	{"SO_DONTROUTE", NOD_SOCKOPT_SO_DONTROUTE},
	{"SO_ERROR", NOD_SOCKOPT_SO_ERROR},
	{"SO_TYPE", NOD_SOCKOPT_SO_TYPE},
	{"SO_REUSEADDR", NOD_SOCKOPT_SO_REUSEADDR},
	{"SO_DEBUG", NOD_SOCKOPT_SO_DEBUG},
	{"UNKNOWN", NOD_SOCKOPT_UNKNOWN},
	{0, 0},
};

const struct nod_name_value ptrace_requests[] = {
	{"PTRACE_SINGLEBLOCK", NOD_PTRACE_SINGLEBLOCK},
	{"PTRACE_SYSEMU_SINGLESTEP", NOD_PTRACE_SYSEMU_SINGLESTEP},
	{"PTRACE_SYSEMU", NOD_PTRACE_SYSEMU},
	{"PTRACE_ARCH_PRCTL", NOD_PTRACE_ARCH_PRCTL},
	{"PTRACE_SET_THREAD_AREA", NOD_PTRACE_SET_THREAD_AREA},
	{"PTRACE_GET_THREAD_AREA", NOD_PTRACE_GET_THREAD_AREA},
	{"PTRACE_OLDSETOPTIONS", NOD_PTRACE_OLDSETOPTIONS},
	{"PTRACE_SETFPXREGS", NOD_PTRACE_SETFPXREGS},
	{"PTRACE_GETFPXREGS", NOD_PTRACE_GETFPXREGS},
	{"PTRACE_SETFPREGS", NOD_PTRACE_SETFPREGS},
	{"PTRACE_GETFPREGS", NOD_PTRACE_GETFPREGS},
	{"PTRACE_SETREGS", NOD_PTRACE_SETREGS},
	{"PTRACE_GETREGS", NOD_PTRACE_GETREGS},
	{"PTRACE_SETSIGMASK", NOD_PTRACE_SETSIGMASK},
	{"PTRACE_GETSIGMASK", NOD_PTRACE_GETSIGMASK},
	{"PTRACE_PEEKSIGINFO", NOD_PTRACE_PEEKSIGINFO},
	{"PTRACE_LISTEN", NOD_PTRACE_LISTEN},
	{"PTRACE_INTERRUPT", NOD_PTRACE_INTERRUPT},
	{"PTRACE_SEIZE", NOD_PTRACE_SEIZE},
	{"PTRACE_SETREGSET", NOD_PTRACE_SETREGSET},
	{"PTRACE_GETREGSET", NOD_PTRACE_GETREGSET},
	{"PTRACE_SETSIGINFO", NOD_PTRACE_SETSIGINFO},
	{"PTRACE_GETSIGINFO", NOD_PTRACE_GETSIGINFO},
	{"PTRACE_GETEVENTMSG", NOD_PTRACE_GETEVENTMSG},
	{"PTRACE_SETOPTIONS", NOD_PTRACE_SETOPTIONS},
	{"PTRACE_SYSCALL", NOD_PTRACE_SYSCALL},
	{"PTRACE_DETACH", NOD_PTRACE_DETACH},
	{"PTRACE_ATTACH", NOD_PTRACE_ATTACH},
	{"PTRACE_SINGLESTEP", NOD_PTRACE_SINGLESTEP},
	{"PTRACE_KILL", NOD_PTRACE_KILL},
	{"PTRACE_CONT", NOD_PTRACE_CONT},
	{"PTRACE_POKEUSR", NOD_PTRACE_POKEUSR},
	{"PTRACE_POKEDATA", NOD_PTRACE_POKEDATA},
	{"PTRACE_POKETEXT", NOD_PTRACE_POKETEXT},
	{"PTRACE_PEEKUSR", NOD_PTRACE_PEEKUSR},
	{"PTRACE_PEEKDATA", NOD_PTRACE_PEEKDATA},
	{"PTRACE_PEEKTEXT", NOD_PTRACE_PEEKTEXT},
	{"PTRACE_TRACEME", NOD_PTRACE_TRACEME},
	{"PTRACE_UNKNOWN", NOD_PTRACE_UNKNOWN},
	{0, 0},
};

const struct nod_name_value prot_flags[] = {
	{"PROT_READ", NOD_PROT_READ},
	{"PROT_WRITE", NOD_PROT_WRITE},
	{"PROT_EXEC", NOD_PROT_EXEC},
	{"PROT_SEM", NOD_PROT_SEM},
	{"PROT_GROWSDOWN", NOD_PROT_GROWSDOWN},
	{"PROT_GROWSUP", NOD_PROT_GROWSUP},
	{"PROT_SAO", NOD_PROT_SAO},
	{"PROT_NONE", NOD_PROT_NONE},
	{0, 0},
};

const struct nod_name_value mmap_flags[] = {
	{"MAP_SHARED", NOD_MAP_SHARED},
	{"MAP_PRIVATE", NOD_MAP_PRIVATE},
	{"MAP_FIXED", NOD_MAP_FIXED},
	{"MAP_ANONYMOUS", NOD_MAP_ANONYMOUS},
	{"MAP_32BIT", NOD_MAP_32BIT},
	{"MAP_RENAME", NOD_MAP_RENAME},
	{"MAP_NORESERVE", NOD_MAP_NORESERVE},
	{"MAP_POPULATE", NOD_MAP_POPULATE},
	{"MAP_NONBLOCK", NOD_MAP_NONBLOCK},
	{"MAP_GROWSDOWN", NOD_MAP_GROWSDOWN},
	{"MAP_DENYWRITE", NOD_MAP_DENYWRITE},
	{"MAP_EXECUTABLE", NOD_MAP_EXECUTABLE},
	{"MAP_INHERIT", NOD_MAP_INHERIT},
	{"MAP_FILE", NOD_MAP_FILE},
	{"MAP_LOCKED", NOD_MAP_LOCKED},
	{0, 0},
};

const struct nod_name_value splice_flags[] = {
	{"SPLICE_F_MOVE", NOD_SPLICE_F_MOVE},
	{"SPLICE_F_NONBLOCK", NOD_SPLICE_F_NONBLOCK},
	{"SPLICE_F_MORE", NOD_SPLICE_F_MORE},
	{"SPLICE_F_GIFT", NOD_SPLICE_F_GIFT},
	{0, 0},
};

const struct nod_name_value quotactl_dqi_flags[] = {
	{"DQF_NONE", NOD_DQF_NONE},
	{"V1_DQF_RSQUASH", NOD_V1_DQF_RSQUASH},
	{0, 0},
};

const struct nod_name_value quotactl_cmds[] = {
	{"Q_QUOTAON", NOD_Q_QUOTAON},
	{"Q_QUOTAOFF", NOD_Q_QUOTAOFF},
	{"Q_GETFMT", NOD_Q_GETFMT},
	{"Q_GETINFO", NOD_Q_GETINFO},
	{"Q_SETINFO", NOD_Q_SETINFO},
	{"Q_GETQUOTA", NOD_Q_GETQUOTA},
	{"Q_SETQUOTA", NOD_Q_SETQUOTA},
	{"Q_SYNC", NOD_Q_SYNC},
	{"Q_XQUOTAON", NOD_Q_XQUOTAON},
	{"Q_XQUOTAOFF", NOD_Q_XQUOTAOFF},
	{"Q_XGETQUOTA", NOD_Q_XGETQUOTA},
	{"Q_XSETQLIM", NOD_Q_XSETQLIM},
	{"Q_XGETQSTAT", NOD_Q_XGETQSTAT},
	{"Q_XQUOTARM", NOD_Q_XQUOTARM},
	{"Q_XQUOTASYNC", NOD_Q_XQUOTASYNC},
	{0, 0},
};

const struct nod_name_value quotactl_types[] = {
	{"USRQUOTA", NOD_USRQUOTA},
	{"GRPQUOTA", NOD_GRPQUOTA},
	{0, 0},
};

const struct nod_name_value quotactl_quota_fmts[] = {
	{"QFMT_NOT_USED", NOD_QFMT_NOT_USED},
	{"QFMT_VFS_OLD", NOD_QFMT_VFS_OLD},
	{"QFMT_VFS_V0", NOD_QFMT_VFS_V0},
	{"QFMT_VFS_V1", NOD_QFMT_VFS_V1},
	{0, 0},
};

const struct nod_name_value semop_flags[] = {
	{"IPC_NOWAIT", NOD_IPC_NOWAIT},
	{"SEM_UNDO", NOD_SEM_UNDO},
	{0, 0},
};

const struct nod_name_value semget_flags[] = {
	{"IPC_EXCL", NOD_IPC_EXCL},
	{"IPC_CREAT", NOD_IPC_CREAT},
	{0, 0},
};

const struct nod_name_value semctl_commands[] = {
	{"IPC_STAT", NOD_IPC_STAT},
	{"IPC_SET", NOD_IPC_SET},
	{"IPC_RMID", NOD_IPC_RMID},
	{"IPC_INFO", NOD_IPC_INFO},
	{"SEM_INFO", NOD_SEM_INFO},
	{"SEM_STAT", NOD_SEM_STAT},
	{"GETALL", NOD_GETALL},
	{"GETNCNT", NOD_GETNCNT},
	{"GETPID", NOD_GETPID},
	{"GETVAL", NOD_GETVAL},
	{"GETZCNT", NOD_GETZCNT},
	{"SETALL", NOD_SETALL},
	{"SETVAL", NOD_SETVAL},
	{0, 0},
};

const struct nod_name_value access_flags[] = {
	{"F_OK", NOD_F_OK},
	{"R_OK", NOD_R_OK},
	{"W_OK", NOD_W_OK},
	{"X_OK", NOD_X_OK},
	{0, 0},
};

const struct nod_name_value pf_flags[] = {
	{"PROTECTION_VIOLATION", NOD_PF_PROTECTION_VIOLATION},
	{"PAGE_NOT_PRESENT", NOD_PF_PAGE_NOT_PRESENT},
	{"WRITE_ACCESS", NOD_PF_WRITE_ACCESS},
	{"READ_ACCESS", NOD_PF_READ_ACCESS},
	{"USER_FAULT", NOD_PF_USER_FAULT},
	{"SUPERVISOR_FAULT", NOD_PF_SUPERVISOR_FAULT},
	{"RESERVED_PAGE", NOD_PF_RESERVED_PAGE},
	{"INSTRUCTION_FETCH", NOD_PF_INSTRUCTION_FETCH},
	{0, 0},
};

const struct nod_name_value unlinkat_flags[] = {
	{"AT_REMOVEDIR", NOD_AT_REMOVEDIR},
	{0, 0},
};

const struct nod_name_value linkat_flags[] = {
	{"AT_SYMLINK_FOLLOW", NOD_AT_SYMLINK_FOLLOW},
	{"AT_EMPTY_PATH", NOD_AT_EMPTY_PATH},
	{0, 0},
};

const struct nod_name_value chmod_mode[] = {
    {"S_IXOTH", NOD_S_IXOTH},
    {"S_IWOTH", NOD_S_IWOTH},
    {"S_IROTH", NOD_S_IROTH},
    {"S_IXGRP", NOD_S_IXGRP},
    {"S_IWGRP", NOD_S_IWGRP},
    {"S_IRGRP", NOD_S_IRGRP},
    {"S_IXUSR", NOD_S_IXUSR},
    {"S_IWUSR", NOD_S_IWUSR},
    {"S_IRUSR", NOD_S_IRUSR},
    {"S_ISVTX", NOD_S_ISVTX},
    {"S_ISGID", NOD_S_ISGID},
    {"S_ISUID", NOD_S_ISUID},
    {0, 0},
};

const struct nod_name_value renameat2_flags[] = {
	{"RENAME_NOREPLACE", NOD_RENAME_NOREPLACE},
	{"RENAME_EXCHANGE", NOD_RENAME_EXCHANGE},
	{"RENAME_WHITEOUT", NOD_RENAME_WHITEOUT},
	{0, 0},
};

const struct nod_name_value openat2_flags[] = {
	{"RESOLVE_BENEATH", NOD_RESOLVE_BENEATH},
	{"RESOLVE_IN_ROOT", NOD_RESOLVE_IN_ROOT},
	{"RESOLVE_NO_MAGICLINKS", NOD_RESOLVE_NO_MAGICLINKS},
	{"RESOLVE_NO_SYMLINKS", NOD_RESOLVE_NO_SYMLINKS},
	{"RESOLVE_NO_XDEV", NOD_RESOLVE_NO_XDEV},
	{"RESOLVE_CACHED", NOD_RESOLVE_CACHED},
	{0, 0},
};

const struct nod_name_value execve_flags[] = {
	{"EXE_WRITABLE", NOD_EXE_WRITABLE},
	{0, 0},
};

const struct nod_name_value execveat_flags[] = {
	{"AT_EMPTY_PATH", NOD_EXVAT_AT_EMPTY_PATH},
	{"AT_SYMLINK_NOFOLLOW", NOD_EXVAT_AT_SYMLINK_NOFOLLOW},
	{0, 0},
};

