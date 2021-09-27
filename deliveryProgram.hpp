//
//  deliveryProgram.hpp
//  ECE218 Exam 1TH
//
//  Created by Jing Ma on 10/6/20.
//  Copyright © 2020 Jing Ma. All rights reserved.
//

#ifndef deliveryProgram_hpp
#define deliveryProgram_hpp

#include <stdio.h>

#endif /* deliveryProgram_hpp */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


//customer class
class customer{
private:
    string firstName;
    string lastName;
    int numBoxes;
    double debt;
    bool delivered;
    
public:
    customer();
    ~customer();
    void setCustomer(string firstN, string lastN, int numB, double deb, bool deliv);
    void set_delivered(bool deliv);
    string get_firstName();
    string get_lastName();
    int get_numBoxes();
    double get_debt();
    bool get_delivered();
    
};

//customerVec
class customerVec{
private:
    customer *arr;
    int size;
    double paymentCollected;
    
public:
    customerVec();
    ~customerVec();
    int getSize();
    double getPaymentCollected();
    int addCustomer(customer cust);
    bool getCustomerAt(int loc, customer &cust);
    void setCustomerStatus(int loc, bool status);
    int purge();
    ostream& print(ostream& out);
    
};


