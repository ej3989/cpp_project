#include "totalManager.h"
#include <fstream>
#include <iostream>
#include <algorithm>

void totalManager::loadCar(){


	stockManageCar *add_car ;
	add_car = new stockManageCar("HMC", "Normal", "grandeur","red","sedan/suv",5000,25);
	carlist.push_back(*add_car);
	add_car = new stockManageCar("KIA", "HEVcar", "staria","black","sedan",4000,30);
	carlist.push_back(*add_car);
	add_car = new stockManageCar("BENTZ", "EVcar", "E-class","white","sedan",9000,12);
	carlist.push_back(*add_car);
	add_car = new stockManageCar("KIA", "PBV", "sportage","silver","suv",3500,30);
	carlist.push_back(*add_car);
	add_car = new stockManageCar("HMC", "Noraml", "G90","red","sedan",8200,2);
	carlist.push_back(*add_car);


}
void totalManager::loadHuman(){

	Customer *add_custmer;
	add_custmer = new Customer ("kim","010-1111-1111","wer1","12345678",0,"seoul");
	customerData.push_back(*add_custmer);
	add_custmer = new Customer ("Charles","010-3333-1111","der1","12345678",0,"seoul");
	customerData.push_back(*add_custmer);
	add_custmer = new Customer ("Ken","010-4444-1111","wber1","12345678",0,"seoul");
	customerData.push_back(*add_custmer);
	add_custmer = new Customer ("Grec","010-5555-1111","11r31","12345678",0,"pusan");
	customerData.push_back(*add_custmer);
	add_custmer = new Customer ("admin","000-0000-0000","admin","12345678",1,"");
	customerData.push_back(*add_custmer);


}

Customer& totalManager::findUser(string name){
	
	auto it = find_if(customerData.begin(),customerData.end(),[name](Customer a)->bool{ return (a.getName() == name);});
	if(it==customerData.end()){
		cout << "사용자가 없습니다" << endl;
	}
		
	return *it;

}
void totalManager::saveCar(){
	//필요가 없음 ...

}
void totalManager::saveHuman(){

	// 필요가 없음...
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
	
	cout << " 생성 계정 타입 user: 0 , admin : 1 " << endl;
	int usertype;
	cin >> usertype ;
	if( usertype == 1){
		while(true){
			string admin_passwd;
			cout << "비빌 번호 입력 하세요(exit) " ;
			getline(cin, admin_passwd,'\n');

			if(admin_passwd == "mobis1234"){
				admin = 1;
				break;
			}else if(admin_passwd == "exit")
				break;

		}
		
	}


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



