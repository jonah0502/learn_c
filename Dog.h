#ifndef DOG_H
#define DOG_H // if not defined define DOG_H else skip
typedef struct dog {
	char name[21];
	float age;
	float weight;
}dog; //normally would have to type struct before any dog type now we do not

void getDogs(int numDogs, dog* dogs); //TODO: make implimentation file and include that in main
int compareDogs(const void* p1, const void* p2);
void printDogs(int numDogs, dog* dogs);
#endif
