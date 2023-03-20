#ifndef dog_h
#define dog_h
/**
 * struct dog - dog in
 * @owner: owner
 * @name: name
 * @age: age
 */
typedef struct dog
{
	char *owner;
	char *name;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
