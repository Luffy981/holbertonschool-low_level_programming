#ifndef STRUC_DOG
#define STRUC_DOG
/**
 * struct dog - Description about dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Information about the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
