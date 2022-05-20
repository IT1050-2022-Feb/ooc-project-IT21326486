//It21326486_JeevanaPrasath
#pragma once
#include <iostream>
#include <iomanip>
#include <cstring>
#include <conio.h>
#include <cstdio>
using namespace std;

//Composition relationship between Criteria and Job

class criteria
{
private:
	int criteriaId;
	string criteriaType;

public:
	criteria();
	criteria(int cId, string cType);
	string getCriteriaList();
	void insertCriteria();
	~criteria();

};


