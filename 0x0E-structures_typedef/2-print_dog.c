#include <stdio.h>
#include  "dog.h"
/**
 * print_dog - function to print dog details
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
