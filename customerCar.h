#ifndef _CUSTOMERCAR_H
#define _CUSTOMERCAR_H

#include "car.h"
#include <vector>

using namespace std;
class customerCar:public Car{
public:
    customerCar(string brand="", string engine="", string carName="", 
    string color="",string type="", int price=0):Car(brand,engine,carName,color,type,price){
    }
    void findAs(int x,int y);
    void putAscenter(int x, int y){
        if(x>100 ||x<0||y>100||y<0){
            cout<<"좌표를 100 이하의 양수로 넣으시오"<<endl;
            return;
        }
        getAspostion().push_back(make_pair(x,y));
    }
};

#endif
