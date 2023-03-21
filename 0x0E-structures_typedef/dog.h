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
/**
 * struct dog_t - dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} my_dog;
dog_t *new_dog(char *name, float age, char *owner);


#endif
