#include<iostream>

using namespace std;

class sinhvien
{
private:
		string ten;
		int tuoi;
public:
	//setter: dung de thay doi thong tin doi tuong
	void setTen(string ten2)
	{
		ten = ten2;
	}
	//getter: dung de tra ve thong tin thuoc tinh cua doi tuong
	string getTen()
	{
		return ten;
	}
	void input()
		{
		cout<<"Nhap ten: ";
		getline(cin, ten);
		cout<<"Nhap tuoi: ";
		cin>>tuoi;
		cin.ignore();
		}
	void output()
	{
		cout<<"Ten: "<<ten<<" , tuoi: "<<tuoi<<endl;
	}
};
int main()
{
	sinhvien a;
	a.input();
	a.output();
	a.setTen("Tuan");
	cout << "ten moi: " << a.getTen()<<endl;
	a.output();
	
}
