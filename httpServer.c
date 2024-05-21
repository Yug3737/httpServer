//
// HTTP server from scratch implementation in C
// file: httpServer.c
// author: Yug Patel
// last modified: 19 May 2024
//

#include <iostream>
#include <sys/socket.h>

if((server_fd = socket(AF_INET, SOCK_STREAM,0)) < 0){
    perror("cannot create socket");
    return 0;
}
