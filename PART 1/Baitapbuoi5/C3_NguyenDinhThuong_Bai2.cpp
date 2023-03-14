#include<iostream>
using namespace std;
int main()
{
	string str1, str2;
	getline(cin,str1);
	getline(cin,str2);
	for(int i = 0; i < str1.size(); ++i)
	{
		if(str1[i] - str2[i] != 32 &&str1[i] != str2[i] && str1[i] + 32 != str2[i])
	{
		cout<<"NO";
		return 0;
	}
		}
		cout<<"YES";
	if (str1.size() != str2.size()){
		cout<<"NO";
	return 0;
	}
	return 0;
}
