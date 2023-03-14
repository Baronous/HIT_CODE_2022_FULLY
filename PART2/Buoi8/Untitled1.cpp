#include<iostream>

using namespace std;
int main()
{
    int n;
    cout<<"NHap vao so nguyen duong n: ";
    cin>>n;   
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"\nPhan tu thu a["<<i<<"] = ";
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<< " ";
    }
    return 0;
}

