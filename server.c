#include "headers.h"

int main() 
{ 
	struct pair p= server_establish_connection();
	int sockfd= p.first;
	int connfd= p.second;

	receive_file(connfd); 
	close(sockfd); 
}
