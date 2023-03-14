#include<iostream>
using namespace std;
float tong(float a, float b){
	return a + b;
}
float tich(float a, float b){
	return a * b;
}
float thuong(float a, float b)
{
	return a / b;
}
int main()
{
	float a, b;
	cin >> a >> b;
	cout<< tong(a, b) << endl << tich(a, b) << endl << thuong(a, b);
	return 0;
}
