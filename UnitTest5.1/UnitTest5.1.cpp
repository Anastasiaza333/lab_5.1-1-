#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = g(1, 1);
			Assert::AreEqual(t ,0,841471 );
		}
	};
}
