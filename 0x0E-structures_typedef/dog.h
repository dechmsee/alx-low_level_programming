#ifndef _DOG_H
#define _DOG_H
#define NIL ("nil")
#include <stdio.h>
/**
 * struct dog - struct to define a dog
 * @name: string
 * @age: float
 * @owner: string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
