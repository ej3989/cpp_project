#include <iostream>
#include "totalManager.h"
#include "stockmanagecar.h"
#include "customer.h"


using namespace std;

int main(){

	totalManager admin_manager;

	admin_manager.loadCar();

	admin_manager.printCarList();
	
}

