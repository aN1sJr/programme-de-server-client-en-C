#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main(){
	FILE *f;
	char msg[100];
	
	
	mkfifo("/home/pc-13/Bureau/anisho",0660);
	f = fopen("/home/pc-13/Bureau/anisho","r");
	while(1){
		gets(msg,sizeof(msg),f);
		printf("message recu: %s",msg);
	}
	fclose(f);
	unlink("/home/pc-13/bureau/anisho");	
	return 0;
}
