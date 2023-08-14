#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure defines a type 'struct dog'
 *              with three elements: name (a string), age (a float),
 *              and owner (a string) to hold information about a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

#endif
