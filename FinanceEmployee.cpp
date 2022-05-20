//It21326486_JeevanaPrasath
#pragma once
#include <iostream>
#include "FinanceEmployee.h"
#include "GuestUser.h"
#include "FinanceReport.h"
#include "RegisteredUser.h"
#include <cstring>




FinanceEmployee::FinanceEmployee() :RegisteredUser() {
	name = "";
	email = "";
	userId = "";
	password = "";



	payment[0] = new Payment();
	finR[0] = new FinanceReport();
}



FinanceEmployee::FinanceEmployee(string rName, string rEmail, string uId, string pWord, Payment* payMent1, FinanceReport* finRep1) {
	name = rName;
	email = rEmail;
	userId = uId;
	password = pWord;



	payment[0] = new Payment(*payMent1);
	finR[0] = new FinanceReport(*finRep1);
}



void FinanceEmployee::receivePayment() {
}



void FinanceEmployee::storePaymentDetails() {



}



void FinanceEmployee::notifyAdmin() {
}



void FinanceEmployee::generateReport(FinanceReport* finRep1) {
}



FinanceEmployee::~FinanceEmployee() {
	cout << "Destructor called for Job Class" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		delete payment[i];
	}
	for (int i = 0; i < SIZE; i++)
	{
		delete finR[i];
	}



}
