#include "totalManager.h"

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

	Customer addcustomer(name, phone_number,id,passwd,admin,address);

	customerData.push_back(addcustomer);

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



