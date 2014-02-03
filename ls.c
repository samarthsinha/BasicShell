#include"header.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
void lsCommand(){
	DIR *dr = opendir(".");
	struct dirent *d;
	while(NULL != (d=readdir(dr))){
		struct stat sb;
		 if (stat(d->d_name, &sb) == -1) {
              	       perror("stat");
        	       exit(EXIT_FAILURE);
	         }
		 switch (sb.st_mode & S_IFMT) {
           		case S_IFBLK:  printf("b");   break;
           		case S_IFCHR:  printf("c");   break;
           		case S_IFDIR:  
					//Directory
					printf("d");  break;
           		case S_IFIFO:  //FIFO/pipe
					printf("p");	break;
           		case S_IFLNK:  //Symbolic Link
					printf("sl");	break;
           		case S_IFREG:  //Regular File
					printf("f");	break;
           		case S_IFSOCK: //Socket
					printf("s");	break;
           		default:       printf("?");   break;
           	}	
	 	printf("\t%s",d->d_name);
		printf("\n");
	}
}
