#include "pch.h"
#include "CppUnitTest.h"
#include "../laba10.1/laba10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[100];
			cout << "filename: "; cin >> fname;
			cout << endl;
			CreateTXT(fname);
			PrintTXT(fname);
			cout << endl;
			cout << "k(,-) = " << ProcessTXT1(fname) << endl;
			return ;
		}
	};
}
