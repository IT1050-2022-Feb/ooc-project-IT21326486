//It21326486_JeevanaPrasath
#pragma once
#include <iostream>
#include "criteria.h"
#include <cstdio>
using namespace std;
#include <cstdio>

criteria::criteria()
{
	criteriaId = 0;
	criteriaType = "";
}
criteria::criteria(int cId, string cType)
{
	criteriaId = cId;
	criteriaType = cType;
}

string criteria::getCriteriaList()
{

}

void criteria::insertCriteria()
{

}

criteria::~criteria()
{
	cout << "Class Deleted" << endl;
}
