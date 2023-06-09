#ifndef WILD_HANDLER_TYPES_HPP_
#define WILD_HANDLER_TYPES_HPP_

#include <stdint.h>

enum wild_handler_types : uint16_t
{
	WILD_HANDLER_UNKNOWN = 0x0000,

	WILD_HANDLER_JUMP_INSIDE,
	WILD_HANDLER_JUMP_OUTSIDE_REGISTER,
	WILD_HANDLER_JUMP_OUTSIDE_MEMORY,
	WILD_HANDLER_JUMP_OUTSIDE_IMMEDIATE,
	
	WILD_HANDLER_JCC_INSIDE,
	WILD_HANDLER_JCC_OUTSIDE,

	WILD_HANDLER_RET,
	WILD_HANDLER_CALL,
	WILD_HANDLER_UNDEF,
	
	WILD_HANDLER_LODSB,	
	WILD_HANDLER_LODSW,
	WILD_HANDLER_LODSD,	

	WILD_HANDLER_STOSB,
	WILD_HANDLER_STOSW,
	WILD_HANDLER_STOSD,

	WILD_HANDLER_SCASB,
	WILD_HANDLER_SCASW,
	WILD_HANDLER_SCASD,	

	WILD_HANDLER_CMPSB,
	WILD_HANDLER_CMPSW,
	WILD_HANDLER_CMPSD,

	WILD_HANDLER_MOVSB,
	WILD_HANDLER_MOVSW,
	WILD_HANDLER_MOVSD,

	WILD_HANDLER_PUSHFD,
	WILD_HANDLER_POPFD,
	
	WILD_HANDLER_EFLAGS,					// EFLAGS operations (e.g. STD, STI, etc.)

	WILD_HANDLER_RESTORE_STACK,
	WILD_HANDLER_LOAD_STACK,
	WILD_HANDLER_STORE_STACK,
	
	WILD_HANDLER_RESET_EFLAGS,
	WILD_HANDLER_RESET,
	
	WILD_HANDLER_CRYPT,
	
	WILD_HANDLER_COUNT,

	WILD_HANDLER_INVALID = 0xFFFF,
};

#endif