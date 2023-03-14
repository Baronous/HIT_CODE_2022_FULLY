#include<iostream>

using namespace std;

class HANG{
	private:
		string mahang;
		string tenhang;
		int dongia;
	public:
		HANG (){
			
		}
		HANG (string mahang2, string tenhang2, int dongia2){
			mahang = mahang2;
			tenhang = tenhang2;
			dongia = dongia2;
		}
		void NHAP(){
			cout << " Nhap vao ma hang: ";
				getline(cin, mahang);
			cout << " Nhap vao ten hang: ";
				getline(cin, tenhang);
			cout << " Nhap vao don gia: ";
				cin >> dongia;
			cin.ignore();
		}
		void XUAT(){
			cout << " Ma hang: " << mahang << endl
				 << " Ten hang: " << tenhang << endl
				 << " Don gia: " << dongia << endl;
		}
};
class PHIEU{
	private:
		string maphieu;
		int n;
		HANG x[];
	public:
	/*	PHIEU(){
			
		}*
		PHIEU(string maphieu2){
			maphieu = maphieu2;
		}*/
		void NHAP(){	
			getline(cin, maphieu);
			cout << " Nhap vao so luong mat hang: ";
			cin >> n;
			a.NHAP();
			or (int i = 0; i < n; i++)
			{
				cout << " Mat hang thu " << i + 1  << endl;
				x[i].NHAP();
			} .
		}
		void XUAT(){	
			a.XUAT();
			for (int i = 0; i < n; i++)
			
				cout << " Mat hang thu " << i + 1 >> endl;
			}
};
int main()
{
	PHIEU a;
	a.NHAP();
	a.XUAT();
	return 0;	
}