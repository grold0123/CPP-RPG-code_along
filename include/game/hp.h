#include<game/typedef_wrapper.h>

class Hp{
public:

    //  setter
    bool set_max_hp(hptype new_max_hp){

        //   assign smallest value of max hp to 1
        if (new_max_hp < 1){
            return false;
        }

        max_hp = new_max_hp;

        //  current hp to max hp
        if (current_hp > max_hp){
            current_hp = max_hp;
        }

        return true;
    }
    void take_damage(hptype damage){

        //  limit current hp to zero at damage taken
        if (damage > current_hp){
            current_hp = 0;return;
        }

        //  subtract damage to current hp
        current_hp -= damage;
    };
    void heal(hptype heal_amount){

        //  limit hp to max hp at heal recieved
        if (heal_amount + current_hp > max_hp){
            current_hp = max_hp;return;
        }

        //  add heal amount to current hp
        current_hp += heal_amount;
    }

    //  getter
    hptype get_max_hp(){
        return max_hp;
    }
    hptype get_current_hp(){
        return current_hp;
    }

    //  constructor
    Hp(){current_hp = 1;max_hp = 1;};
    Hp(hptype new_current_hp , hptype new_max_hp){
        current_hp = new_current_hp;
        max_hp = new_max_hp;
        // limit current hp to max hp
        if (current_hp > max_hp){
            current_hp = max_hp;
        }
    };
private:
    hptype shield_hp;
    hptype current_hp;
    hptype max_hp;
};