#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int e=0;e<a;e++)
    {
        for(int i=0;i<a;i++)
    {
        if(i==0 || e==0 || i==a-1 || e==a-1 || e==i || a-1==i+e)cout << "* ";
        else cout << "  ";
    }
    cout << endl;
    }
} 