#include "AirCraft.h"


AirCraft::AirCraft(){};
AirCraft::AirCraft(int w){
    weight = w;
}             // creates an Aircraft with weight w

AirCraft::void set_fuel(float f){
    fuel = f;
}
AirCraft::float get_fuel(){
    return fuel;
}
AirCraft::void set_weight(int w){
    weight = w;
}
AirCraft::int get_weight(){
    return weight;
}
AirCraft::void set_numberOfFlights(int n){
    numberOfFlights = n;
}
AirCraft::int get_numberOfFlights(){
    return numberOfFlights;
}

AirCraft::void fly(int headwind, int minutes){
    fuel = fuel - minutes/5;
    numberOfFlights++;
}

AirCraft::void refuel() {
    fuel = 100;
}  