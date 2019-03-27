#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	cin >> str;
	int a[26];
	for (int j = 0; j < 26; j++)
		a[j] = -1;
	for (int i = 0; i < str.length(); i++) {
		if(a[toascii(str.at(i)) - 97] == -1)
			a[toascii(str.at(i)) - 97]=i;
	}
	for (int j = 0; j < 26; j++) 
		cout << a[j] << " ";
	
	return 0;
}