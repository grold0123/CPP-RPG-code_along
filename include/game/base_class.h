#pragma once
#include<game/attributes.h>

class Base_Class:public Hp , public Stat_Block{

protected:
    
    Hp health_points;
    Stat_Block stat_block;

public:


    string get_name(){
        return name;
    }
    stat_type get_level(){
        return level;
    }

    //constructors
    Base_Class(hp_type hp_value,stat_type str,stat_type intelligence,string name=""):
    health_points(hp_value),
    stat_block(str,intelligence),
    name(name),
    level(1)
    {};

private:
    string name;
    stat_type level;

};