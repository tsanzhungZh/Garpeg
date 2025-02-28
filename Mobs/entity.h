#ifndef _ENTITY_H_
#define _ENTITY_H_
#include "..\global.cfg"
/* defination of entity */
typedef struct entity_
{
    int health;
    int energy;
    int status_list[MAX_STATUS_NUMS];
    int status_layers[MAX_STATUS_NUMS];

    int attack;
    int defend;

    /* data */
}entity_t;

/* func */
entity_t* create_entity(int h,int e,int at,int def);

void clear_entity(entity_t* entity);

void set_status_to_entity(entity_t* entity,int status_id,int layers);

void set_health_to_entity(entity_t* entity,int health);

void set_energy_to_entity(entity_t* entity,int energy);

#endif