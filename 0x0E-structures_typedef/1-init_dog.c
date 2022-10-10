#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: dog structure
 * @name: name of the dog
 * @float: age of the dog
 * @owner: owner of the dog
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
