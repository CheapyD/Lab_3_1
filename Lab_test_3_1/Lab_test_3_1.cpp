#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3_1/Triad.cpp"
#include "../Lab_3_1/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest31
{
	TEST_CLASS(Labtest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad triad(-20.0, 12.5, 0.5);
			Assert::AreEqual(triad.Sum(), -7.0);
		}

		TEST_METHOD(TestMethod2)
		{
			Triangle T(3, 4, 5);
			Assert::AreEqual(T.Square(), 6.0);
		}
	};
}
