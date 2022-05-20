//It21326486_JeevanaPrasath
#pragma once
#include <iostream>
#include <iomanip>
#include <cstring>
#include "RegisteredUser.h"
#include "GuestUser.h"
#include "Payment.h"
#include "FinanceReport.h"
#include "FinanceEmployee.h"


#define SIZE 1

using namespace std;



//Inheritance relationship between Registered User and FinanceEmployee
//Composition relationship between FinanceEmployee and Payment
//Bi-Directional association between FinanceEmployee and FinanceReport



class FinanceEmployee : public RegisteredUser
{
private:
	Payment* payment[SIZE];
	FinanceReport* finR[SIZE];



public:
	FinanceEmployee();// default constructor
	FinanceEmployee(string rName, string rEmail, string uId, string pWord, Payment* payMent1, FinanceReport* finRep1);//overloaded constructor
	void receivePayment();
	void storePaymentDetails();
	void notifyAdmin();
	void generateReport(FinanceReport* finRep1);
	~FinanceEmployee();// destructor
};
