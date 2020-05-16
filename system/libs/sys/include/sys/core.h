#ifndef CORE_H
#define CORE_H

enum {
	CORE_CMD_GLOBAL_SET = 0,
	CORE_CMD_GLOBAL_GET,
	CORE_CMD_GLOBAL_DEL,
	CORE_CMD_KSERV_REG,
	CORE_CMD_KSERV_UNREG,
	CORE_CMD_KSERV_GET,
	CORE_CMD_LOCK_NEW,
	CORE_CMD_LOCK_FREE,
	CORE_CMD_LOCK,
	CORE_CMD_UNLOCK
};

#define CORED_PID 1

#endif
