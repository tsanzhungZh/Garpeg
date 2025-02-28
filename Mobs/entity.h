#ifndef _ENTITY_H_
#define _ENTITY_H_
#include "status.h"
//#include "D:\\C\\Garpeg\\global.cfg"
/* defination of entity */
typedef struct entity_
{
    int health;
    int energy;
    int stauts_pool[]
    ;

    /* data */
}entity_t;



/* func */
entity_t* create_entity(int h,int e);

void clear_entity(entity_t* entity);

void give_status_to_entity(int status_id,int layers);

#endif