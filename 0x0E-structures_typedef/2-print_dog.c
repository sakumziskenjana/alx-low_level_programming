#include"dog.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: the dog to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age ==  NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if f(d->owner ==  NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %f\n", d->owner);
}
