#include "dog.h"
#include <stdio.h>
void getDogs(int numDogs, dog* dogs){
	for(int i=0; i<numDogs; i++) {
		printf("Enter the name age and weight of dog #%d: ", i);
		scanf("%s %f %f",dogs[i].name, &dogs[i].age, &dogs[i].weight);
	}
}
void printDogs(int numDogs, dog* dogs){
	for(int i=0; i<numDogs; i++) {
		printf("%-10s who weights %5.2f pounds, is %3.1f years old.\n",dogs[i].name, dogs[i].weight, dogs[i].age);
	}

}

int compareDogs(const void* p1, const void* p2){
	if( ((dog*)p1)->age < ((dog*)p1)->age ) return -1;
	if( ((dog*)p1)->age == ((dog*)p1)->age ) return 0;
	return 1;
}
