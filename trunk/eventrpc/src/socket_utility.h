
#ifndef __EVENTRPC_SOCKET_UTILITY_H__
#define __EVENTRPC_SOCKET_UTILITY_H__

#include "base.h"

EVENTRPC_NAMESPACE_BEGIN

int Connect(const char *ip, int port);

int Listen(const char *ip, int port);

int SetNonBlocking(int fd);

int Send(int fd, const void *buf, size_t count, int *length);

int Recv(int fd, void *buf, size_t count, int *length);

EVENTRPC_NAMESPACE_END
#endif  //  __EVENTRPC_SOCKET_UTILITY_H__
