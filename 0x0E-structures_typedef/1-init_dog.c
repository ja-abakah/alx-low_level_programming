#include "dog.h"
/**
 * init_dog - Initializes a struct dog with provided values.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: This function initializes the struct dog pointed to by @d
 * with the provided @name, @age, and @owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
