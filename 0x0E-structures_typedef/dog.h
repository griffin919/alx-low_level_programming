#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - struct for dog
 *
 * @name: first member / pointer variable
 * @age: second member
 * @owner: pointer variable
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

dog_t *new_dog(char *name, float age, char *owner);

void print_dog(struct dog *d);

void free_dog(dog_t *d);
#endif
