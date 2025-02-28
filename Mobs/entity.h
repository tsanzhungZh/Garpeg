#ifndef _ENTITY_H_
#define _ENTITY_H_

/* defination of entity */
typedef struct entity
{
    int health;
    int energy;
    
    ;

    /* data */
}entity_t;



/* func */
entity_t* create_entity(int h,int e);

void clear_entity(entity_t* entity);



#endif