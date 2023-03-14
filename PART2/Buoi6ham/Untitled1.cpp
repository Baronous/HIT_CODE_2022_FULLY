#include<iostream>
using namespace std;
void hoandoi(int &a, int &b){//co & = tham chieu
							 // khong co & = tham tri
	int t;
	t = a;
	a = b;
	b = t;
	cout<<"Dia chi cua a: " << &a << " ________ Dia chi cua b: " << &b<<endl;
}
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	hoandoi(a,b);
	cout<<"Sau khi hoan doi la:\n " << "a:" << a << " ---- b: " << b;
	return 0;
}
