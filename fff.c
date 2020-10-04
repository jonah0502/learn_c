#include <stdio.h>

int main(){
	float aFloat = 0.3;
	//printf("this is a floating point # %+.2f\n", aFloat); //+ will indicate weather number is positive or negitive #.# inudcates amt digits begore and after
	FILE* outFile = fopen("fileTest.txt", "w");
	for(int i=0; i<5; ++i) {
		fprintf(outFile,"this is a floating point # %+.*f\n", i, aFloat); // star is placeholder for variable before floats, when writing to file file pointer goes first
	}

	fclose(outFile);
	return 0;
}
