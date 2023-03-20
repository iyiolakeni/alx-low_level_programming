#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - A data combination to hold a dog identity
 * @name: name of dog
 * @owner: name of owner
 * @age: age of dog
 *
 * Description: A dog identity and owner
*/
struct dog
{
	    char *name;
	    char *owner;
	    float age;
};
/**
 * dog_t - Typedef for struct dog
*/
typedef struct dog dog_t;
/**
 * init_dog - function to initialize struct dog
 * @d: struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - function to print dog
 * @d: stuct for dog
*/
void print_dog(struct dog *d);
/**
 * new_dog - function to initialize struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: A new dog object
 */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

