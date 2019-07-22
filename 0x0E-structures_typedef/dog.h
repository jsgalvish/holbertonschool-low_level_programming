#ifndef DOG
#define DOG
/**
* struct dog - struct with 3 arguments
* @name: dog name
* @age: dog age
* @owner: owner of dog
**/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
