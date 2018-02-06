// sharedPointers.cpp : Defines the entry point for the console application.
//
// 22:47

#include "stdafx.h"
#include <iostream>
#include <memory>

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "created" << endl;
	};


	void greet()
	{
		cout << "Hello" << endl;
	}

	~Test()
	{
		cout << "destroyed" << endl;
	}
};

int main()
{
	{
		cout << "1st scope" << endl;
		shared_ptr<Test> pTest1 = make_shared<Test>();
		shared_ptr<Test> pTest2 = pTest1;
		shared_ptr<Test> pTest3 = pTest1;
	}
	cout << "second scope" << endl;
	return 0;
}

