#include<iostream>
#include<string>
using namespace std;
class Stack {
private:
	typedef struct Node {
		int data;
		struct Node *next;
		struct Node *prev;

	};
public:
	Node *topNode = NULL;
	Node *endNode = NULL;
	int cnt = 0;
	void push_front(int num) {
		Node* newNode = new Node();
		newNode->data = num;
		cnt++;
		if (topNode == NULL) { //아무것도 없을 때
			topNode = newNode;
			endNode = newNode;
		}
		else { //하나라도 있을 때topNode
			newNode->next = topNode;
			topNode->prev = newNode;
			topNode = newNode;
		}

	}
	void push_back(int num) {
		cnt++;
		Node* newNode = new Node();
		newNode->data = num;
		if (endNode == NULL) { //아무것도 없을 때
			topNode = newNode;
			endNode = newNode;
		}
		else {
			newNode->prev = endNode;
			endNode->next = newNode;//여기~~
			endNode = newNode;
		}

	}
	void front() {
		if (topNode)
			cout << topNode->data << "\n";
		else
			cout << "-1\n";
	}
	void back() {
		if (endNode)
			cout << endNode->data << "\n";
		else
			cout << "-1\n";
	}

	void size() { //계속 이동하면서 0일때까지 ++해주기
		/*int sizeNum = 0;
		Node* curNode = new Node();
		curNode = topNode;
		while (curNode) {
			curNode = curNode->next;
			sizeNum++;
		}
		cout << sizeNum << "\n";*/
		cout << cnt<<"\n";
	}
	bool empty() {
		bool emptyCheck;
		if (cnt) {
			emptyCheck = 0;
		}
		else {
			emptyCheck = 1;
		}
		return emptyCheck;
	}
	void pop_front() {
		if (empty())
			cout << "-1\n";
		else {
			cout << topNode->data << "\n";
			cnt--;
			if (topNode->next || endNode->prev) {
				topNode = topNode->next;
				topNode->prev = NULL;
			}
			else {
				endNode = NULL;
				topNode = NULL;
			}

		}

	}
	void pop_back() {
		if (empty())
			cout << "-1\n";
		else {
			cnt--;
			cout << endNode->data << "\n";

			if (endNode->prev || topNode->next) {
				endNode = endNode->prev;
				endNode->next = NULL;
			}
			else {
				endNode = NULL;
				topNode = NULL;
			}

		}

	}
	/*void pop_back() {
		if (empty())
			cout << "-1\n";
		else {
			cout << topNode->data << "\n";
			topNode = topNode->next;
		}

	}*/
};



int main() {
	int iter;
	cin >> iter;
	string cmd;
	Stack stk;
	int num;
	for (int i = 0; i < iter; i++) {
		cin >> cmd;
		if (!cmd.compare("push_back")) {
			cin >> num;
			stk.push_back(num);
		}
		else if (!cmd.compare("push_front")) {
			cin >> num;
			stk.push_front(num);
		}
		else if (!cmd.compare("front")) {
			stk.front();
		}
		else if (!cmd.compare("size")) {
			stk.size();
		}
		else if (!cmd.compare("empty")) {
			cout << stk.empty() << "\n";
		}
		else if (!cmd.compare("pop_back")) {
			stk.pop_back();
		}
		else if (!cmd.compare("pop_front")) {
			stk.pop_front();
		}
		else if (!cmd.compare("back")) {
			stk.back();
		}
	}
	return 0;
}
