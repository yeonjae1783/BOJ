#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			cout << char(str[i] - 13);
		else if (str[i] == ' ')
			cout << ' ';
		else if (isdigit(str[i]))
			cout << str[i];
		else
			cout << char(str[i] + 13);
	}
	return 0;
}