#include <iostream>
using namespace std;

int main()
{
    int a,i ;
    cin >> a ;
    for (int y=0;y<a;y++)
{
    i=0;
    do
    {
        if (i==y || i==0 || y==a-1) cout << "* ";
        else cout << "  ";
        i++;
    }
    while(i<y+1);
    cout << endl;
}
}