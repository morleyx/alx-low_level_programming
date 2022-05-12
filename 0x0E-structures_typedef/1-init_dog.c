#include "dog.h"

/**
  * init_dog - initialises a variable of type struct dog
  * @d: pointer to struct dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: value is void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
