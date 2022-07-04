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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
