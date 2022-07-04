#ifndef _DOG_
#define _DOG_

/**
 * struct dog - info on dog
 * @name: char
 * @owner: char
 * @age: float
 *
 * Description: struct containing info on dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
