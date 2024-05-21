//
// file: httpServer.h
// author: Yug Patel
// last modified: 20 Mat 2024
//

#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H

#include <sys/socket.h>
#include <netinet/in.h>


struct Server{
	int domain;
	int protocol;
	int service;
	u_long interface;
	int port;
	int backlog;
	
	struct sockaddr_in address;

	void (*launch)(void);
};

struct Server server_constructor(int domain, int service, int protocol, u_long interface, 
		int port, int backlog, void (*launch)(void));



#endif // httpServer.h
