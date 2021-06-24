#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	
	for (int j=0; j<n; j++)
	{
		for(int i=0; i<m ;i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
	
	return 0;
}