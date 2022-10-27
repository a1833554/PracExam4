#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <iostream>
#include <string>
using namespace std;

class AirCraft{
public:
AirCraft();
AirCraft(int w);             // creates an Aircraft with weight w
void refuel() ; 
void set_fuel(float f); 
float get_fuel();
void set_weight(int w);
int get_weight();
void set_numberOfFlights(int n);
int get_numberOfFlights();
virtual void fly(int headwind, int minutes);
private:
int weight ;                 // the weight of AirCraft
float fuel      ;            // fuel percentage, initially 100%
int numberOfFlights  ;       // initially 0

        // Resets fuel back to 100%


};
#endif
