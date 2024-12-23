#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#define PORT 8080
#define BUFFER_SIZE 1024
int main(){
int server_fd, new_socket;
struct sockaddr_in address;
int addrlen = sizeof(address);
char *message = "Hello from the server!";
char buffer[BUFFER_SIZE] = {0};
 if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
    perror("Socket failed");
    exit(EXIT_FAILURE);
}

address.sin_family = AF_INET;
address.sin_addr.s_addr = INADDR_ANY;
address.sin_port = htons(PORT);

if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
    perror("Bind failed");
    close(server_fd);
    exit(EXIT_FAILURE);
}

if (listen(server_fd, 3) < 0) {
    perror("Listen failed");
    close(server_fd);
    exit(EXIT_FAILURE);
}
printf("Server listening on port %d...\n", PORT);


if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) < 0) {
    perror("Accept failed");
    close(server_fd);
    exit(EXIT_FAILURE);
}

send(new_socket, message, strlen(message), 0);
printf("Message sent to client: %s\n", message);

read(new_socket, buffer, BUFFER_SIZE);
printf("Message from client: %s\n", buffer);
close(new_socket);
close(server_fd);
return 0;
}