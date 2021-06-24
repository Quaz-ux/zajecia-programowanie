#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int *tab = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> tab[i];
	}

	int x;
	cin >> x;

	int y=0;
	for (int i=0; i < size; i++)
	{
		if(tab[i]==x)
			y++;
	}

	cout << y << endl;
}
