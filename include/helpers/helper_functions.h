#pragma once

#include<chrono>
#include<thread>
#include<iostream>
#include<string>
#include<cstdlib>
#include<unordered_map>


using namespace std;

using  hp_type = int32_t;
using stat_type = uint32_t;
using attribute_map = unordered_map<string,stat_type>;

void slow_print(const string&text, int delay_ms = 25){
    for (char c : text){
        cout << c << flush ; 
        this_thread::sleep_for(chrono::milliseconds(delay_ms));

    }
};



