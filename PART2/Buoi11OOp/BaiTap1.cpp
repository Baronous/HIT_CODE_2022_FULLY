#include<iostream>

using namespace std;

class Student{
	private:
		string name;
		int age;
	public:
		Student(){
			name = "Thuong";
			age = 18;
		}
		void getinformation(){
			cout<<"Nhap vao ten cua ban: ";
				getline(cin, name);
			cout<<"Nhap vao tuoi cua ban; ";
				cin >> age;
				cin.ignore();
		}
		void display(){
			cout << "Ten: " << name << " ____ " << "Tuoi: " << age << endl;
		}
		
};
int main(){
	Student a;
	a.getinformation();
	a.display();
	return 0;
}
