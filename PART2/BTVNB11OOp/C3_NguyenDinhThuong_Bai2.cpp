#include<iostream>

using namespace std;

class NSX{
	private:
		string Mansx;
		string Tennsx;
		string Diachisx;
	public:
		NSX(){
			
		}
		NSX(string Mansx2, string Tennsx2, string Diachisx2){
			Mansx = Mansx2;
			Tennsx = Tennsx;
			Diachisx = Diachisx2;
		}
		void NHAP(){
			cout << " Ma nha san xuat la: ";
				getline(cin, Mansx);
			cout << " Ten nha san xuat la: ";
				getline(cin, Tennsx);
			cout << " Dia chi nha san xuat la: ";
				getline(cin, Diachisx);
		}
		void XUAT(){
			cout << " Ma san xuat: " << Mansx << endl << " Ten nha san xuat la: " << Tennsx << endl << " Dia chi nha san xuat la: " << Diachisx << endl; 
		}
};

class HANG{
	private:
		string Mahang;
		string Tenhang;
		NSX x;
	public:
		HANG(){
			
		}
		void NHAP(){
			cout << " Ma hang la: ";
			getline(cin, Mahang);
			cout << " Ten hang la: ";
			getline(cin, Tenhang);	
			x.NHAP();
			}
		void XUAT(){
			cout << "--------------------------------" << endl;
			cout << " Ma hang la: " << Mahang << endl << " Ten hang la: " << Tenhang << endl;
			x.XUAT();
		} 
};

int main()
{
	HANG a;
	a.NHAP();
	a.XUAT();
	return 0;
}
