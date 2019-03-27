#include<iostream>
#include<string>
using namespace std;
int main() {
	string numA, numB, numC, numD;
	string com1, com2;
	cin >> numA >> numB >> numC >> numD;
	com1 = numA + numB;
	com2 = numC + numD;
	cout << stoll(com1) + stoll(com2);
	return 0;
}