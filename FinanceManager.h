//It21326486_JeevanaPrasath
#pragma once
#include <iostream>
#include <iomanip>
#include <cstring>
#include <conio.h>
#include "GuestUser.h"
#include "RegisteredUser.h"
#include <cstdio>
#include "Financereport.h"
using namespace std;

//Inheritance relationship between Registered User and FinanceManager
// Uni-Directional association between FinanceManager and FinanceReport

class FinanceManager : public RegisteredUser
{
private:
	string financeManagerId;
	FinanceReport* finR;
public:
	FinanceManager();
	FinanceManager(string finMgr);
	void examineReport();
	~FinanceManager();

};

