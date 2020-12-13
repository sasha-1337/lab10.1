#include "pch.h"
#include "CppUnitTest.h"
#include "../lab10.1.1/lab10_1_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101
{
	TEST_CLASS(UnitTest101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			//fstream t("t.txt");
			
			//char* s = "sasha.stu..de..nt";
			t = search_dot("t.txt");
			Assert::AreEqual(t, 8);

		}
	};
}
