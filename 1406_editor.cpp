#include<iostream>
#include<string>
#include<list>
using namespace std;
int main() {
	list<char> lt;
	string str;
	char cmd,insertletter;
	list<char>::iterator current;
	cin >> str;

	for (int j = 0; j < str.length(); j++)
		lt.push_back(str.at(j));
	current = lt.end();
	int iter;
	cin >> iter;

	for (int i = 0; i < iter; i++) {
		cin >> cmd;
		if (cmd == 'L') {
			if(current!=lt.begin())
				current--;
			
		}
		else if (cmd == 'D') {
			if(current != lt.end())
				current++;
		}
		else if (cmd == 'B')
		{
			if (current != lt.begin()) {
				current = lt.erase(--current);
			}

		}
		else if (cmd == 'P')
		{
			cin >> insertletter;
			lt.insert(current, insertletter);
			
		}

		
	}

	for (current = lt.begin(); current != lt.end(); ++current) {
		cout << *current;
	}
	return 0;
}	