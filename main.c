#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {
	if(argc < 2) {
		fprintf(stderr, "USAGE: %s <# dogs>",argv[0]);
		exit(1);
	}
//	printf("words %d\n", argc);
	int numDogs = atoi(argv[1]);
	//printf("%d\n", numDogs);
	dog* dogArr = (dog*)malloc(sizeof(dog) * numDogs);
	getDogs(numDogs, dogArr);
	qsort(dogArr, numDogs, sizeof(dog), compareDogs);
	printDogs(numDogs, dogArr);
//	strcpy(dogArr[0].name, "Pepper");
	//printf("%s\n",dogArr[0].name);
	free(dogArr);
	/*dog aDog;
	   strcpy(aDog.name, "Buster");
	   aDog.age = 34.5;
	   aDog.weight = 15;
	   printf("%s\n",aDog.name);
	 */
	return 0;
}
