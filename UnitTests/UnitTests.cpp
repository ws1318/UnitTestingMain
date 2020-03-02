#include "pch.h"
#include "CppUnitTest.h"
#include "..//UnitTestingMain/UtilityHeader.h"
#include "..//UnitTestingMain/UtilitySource.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UtilityTesting)
	{
	public:
		
		TEST_METHOD(NameTest)
		{
			string sName = "Sean";

			clsUtility objUtility;

			objUtility.SetName(sName);

			Assert::AreEqual(sName, objUtility.GetName());
		}
	};

	TEST_CLASS(NumberTests)
	{
	public:

		clsUtility objUtility;
		TEST_METHOD(LargestNumber)
		{
			int iRandom = rand() % 10 + 1;
			int iLargest = INT32_MIN;


			vector <int> iNumbers(iRandom);

			for (int iCount = 0; iCount < iNumbers.size(); iCount++)
			{
				iRandom = rand() % 100 + 1;
				iNumbers.at(iCount) = iRandom;

				if (iLargest < iRandom)
				{
					iLargest = iRandom;
				}
			}

			objUtility.AssignNumbers(&iNumbers);

			Assert::AreEqual(iLargest, objUtility.GetLargest());
		}

		TEST_METHOD(SmallestNumber)
		{
			int iRandom = rand() % 10 + 1;
			int iSmallest = INT32_MAX;


			vector <int> iNumbers(iRandom);

			for (int iCount = 0; iCount < iNumbers.size(); iCount++)
			{
				iRandom = rand() % 100 + 1;
				iNumbers.at(iCount) = iRandom;

				if (iSmallest > iRandom)
				{
					iSmallest = iRandom;
				}
			}

			objUtility.AssignNumbers(&iNumbers);

			Assert::AreEqual(iSmallest, objUtility.GetSmallest());





		}
	};
}
