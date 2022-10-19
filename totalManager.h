#ifndef _TOTALMANAGER_H
#define _TOTALMANAGER_H
#include <iostream>
#include <vector>
#include <fstream>
#include "stockmanagecar.h" 
#include "human.h"
using namespace std;

class totalManager {
	vector<stockManageCar> carlist;
	vector<customer> customerData;
public:
	void loadCar();
	void loadHuman();
	void join();
	void addCarList();
	void saveCar();
	void saveHuman();
};

void totalManager::loadCar(){

}
void totalManager::loadHuman(){

}
void totalManager::saveCar(){


}
void totalManager::saveHuman(){

}

void totalManager::join(){
	string name, phone_number,id,passwd,address;
	int admin(0);

	cout << "name : " ;
	getline(cin, name,'\n');

	cout << "Phone number : ";
	getline(cin, phone_number,'\n');

	cout << "ID : ";
	getline(cin, id ,'\n'); //id 입력 후 동일 한 것이 있으면 실패 후 재 설정 함수 필요 
	
	cout << "passwd : ";
	getline(cin,passwd,'\n'); //passwd ** 로 입력....
	
	cout << "address : ";
	getline(cin, address,'\n');

	Custmer customer(name, phone_number,id,passwd,address,admin);

	customerData.push_back(custmer);

}
void totalManager::addCarList(){
	string brand , engine, carName, color,type;
	int price,quantity;

	cout << "Brand(kia/hyundai/sm) : " ;
	getline(cin, brand,'\n');
	
	cout << "engine : " ;
	getline(cin,engine ,'\n');
	
	cout << "Carname : " ;
	getline(cin, carName,'\n');
	
	cout << "color : " ;
	getline(cin, color,'\n');
	
	cout << "Type: " ;
	getline(cin, type,'\n');
	
	cout << "Price : " ;
	cin >> price ;

	cout << "Qunatity : " ;
	cin >> quantity ;

	stockManageCar add_car(brand,engine,carName,color,type,price,quantity);
	
	carlist.push_back(add_car);
}



#endif
