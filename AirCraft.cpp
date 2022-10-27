#include "AirCraft.h"


AirCraft::AirCraft(){};
AirCraft::AirCraft(int w):weight(w){}            // creates an Aircraft with weight w

void AirCraft::set_fuel(float f){
    fuel = f;
}
float AirCraft::get_fuel(){
    return fuel;
}
void AirCraft::set_weight(int w){
    weight = w;
}
int AirCraft::get_weight(){
    return weight;
}
void AirCraft::set_numberOfFlights(int n){
    numberOfFlights = n;
}
int AirCraft::get_numberOfFlights(){
    return numberOfFlights;
}

void AirCraft::fly(int headwind, int minutes){
}

void AirCraft::refuel() {
    fuel = 100;
}  