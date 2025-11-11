#include <stdio.h>
#include <dirent.h>

int main(){

	DIR *dirp = opendir(".");

	struct dirent *info = readdir(dirp);

	while((info = readdir(dirp)) != NULL)
	{	
	
		printf("%s ", info -> d_name);
		
	}
	
	printf("\n");
}
