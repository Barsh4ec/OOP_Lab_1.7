#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_1.7/Account.cpp"
#include "../OOP_Lab_1.7/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Account a, b;
			bool c = a.Init(5, 5.5);
			Assert::IsTrue(c);
		}
	};
}
