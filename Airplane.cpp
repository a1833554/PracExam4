#include "Airplane.h"


Airplane::Airplane(){}                     
Airplane::Airplane(int w, int p){
    weight = w;
    numPassengers = p;
}        // Create Airplane with weight w and passengers p


void Airplane::reducePassengers(int x){
    numPassengers = numPassengers - x;
}    // reduce passenger list by x
int Airplane::get_numPassengers(){
    return numPassengers;
} 