#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include <iostream>
#include <string>
#include <vector>
#include "car.h"
using namespace std;

class Customer {
private:
  string name;
  string phone_number;
  string id;
  string psswd;
  int admin; // (0:일반 / 1:슈퍼유저)
  string address;
  vector<int> cart;
  vector<int> buying_list;
  int car_count;

public:
  Customer(string name = "", string phone_number = "", string id = "",
           string psswd = "", int admin = 0, string address = "");
  ~Customer();
  string getPhone();
  string getName();
  string getId();
  string getAddress();
  bool checkAdmin();
  bool correct_psswd(string id, string psswd);
  void addCart(int carId);
  void addBuyingList(int carId);
  int getCarCount();
};

#endif