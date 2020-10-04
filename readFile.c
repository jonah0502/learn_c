#include <stdio.h>
#include <stdlib.h>
int main(){
	char name[256];
	float age;
	int status;
	FILE* inFile = fopen("namesAges.txt", "r"); //dont foget fopen

	if(inFile != NULL) { // if file cannot be opened it will be saved as null
		while((status = fscanf(inFile, "%s %f", name, &age)) == 2) { //taking in two thinggs at a time
			fprintf(stdout, "%s is %.2f years old\n", name, age);
		}
		if(status != EOF) { // if more/less than two things are taken in
			fprintf(stderr, "soemthing went wrong"); //stderr for error messge
			exit(1); // cleans and exits program
		}
		fclose(inFile);
		inFile = NULL; // good practice
	}
	return 0;
}
