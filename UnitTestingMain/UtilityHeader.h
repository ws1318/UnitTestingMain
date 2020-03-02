#pragma once

#include "CommonHeaders.h"

class clsUtility
{
private:
	string m_sName;
	int m_iAge;
	vector <int> m_iNumbers;
public:
	void SetName(string);
	string GetName();
	void SetAge(int);
	int GetAge();
	void AssignNumbers(vector <int>*);
	int GetSmallest();
	int GetLargest();
};