#include<iostream>
using namespace std;
float max_value(float a, float b, float c){
	if ( a > b && a > c){
		return a;
	}	
	else if ( b > c && b > a){
		return b;
	}else 
		return c;
	float maxx = a;
	if (maxx < b) maxx = b;
	if (maxx < c) maxx = c;
	return maxx;
}
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	cout<<"Gia tri lon nhat trong ba so la: " << max_value(a, b, c);
	return 0;
}
