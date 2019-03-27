#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int a[26] = { 0, };
	for (int i = 0; i < str.length(); i++) {
		a[toascii(str.at(i)) - 97]++;
	}
	for(int j=0;j<26;j++)
		cout << a[j]<<" ";
	return 0;
}