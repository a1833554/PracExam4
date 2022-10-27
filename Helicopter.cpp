#include "Helicopter.h"

Helicopter::Helicopter(){}

Helicopter::Helicopter(int w, string n){}

void Helicopter::set_name(string _name){
    name = _name;
}
string Helicopter::get_name(){
    return name;
}
void Helicopter::set_craftID(int ID){
    craftID = ID;
}
int Helicopter::get_craftID(){
    return craftID;
}
void Helicopter::fly(int headwind, int minutes){
    if (headwind < 40){
    fuel = fuel - 0.2*minutes;
    }else{
    fuel = fuel - 0.4*minutes;
    }
    if ( this -> get_weight() > 5670){
        fuel = fuel - (this -> get_weight() - 5670 )*0.01*minutes;
    }
}
