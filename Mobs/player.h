#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "entity.h"
typedef struct player_
{
    /* data */
    entity_t* e;
    

}player_t;

player_t* create_player();

void set_health_to_player(player_t* ply,int h);







#endif