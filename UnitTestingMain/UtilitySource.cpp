#include "UtilityHeader.h"

void clsUtility::SetName(string sName)
{
	m_sName = sName;
}

string clsUtility::GetName()
{
	return m_sName;
}

void clsUtility::SetAge(int iAge)
{
	m_iAge = iAge;
}

int clsUtility::GetAge()
{
	return m_iAge;
}

void clsUtility::AssignNumbers(vector <int>* iNumbers)
{
	m_iNumbers = *iNumbers;
}

int clsUtility::GetSmallest()
{
	int iSmallest = INT32_MAX;

	for (int iCount = 0; iCount < m_iNumbers.size(); iCount++)
	{
		if (iSmallest > m_iNumbers.at(iCount))
		{
			iSmallest = m_iNumbers.at(iCount);
		}
	}

	return iSmallest;
}

int clsUtility::GetLargest()
{
	int iLargest = INT32_MIN;

	for (int iCount = 0; iCount < m_iNumbers.size(); iCount++)
	{
		if (iLargest < m_iNumbers.at(iCount))
		{
			iLargest = m_iNumbers.at(iCount);
		}
	}

	return iLargest;
}
