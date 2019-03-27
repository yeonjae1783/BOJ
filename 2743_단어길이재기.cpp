#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char str[101];
	cin >> str;
	int cnt=0;
	for (int i = 0; i < strlen(str); i++) {
		if(isupper(str[i])||islower(str[i]))
			cnt++;
		else
			return 0;
	}
	cout<<cnt;
	return 0;
}