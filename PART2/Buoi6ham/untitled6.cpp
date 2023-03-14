#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap vao n: ";
    cin>>n;
    int a, b;
    int sum = 0;
    cout<<"Nhap vao a: "; cin>>a;
    cout<<"Nhap vao b: "; cin>>b;
    sum = a + b ;
    cout<<sum<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<< i << " ";
    }
    return 0;
}
