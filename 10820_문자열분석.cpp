#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char str[101];
	int ans_arr[4];
	while(fgets(str, 102, stdin)){
		for (int i = 0; i < 4; i++)
			ans_arr[i] = 0;
		for (int i = 0; i< strlen(str); i++) {
			if (islower(str[i])) 
				ans_arr[0]++;
			else if (isupper(str[i]))
				ans_arr[1]++;
			else if (isdigit(str[i]))
				ans_arr[2]++;
			else if (str[i] == ' ')
				ans_arr[3]++;
		}
		for (int j = 0; j < 4; j++)
			cout << ans_arr[j]<<" ";
		cout << "\n";
	}
	return 0;
}