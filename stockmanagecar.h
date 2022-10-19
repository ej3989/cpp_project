#ifndef _STOCKMANAGECAR_H
#define _STOCKMANAGECAR_H
#include <string>
#include <iostream>
#include "car.h"
using namespace std;

class stockManageCar: public Car{
    int quantity;
public:
    stockManageCar(string brand="", string engine="", string carName="", 
    string color="",string type="", int price=0, int quantity=0):Car(brand,engine,carName,color,type,price){
        this->quantity = quantity;
    }
    int getQuantity(){return quantity;}
    void quantityIncreasing(int number);
    void quantityDecreasing(int number);
    int getSale();
};
#endif
