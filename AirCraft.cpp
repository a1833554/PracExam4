#include "AirCraft.h"


AirCraft(){};
AirCraft(int w){
    weight = w;
}             // creates an Aircraft with weight w

void set_fuel(float f){
    fuel = f;
}
float get_fuel(){
    return fuel;
}
void set_weight(int w){
    weight = w;
}
int get_weight(){
    return weight;
}
void set_numberOfFlights(int n){
    numberOfFlights = n;
}
int get_numberOfFlights(){
    return numberOfFlights;
}

void fly(int headwind, int minutes){
    fuel = fuel - minutes/5;
    numberOfFlights++;
}

void refuel() {
    fuel = 100;
}  