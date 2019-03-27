#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string str;
	cin >> str;
	vector<string> ansvec;
	int str_len = str.length();
	for (int i = 0; i < str_len; i++)
	{
		ansvec.push_back(str);
		reverse(str.begin(), str.end());
		str.pop_back();
		reverse(str.begin(), str.end()); 

	}
	sort(ansvec.begin(), ansvec.end());
	for (int i = 0; i < ansvec.size(); i++)
		cout << ansvec.at(i)<<"\n";
	return 0;
}