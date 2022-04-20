#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_3.3A\Rational.cpp"
#include "..\Lab_12_oop_3.3A\PublicRational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			PublicRational pr{ 3, 2 };
			pr++;
			Assert::AreEqual(pr.getA(), 4);
		}
	};
}
