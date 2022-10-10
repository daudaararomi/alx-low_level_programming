#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  creates a new dog
 * @name: name of the dog
 * @age:age of the dog
 * @owner: owner of the dog
 * Return: a pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	unsigned int i = 0, j = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	while (name[i])
		i++;
	while (owner[j])
		j++;
	new_dog->name = malloc(sizeof(char) * i);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (name[i])
	{
		new_dog->name[i] = name[i];
		i++;
	}
	new_dog->owner = malloc(sizeof(char) * j);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (owner[i])
	{
		new_dog->owner[i] = owner[i];
		i++;
	}
	new_dog->age = age;
	return (new_dog);
}
