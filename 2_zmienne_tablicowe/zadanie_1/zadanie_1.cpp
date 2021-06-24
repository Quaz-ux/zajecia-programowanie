#include <iostream>
using namespace std;

int main()
{
	int tab[10];
	int najw[2];
	int najmn[2];
	for (int i = 0; i < 10; i++)
	{
		cin >> tab[i];
		if (i == 0) 
		{
			najw[0] = tab[i];
			najw[1] = i;
			najmn[0] = tab[i];
			najmn[1] = i;
		}



		if(tab[i] < najmn[0])
		{
			najmn[0] = tab[i];
			najmn[1] = i;
		}

		if(tab[i] > najw[0])
		{
			najw[0] = tab[i];
			najw[1] = i;
		}
	}

	cout << najw[0] << " " << najw[1] << endl;
	cout << najmn[0] << " " << najmn[1] << endl;
}
