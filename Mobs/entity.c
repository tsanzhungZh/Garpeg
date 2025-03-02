
#include "entity.h"
#include "stdio.h"
entity_t* create_entity(int h,int e,int a,int d){

    return NULL;
}
void clear_entity(entity_t* et){
    free(et);
}

void set_health_to_entity(entity_t* et,int health){
    if (et){
        et->health = health;
    }
}

void set_energy_to_entity(entity_t* et,int energy){
    if (et){
        et->health = energy;
    }
}

int add_status_to_entity(entity_t* et,int status_id,int layers){
    if(status_id<0 && status_id>=status_max_nums_e){
        return -1;
    }

    if (et){
        for(int i = 0;i<MAX_STATUS_NUMS;i++){
            if(et->status_list[i] == 0){
                et->status_list[i] = status_id;
                et->status_layers[i] = layers;
                return 0;
            }
        }
    }

    return 1;
}
int set_status_layers_to_entity(entity_t* et,int status_id,int layers){
    if(status_id<0 && status_id>=status_max_nums_e){
        return -1;
    }
    if (et){
        for(int i = 0;i<MAX_STATUS_NUMS;i++){
            if(et->status_list[i] == status_id){
                et->status_layers[i] = layers;
                return 0;
            }
        }
    }
    return 1;
}
int clear_status_to_entity(entity_t* et,int status_id){
    if(status_id<0 && status_id>=status_max_nums_e){
        return -1;
    }
    if (et){
        for(int i = 0;i<MAX_STATUS_NUMS;i++){
            if(et->status_list[i] == status_id){
                et->status_list[i] = status_none_e;
                et->status_layers[i] = 0;
                return 0;
            }
        }
    }
    return 1;
}
void clear_all_status_to_entity(entity_t* et){
    if(et){
        for(int i = 0;i<MAX_STATUS_NUMS;i++){
            et->status_list[i] = status_none_e;
            et->status_layers[i] = 0;
        }
    }
}

void set_attack_to_entity(entity_t* et,int attack){
    if (et){
        et->health = attack;
    }
}

void set_defend_to_entity(entity_t* et,int defend){
    if (et){
        et->health = defend;
    }
}