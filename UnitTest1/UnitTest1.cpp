#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_lab_1.2/Square.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			double d;
			double a;
			d = (sqrt(((3 - 1) * (3 - 1)) + ((4 - 2) * (4 - 2))));
			a = d / sqrt(2);
			Assert::AreEqual(a, (2.));
		}
	};
}
