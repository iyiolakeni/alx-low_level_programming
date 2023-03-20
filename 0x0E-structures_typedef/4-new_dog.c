#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - function to initialize struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: A new dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name = strlen(name);
	int len_owner = strlen(owner);
	int i;
	char *name_mem, *owner_mem;
	dog_t *new_dog_fun;

	new_dog_fun = malloc(sizeof(dog_t));
	if (new_dog_fun == NULL)
		return (NULL);
	name_mem = malloc((len_name + 1) * sizeof(char));
	if (name_mem == NULL)
	{
		free(new_dog_fun);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		name_mem[i] = name[i];
	name_mem[i] = '\0';
	new_dog_fun->name = name_mem;
	new_dog_fun->age = age;

	owner_mem = malloc((len_owner + 1) * sizeof(char));
	if (owner_mem == NULL)
	{
		free(name_mem);
		free(new_dog_fun);
		return (NULL);
	}
	for (i = 0; i < len_owner; i++)
		owner_mem[i] = owner[i];
	owner_mem[i] = '\0';
	new_dog_fun->owner = owner_mem;
	return (new_dog_fun);
}
