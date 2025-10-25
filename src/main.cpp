#include<helpers/helper_functions.h>
#include<game/warrior.h>
#include<game/rouge.h>
#include<game/wizard.h>

int main(){
    
    //  testing instanciating a warrior class
    //  using getter function
    Warrior adventurer_1("Adventurer");        
    adventurer_1.display_stats();
    
    Wizard adventurer_2("Mage");    
    adventurer_2.display_stats();

    Rouge adventurer_3("Thief");    
    adventurer_3.display_stats();
    
}



/**************************************************
Classes
Warrior : highest damage reduction
    hp growth:  19 / level
Wizard  : uses magic
    hp growth:  9 / level
Cleric  : uses support magic
    hp growth:  14 / level    
Rogue   : highest consistant melee/ranged damage
    hp growth:  13 / level    
**************************************************/



/*
bookmark:
https://youtu.be/Ei5oSENBWZk?list=PLalVdRk2RC6pqOVxRNj5Uui7FN4r-WorM&t=837
*/