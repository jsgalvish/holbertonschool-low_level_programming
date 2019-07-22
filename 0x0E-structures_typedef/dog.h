#ifndef DOG
#define DOG
/**
* struct dog - struct with 3 arguments
* @name: dog name
* @age: dog age
* @owner: owner of dog
**/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
