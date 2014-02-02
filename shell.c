#include<string.h>
#include"header.h"
int isCat(char *);
int main()
{
	char commands[20];
	char buf;
	while(1){
		printf("[SAMSHELL]$ ");
		scanf("%[^\n]s",commands);
		scanf("%c",&buf);
		//printf("%s",commands);
		if(strcmp(commands,"ls")==0){
			lsCommand();
		}
		else if(strcmp(commands,"gethostname")==0) getMyhostname();
		else if(isCat(commands)){
			catCommand(commands);
		}
		else if( strcmp(commands,"exit")==0) return 0;
	}
	return 0;
}
int isCat(char *s){
	if(s[0]=='c'&& s[1]=='a' && s[2]=='t') return 1;
	return 0; 
}
