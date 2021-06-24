#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, int> liczb;
	bool same = false;
	int n,x;
	cin >> n;
	for (int i=0; i < n; i++)
	{
		cin >> x;
		liczb[x]++;
		if(liczb[x]>1){
			same = true;
			break;
		}
	}



	if(same)
		cout << "NIE" << endl;
	else
		cout << "TAK" << endl;
}
