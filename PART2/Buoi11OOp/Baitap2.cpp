#include<iostream>
#define PI 3.14

using namespace std;

class Circle{
	private:
		double radius;
	public:
		Circle(){
			radius = 20; 
		}
		void getinformation(){
			cout<<" Nhap vao ban kinh hinh tron: ";
				cin >> radius;
		}
		double getArea(){
			return PI * radius * radius;
		}
		double getCircumference(){
			return 2 * PI * radius;
		}
		void display(){
			cout << "Dien tich hinh tron la: " << getArea() << endl;
			cout << "Chu vi hinh trong la: " << getCircumference() << endl;
		}
};
int main()
{
	Circle a;
	a.getinformation();
	a.display();
	return 0;
}
