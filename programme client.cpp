#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char *argv[]){
	FILE *fd;
	char msg[100];
	
	if(argc!=2){
		printf("%s <msg>\n",argv[0]);
		return 1;
	}
	
	fd = fopen("/home/pc-13/Bureau/anisho", "w");
	
	fputs(argv[1],fd);
	
	fclose(fd);
		
	return 0;
}
