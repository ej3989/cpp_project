#ifndef _TOTALMANAGER_H
#define _TOTALMANAGER_H
#include <iostream>
#include <vector>
#include <fstream>
#include "stockmanagecar.h" 
#include "customer.h"
using namespace std;

class totalManager {
	vector<stockManageCar> carlist;
	vector<Customer> customerData;
public:
	void loadCar();
	void loadHuman();
	void join();
	void addCarList();
	void saveCar();
	void saveHuman();
};

#endif
