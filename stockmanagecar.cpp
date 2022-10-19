#include "car.h"
#include "stockmanagecar.h"
#include <iostream>
#include <vector>
#include <ctime>

void stockManageCar::quantityIncreasing(int number){
    quantity+=number;
}
void stockManageCar::quantityDecreasing(int number){
    quantity-=number;
}
int stockManageCar::getSale(){
    int price = getPrice();
    srand(time(NULL));
    int randGauge = rand()%20+1;
    return price*(80+randGauge)/100;
}