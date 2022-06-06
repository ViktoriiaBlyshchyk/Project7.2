#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project7.2\Project7.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			list <int> list {2, 3, 4, 5};
			int k = count(list, 4);
			Assert::AreEqual(k, 2);
		}
	};
}
