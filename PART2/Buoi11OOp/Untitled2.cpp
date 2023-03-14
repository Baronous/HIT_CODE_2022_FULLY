#include<iostream>

using namespace std;

class Hang{
	private:
		string ten;
		float gia;
		int sl;
	public:
		Hang(){
			
		}
		Hang(string ten2, float gia2, int sl2){
			ten = ten2;
			gia = gia2;
			sl = sl2;
		}
		void input(){
			cout << "Ten hang la: ";
				getline(cin, ten);
			cout << "Gia: ";
				cin >> gia;
			cout << " So luong: ";
				cin >> sl;
			cin.ignore();
		}
		void output(){
			cout << ten << endl << gia << endl << sl;
		}

};
class NCC{
	private:
		string ma, ten, dc;
	public:
		NCC(string ma2, string ten3, string dc2){
			ma = ma2;
			ten = ten3;
			dc = dc2;
		}
		void input(){
			cout << "Ma NCC : ";
				getline(cin, ma);
			cout << "Ten NCC: ";
				cin >> ten;
			cout << " Dia chi: ";
				cin >> dc;
			cin.ignore();
		}
		void output(){
			cout << ma << endl << ten << endl << dc;
		} 
};
class Phieu{
	private:
		string ma, ngaylap;
		NCC n;
		Hang dshang[3];
	public:
	/*	Phieu(){
			
		}*/
		Phieu(string ma2, string ngaylap2, NCC n2, Hang ds2[]){
			ma = ma2;
			ngaylap = ngaylap2;
			n = n2;
			for (int i = 0; i < 3; i++)
			{
				dshang[i] = ds2[i];
			}
		}
		void input(){
			cout << "Ma: ";
			getline (cin, ma);
			cout << "Ngay lap: ";
			getline (cin, ngaylap);
			n.input();
			for (int i = 0; i < 3; i++)
			{
				cout << "Hang thu " << i + 1 << endl;
				dshang[i].input();
			}
		}
		void output(){
			cout << ma << endl << ngaylap << endl;
			n.output();
			for (int i = 0; i < 3; i++)
			{
				cout << "Hang thu " << i + 1 << endl;
				dshang[i].input();
			}
		}
};
int main(){
	
}
