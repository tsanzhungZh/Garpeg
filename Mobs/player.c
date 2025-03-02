#include "player.h"

player_t* create_player(){
    player_t* ret = (player_t*)malloc(sizeof(player_t));

    //parm:h e a d
    ret->e = create_entity(INITIAL_PLAYER_HEALTH,INITIAL_PLAYER_ENERGY,INITIAL_PLAYER_ATTACK,INITIAL_PLAYER_DEFEND);

    clear_all_status_to_entity(ret->e);


    return ret;
}
void set_health_to_player(player_t* ply,int h){

    set_health_to_entity(ply->e,h);

}