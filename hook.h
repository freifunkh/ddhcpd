#ifndef _HOOK_H
#define _HOOK_H

#include "types.h"

#define HOOK_LEASE 1
#define HOOK_RELEASE 2
#define HOOK_INFORM 3
#define HOOK_LEARNING_PHASE_END 4

ATTR_NONNULL_ALL void hook_address(uint8_t type, struct in_addr* address, uint8_t* chaddr, ddhcp_config* config);
ATTR_NONNULL_ALL void hook(uint8_t type, ddhcp_config* config);
void hook_init();

#endif
