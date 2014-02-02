#include"header.h"
void catCommand(char *s){
	//printf("%s",s);
	char *filename;
	int l,i;
	for(i=4;s[i]!='\0';i++);
	l=i-3;
	filename = (char *) malloc (l*sizeof(char));
	for(l=4,i=0;s[l]!='\0';i++,l++)
	{
		filename[i]=s[l];
		
	}
	filename[i]='\0';
	//printf("%s",filename);
	FILE *f = fopen(filename,"r");
	if(!f){
		fprintf(stderr,"File couldn't be opened\n");
		return;
			
	}
	char c;
	while((c=fgetc(f)) !=EOF)
	{
		printf("%c",c);
	}	
	fclose(f);
	
}
