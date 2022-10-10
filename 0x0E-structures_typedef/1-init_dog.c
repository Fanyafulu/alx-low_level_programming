#include "dog.h"
#include <stdio.h>

/**
*init_dog - initialize a variable of type struct dog.
*@d:The dog to be initialized.
*@name: pointer to char name of the dog
*@age: age of dog
*@owner: pointer to char owner's dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d!= NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
