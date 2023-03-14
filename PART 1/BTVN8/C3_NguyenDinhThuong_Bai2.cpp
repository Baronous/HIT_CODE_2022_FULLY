#include<iostream>
using namespace std;
	struct Sinhvien
	{
		char MSV;
		char HoVaTen;
		char QueQuan;
		float TBM;	
	 };
int main()
{
	int n;
	cout<<"Nhap vao n:";
	cin>>n;
	Sinhvien sv[n];
	if(n < 0 || n > 100)
	{
		cout<<"Gia tri khong hop le, vui long nhap lai.";

	}
	for (int i = 0; i < n; i++)
	{
		cout<<"["<<i<<"]" << "MSV: ";
			cin>>sv[i].MSV;
		cout<<"["<<i<<"]" << "HoVaTen: ";
			cin>>sv[i].HoVaTen;
		cout<<"["<<i<<"]" << "QueQuan: ";
			cin>>sv[i].QueQuan;
		cout<<"["<<i<<"]" << "TrungBinhMon: ";
			cin>>sv[i].TBM;
	}
	cout<<".............................................................\n";
	for (int i = 0; i < n; i++)
	{
			cout<<"Msv: " << sv[i].MSV <<endl<< "HoVaTen: " << sv[i].HoVaTen
			 << endl << "QueQuan: " << sv[i].QueQuan<<endl<<"TrungBinhMon: " << sv[i].TBM; 
	}
	return 0;
}
