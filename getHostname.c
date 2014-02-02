#include"header.h"
void getMyhostname(){	
	size_t len=1000;
	char name[len];
	int r = gethostname(name,len);
	printf("%s\n",name);	
}
