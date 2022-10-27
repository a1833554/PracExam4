#ifndef HELICOPTER_H
#define HELICOPTER_H
#include <iostream>
#include <string>
using namespace std;
#include "AirCraft.h"

class Helicopter: public AirCraft{
    public:
Helicopter();
Helicopter(int w, string n);
void set_name(string n); 
string get_name();
void set_craftID(int ID);
int get_craftID();
void fly(int headwind, int minutes);

    // creates a Helicopter with weight w and name n
static int heliID;

string name;                    // name of the Helicopter
int craftID;
};
#endif