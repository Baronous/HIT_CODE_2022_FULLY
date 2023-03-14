#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;
	struct SinhVien
	{
		string MSV, HoVaTen, Tuoi, QueQuan;
	};
int main()
{
	int n;
	cin>>n;
	SinhVien sv[n];
	for (int i = 0; i < n; i++)
	{
		cout << "["<<i<<"]" << "MSV: "; 
			cin>> sv[i].MSV;
		cout << "["<<i<<"]" << "HoVaTen: "; 
			cin>> sv[i].HoVaTen;
		cout << "["<<i<<"]" << "Tuoi: "; 
			cin >> sv[i].Tuoi;
		cout << "["<<i<<"]" << "QueQuan: "; 
			cin >> sv[i].QueQuan;
	}
	cout<<".............................................................\n";
	for (int i = 0; i < n; i++)
	{
			cout<<"Msv: " << sv[i].MSV <<" ___ "<< "HoVaTen: " << sv[i].HoVaTen
	 	<< " ___ " << "Tuoi: " << sv[i].Tuoi << " ___ " << "QueQuan: " << sv[i].QueQuan<<endl; 
	}
	return 0;
}

