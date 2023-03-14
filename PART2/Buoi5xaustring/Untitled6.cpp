#include<iostream>
using namespace std;
int main(){
	//cho chuoi s tu ban phim, thay the khoang trang bang @ neu co
	string s;
	getline(cin,s);
	for(int i = 0; i < s.size();i++){
		if(s[i] == ' ')
		 s[i] = '@'; 
	cout<<s[i];
	}
	return 0;
}
