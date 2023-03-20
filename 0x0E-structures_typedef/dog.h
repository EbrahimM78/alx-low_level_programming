#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog structure object with name age and owner
 * @name: string meaning a name
 * @age: float meaning age of dog
 * @owner: string meaning the owner of dog
 */
struct dog
{
  char *name;
  float age;
  char *owner;
};

/**
 * dog_t - type definition for a dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/