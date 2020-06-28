#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ENDMARKER "\r\n\r\n";

// const size_t substrLen = 5;

int main() {

    char* reqMsg = "GETFILE GET /root/lugao/somefile.pdf\r\n\r\n";
    char* buffer;

    char header_scheme[8];
    char header_method[4];
    char header_request_path[1024];
    bzero(header_request_path, 1024);

    sscanf(reqMsg, "%s %s %s\r\n\r\n", header_scheme, header_method, header_request_path);

    int i = strlen()


    printf("\npath = %s\n", header_request_path);

    return 0;

}
