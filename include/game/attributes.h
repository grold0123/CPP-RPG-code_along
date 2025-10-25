#pragma once 
#include<helpers/helper_functions.h>

class Stat_Block{
public:
    
    //member functions
    void increase_str(stat_type increase){
        strength += increase; 
    };
    void increase_int(stat_type increase){
        intelligence += increase;
    };
    
    //getters
    stat_type get_strength()const{
        return strength;
    };
    stat_type get_intelligence()const{
        return intelligence;
    };

    //constructors
    Stat_Block():   // initialize individual member to 1
    strength(1),
    intelligence(1){        
    };
    Stat_Block(stat_type s,stat_type i): // initialize individual member to pass values
    strength(s),
    intelligence(i){        
    };
        
private:
    stat_type strength;
    stat_type intelligence;    
};

class Hp{
public:

    //  setter
    void set_max_hp(hp_type new_max_hp){

        //   assign smallest value of max hp to 1
        if (new_max_hp < 1){
            new_max_hp = 1;
        }
        max = new_max_hp;
        current = max;        
                
    }
    void take_damage(hp_type damage){

        //  limit current hp to zero at damage taken
        if (damage > current){
            current = 0;return;
        }

        //  subtract damage to current hp
        current -= damage;
    };
    void heal(hp_type heal_amount){

        //  limit hp to max hp at heal recieved
        if (heal_amount + current > max){
            current = max;return;
        }

        //  add heal amount to current hp
        current += heal_amount;
    }

    //  getter
    hp_type get_hp_values() const{
        return current,max;
    }
    
    //  constructor
    Hp(): // no values passed when creating instance
    current(1),max(1){        
    };
    Hp(hp_type hp_value): // current and max hp is initialized with the passed value
    current(hp_value),
    max(hp_value)
    {};
    
private:
    hp_type shield;
    hp_type current;
    hp_type max;
};