#include <iostream>
using namespace std;
int func(int a);
main()
{
	cout << "hello" << endl;
	for(int i=0; i<5; i++)
	{
		cout << "i=" << func(i) << endl;
	}

}

