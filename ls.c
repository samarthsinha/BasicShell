#include"header.h"
void lsCommand(){
	DIR *dr = opendir(".");
	struct dirent *d;
	while(NULL != (d=readdir(dr))){
		printf("%d \t %s\n",d->d_ino, d->d_name);	
	}
}
