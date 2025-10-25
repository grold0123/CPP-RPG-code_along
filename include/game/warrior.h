#pragma once
#include<game/base_class.h>

class Warrior:public Base_Class{
public:
    
    //static data members
    static const hp_type HPGROWTH = 19;
    static const stat_type BASESTR = 4;
    static const stat_type BASEINT = 1;
              
    //member functions
    void display_stats(){        
        slow_print("Name:\t\t");slow_print(get_name());
        slow_print("\nClass:\t\tWarrior");
        slow_print("\nLevel:\t\t");slow_print(to_string(get_level()));
        slow_print("\nHealth:\t\t");slow_print(to_string(health_points.get_hp_values()));      
        slow_print("\nStrength:\t");slow_print(to_string(stat_block.get_strength()));              
        slow_print("\nIntelligence:\t");slow_print(to_string(stat_block.get_intelligence()));      
        cout << endl;cout << endl;          
        }
          
    //constructor
    Warrior(string name): Base_Class(HPGROWTH,BASESTR,BASEINT,name){}
    
private:

};


/*
at creating an instance of Warrior class
the static constants are passed to the constructor of Base_Class
then the Base_Class constructor passes those static constants to create
instance of Hp class and stat block class 
is this correct?
*/