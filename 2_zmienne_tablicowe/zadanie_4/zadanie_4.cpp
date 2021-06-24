#include <iostream>
using namespace std;

int main()
{
	int size, najw, najmn;
	cin >> size;
	int *tab = new int[size];
	for (int i=0; i< size; i++)
	{
		cin >> tab[i];
		if(i==0){
			najw = tab[i];
			najmn = tab[i];
		}

		if(tab[i]>najw)
			najw = tab[i];

		if(tab[i]<najmn)
			najmn = tab[i];
	}


	int x;
	cin >> x;

	int y=0;
	for (int i=0; i< size; i++)
	{
		cout << tab[i] << " ";
		if(tab[i]>x)
			y++;
	}

	cout << endl;

	for (int i = size-1; i >=0 ; i--)
		cout << tab[i] << " ";

	cout << endl << y << endl;
	cout << najw << endl;
	cout << najmn << endl;
}
