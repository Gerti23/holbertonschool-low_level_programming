#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define a dog type
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: a custom define structure of a dog
 */
typedef struct dog 
{
    char *name;
    float age;
    char *owner;
} dog;

#endif
