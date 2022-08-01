#ifndef _DOG_H
#define _DOG_H

#define NIL "(nil)"

#include <stdio.h>

/**
 * struct dog - structure for dogs
 * @name: first member
 * @age: second member
 * @owner: third member
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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif
