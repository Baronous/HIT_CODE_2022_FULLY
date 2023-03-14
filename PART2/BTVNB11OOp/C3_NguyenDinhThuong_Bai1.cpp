#include<iostream>

using namespace std;

class Hanghoa{
	private:
		string Mahang, Tenhang;
		float Dongia, Soluong, Thanhtien;
	public:
		Hanghoa(){
			
		}
		Hanghoa(string Mahang2, string Tenhang2, float Dongia2, float Soluong2, float Thanhtien2){
			Mahang = Mahang2;
			Tenhang = Tenhang2;
			Dongia = Dongia2;
			Soluong = Soluong2;
			Thanhtien = Thanhtien2;
		}
		void NHAP(){
			cout << " Nhap vao ma hang: ";
				cin >> Mahang;
				cin.ignore();
			cout << " Nhap vao ten hang: ";
				getline(cin, Tenhang);
			cout << " Nhap vap don gia: ";
				cin >> Dongia;
			cout << " Nhap vao so luong: ";
				cin >> Soluong;
		}
		void XUAT(){
			cout << " Ma hang: " << Mahang << endl;
			cout << " Ten hang: " << Tenhang << endl;
			cout << " Don gia: " << Dongia << endl;
			cout << " So luong: " << Soluong << endl; 
			cout << " Thanh tien: " << Dongia * Soluong << endl;
		}
};

int main()
{
	cout << " Nhap vao so luong hang hoa: ";
	int n;
	cin >> n;
	Hanghoa hang[n];
	for (int i = 0; i < n; i++)
	{
		cout << " Nhap thong tin hang hoa " << i + 1 << endl;
		hang[i].NHAP();
		cout << endl;
	}
	cout << "----------------------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		hang[i].XUAT();
		cout << "------------------------" << endl;
	}
	return 0;
}