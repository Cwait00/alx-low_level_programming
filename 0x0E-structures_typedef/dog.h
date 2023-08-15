#ifndef DOG_H
#define DOG_H

/**
 * struct dog - prints details of each dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
int _putch(char c);
void int_dog(struct dog *d, char *name, float age, char *owner);

#endif
