#include "car.h"
#include "stockmanagecar.h"
#include "customerCar.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    stockManageCar A("HMC", "Hybrid", "avante","red","sedan",1000,30);
    cout<<A.getSale()<<endl;
    cout<<A.getQuantity()<<endl;
    cout<<A.getBrand()<<endl;
    cout<<A.getEngine()<<endl;
    cout<<A.getCarName()<<endl;
    cout<<A.getColor()<<endl;
    cout<<A.getType()<<endl;
    customerCar B("HMC");
    B.findAs(15,20);
    customerCar C("HMC");
    C.findAs(37,48);
    customerCar D("HMC");
    D.findAs(37,48);

    return 0;
}