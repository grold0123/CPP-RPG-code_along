#pragma once
#include<game/base_class.h>


class Rouge:public Base_Class{

public:
    //static data members
    static const hp_type HPGROWTH = 14;
    static const stat_type BASESTR = 2;
    static const stat_type BASEINT = 2;
              
    //member functions
    void display_stats(){        
        slow_print("Name:\t\t");slow_print(get_name());
        slow_print("\nClass:\t\tRouge");
        slow_print("\nLevel:\t\t");slow_print(to_string(get_level()));
        slow_print("\nHealth:\t\t");slow_print(to_string(health_points.get_hp_values()));      
        slow_print("\nStrength:\t");slow_print(to_string(stat_block.get_strength()));              
        slow_print("\nIntelligence:\t");slow_print(to_string(stat_block.get_intelligence()));                      
        cout << endl;cout << endl;
        }
          
    //constructor
    Rouge(string name): Base_Class(HPGROWTH,BASESTR,BASEINT,name){}
    
private:



};