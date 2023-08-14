#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with given details.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created dog, or NULL on failure.
 *
 * Description: This function creates a new dog and stores a copy of the
 * provided @name and @owner. Returns NULL if memory allocation
 * fails or if any input is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
return NULL;

dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return NULL;

new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return NULL;
}

new_dog->age = age;

new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return NULL;
}

return new_dog;
}
