#include "pch.h"
#include "CppUnitTest.h"
#include "..\kurs\FordFulkerson.h"
#include "..\kurs\kurs.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace Fordtest
{
	TEST_CLASS(Fordtest)
	{
	public:

		TEST_METHOD(test1)
		{
			string fileName ="test1.txt";
			FordFulkerson test;
			test.inputData(fileName);
			Assert::AreEqual(test.MaxStream(), 20);
		}
		
	};
}

