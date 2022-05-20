//It21326486_JeevanaPrasath
#pragma once
#include <iostream>
#include "FinanceManager.h"
#include <cstdio>

FinanceManager::FinanceManager()
{
	financeManagerId = "";
}
FinanceManager::FinanceManager(string finManId)
{
	financeManagerId = finManId;
}

void FinanceManager::examineReport()
{

}
FinanceManager::~FinanceManager()
{
	cout << "FinamanceManager Deleted" << endl;
}
