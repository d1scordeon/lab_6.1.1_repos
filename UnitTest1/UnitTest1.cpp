#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr_6.1.1\lab_6.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[3] = { -2, 5, 10 };
			int sum = (a, 3);
			Assert::AreEqual(sum, 3);
		}
	};
}
