#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

int main(int argc , char *argv[]){

	int i;
	int type;

	if(argv[1] = NULL){
		DIR *dir = opendir("."); //sets memory adress 
	}
		
	struct dirent *fileInfo;

	struct stat *info;
	
	for(i = 1; argc < i; i++;){
		if(argv[i] = "-a"){
			printf("%s", fileInfo -> d_name);
		}
	
	}

	while((fileInfo = readdir(dir)) != NULL){

		if((fileInfo -> d_name[0]) == '.'){	
		continue;
		}
		printf("%s ", fileInfo -> d_name); 	
		}
	if((fileInfo = readdir(dir)) = NULL){
		perror("Directory does not exist");

	printf("\n");
		}
	}
}	
