#include <iostream>
using namespace std;

int main()
{
	int tab;
	float sum = 0;
	for (int i=0; i <10; i++)
	{
		cin >> tab;
		sum += tab;
	}

	cout << (sum/10) << endl;
}
