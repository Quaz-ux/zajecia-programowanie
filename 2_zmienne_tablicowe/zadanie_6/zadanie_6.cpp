#include <iostream>
using namespace std;

int lic(int x, int s)
{
	if(x<10 && x>=1)
		return s;
	else
		return lic(x / 10, s+1);
}

int main()
{
	int num;
	cin >> num;
	int size = lic(num, 1);
	int *tab = new int[size];

	for (int i=0; i< size; i++)
	{
		tab[i] = num % 10;
		num = num/10;
	}

	for (int i = size-1; i >= 0; i--)
		cout << tab[i] << " ";
}

