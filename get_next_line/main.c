#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <limits.h>
#include <unistd.h>

// int main(int ac, char **av)
int main()
{
    // char* line_m;
    // int fd_m;
    
    // printf(">>>Mandatory<<<\n");
    // fd_m = open("sample.txt", O_RDONLY);
    // printf("check: %d\n", fd_m);
    // // printf("OPEN_MAX: %ld", sysconf(_SC_OPEN_MAX));
    // line_m = get_next_line(fd_m);
    // printf("result: %s", line_m);
    // line_m = get_next_line(fd_m);
    // printf("result: %s", line_m);

    printf(">>>Bonus<<<");
    int fd_b[3];
    size_t i;
    char *line_b;


    fd_b[0] = open("sample.txt", O_RDONLY);
    fd_b[1] = open("test.txt", O_RDONLY);
    fd_b[2] = open("sample.txt", O_RDONLY);
    while (i < 4)
	{
		line_b = get_next_line(fd_b[i]);
		printf("%s", line_b);
		if (!line_b)
			i++;
	}
	// free(line_b);
	// close(fd_b);
	return (0);
}
