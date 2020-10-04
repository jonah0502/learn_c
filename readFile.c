#include <stdio.h>

int main(){
	char name[256];
	float age;
	FILE* inFile = fopen("namesAges.txt", "r"); //dont foget fopen

	if(inFile != NULL) { // if file cannot be opened it will be saved as null
		fscanf(inFile, "%s %f", name, &age);
		fprintf(stdout, "%s is %.2f years old\n", name, age);
	}
	fclose(inFile);
	return 0;
}
