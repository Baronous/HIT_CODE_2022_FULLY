#include<iostream>
using namespace std;
int main()
{
	string str1;
	string str2;
	getline(cin,str1);
	getline(cin,str2);
	str1.find(str2);
	for(int i = 0; i <= str1.size(); ++i)
	{
		if(str1.find(str2) < str1.size())
		str1.erase(str1.find(str2), str2.size());
	}
	cout<<str1;
	return 0;
}
