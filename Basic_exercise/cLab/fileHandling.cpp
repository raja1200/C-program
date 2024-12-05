#include<stdio.h>
#include<stdlib.h>

int main(){
	
	//file objects
	FILE *source;
	FILE *dest;
	
	//file path form user 
	char spath[100] , dpath[100] ;
	
	printf("Enter Source file path : ");
	scanf("%s" , &spath);
	
	printf("Enter destination file path : ");
	scanf("%s" , &dpath);
	
	//opening files using paths
	source = fopen(spath , "r");
	dest = fopen(dpath , "w");
	
	//not found case
	if(source == NULL || dest == NULL)
	{
		printf("file not founded");
		exit(EXIT_FAILURE);
	}
	
	//reading one by one character form source file
	char ch = fgetc(source);    //note : fgetc() ,fputc() - doesn't need any increment
	while (ch != EOF)
	{
		fputc(ch , dest);
		ch = fgetc(source);
	}
	
	//closing
	fclose(source);
	fclose(dest);
	
    printf("File copied succesfully !");
	
	
	return 0 ;
}
