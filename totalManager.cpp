#include "totalManager.h"
#include <fstream>

void totalManager::loadCar(){


	stockManageCar *add_car ;
	add_car = new stockManageCar("HMC", "Hybrid", "avante","red","sedan",1000,30);
	carlist.push_back(*add_car);
	add_car = new stockManageCar("KIA", "Hybrid", "sonata","red","sedan",1000,30);
	carlist.push_back(*add_car);
	add_car = new stockManageCar("HMC", "Hybrid", "avante","red","sedan",1000,30);
	carlist.push_back(*add_car);
	add_car = new stockManageCar("KIA", "Hybrid", "avante","red","sedan",1000,30);
	carlist.push_back(*add_car);
	add_car = new stockManageCar("SMS", "Hybrid", "avante","red","sedan",1000,30);
	carlist.push_back(*add_car);


}
void totalManager::loadHuman(){

}
void totalManager::saveCar(){




}
void totalManager::saveHuman(){

}
void totalManager::printCarList(){
	for( auto out_data : carlist){
		cout << out_data.getBrand() << out_data.getCarId() << endl;
	}
}
void totalManager::printHuman(){

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

	cout << "Brand(KIA/HYUNDAI/BENTZ) : " ;
	getline(cin, brand,'\n');

	cout << "ENGINE(Normal/HEV/EV) : " ;
	getline(cin,engine ,'\n');

	cout << "Carname : " ;
	getline(cin, carName,'\n');

	cout << "color(Black/White/Red/Silver) : " ;
	getline(cin, color,'\n');

	cout << "Type(SUV/Sedan): " ;
	getline(cin, type,'\n');

	cout << "Price : " ;
	cin >> price ;

	cout << "Qunatity : " ;
	cin >> quantity ;

	stockManageCar add_car(brand,engine,carName,color,type,price,quantity);

	carlist.push_back(add_car);
}



