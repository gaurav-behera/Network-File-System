#ifndef _SOCKET_H_
#define _SOCKET_H_

#include "headers.h"

int client_establish_connection();
struct pair server_establish_connection();
int send_file(char* filename, int sockfd);
int receive_file(int sockfd);

#endif