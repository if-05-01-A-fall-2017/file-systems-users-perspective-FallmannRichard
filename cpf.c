#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, char** argv)
{
        char t[5000];
        int fd = open(argv[1], O_RDONLY);
        read(fd, &t, 5000);
        fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
        write(fd, &t, strlen(t));
        printf(""%s %d\n",t, strlen(t));
        return 0;


}