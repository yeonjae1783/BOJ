#include<iostream>
#include<string>
using namespace std;
class Stack{
	private:
		typedef struct Node {
			int data;
			struct Node *next;
		};
	public:
		Node *topNode = NULL;
		void push(int num) {
			Node* newNode = new Node();
			newNode->data = num;
			if (topNode == NULL) { //�ƹ��͵� ���� ��
				topNode = newNode;
			}
			else { //�ϳ��� ���� ��topNode
				newNode->next = topNode;
				topNode = newNode;
			}

		}
		void top() {
			if (topNode)
				cout << topNode->data << "\n";
			else
				cout << "-1\n";
		}

		void size() { //��� �̵��ϸ鼭 0�϶����� ++���ֱ�
			int sizeNum = 0;
			Node* curNode = new Node();
			curNode = topNode;
			while (curNode) {
				curNode = curNode->next;
				sizeNum++;
			}
			cout << sizeNum << "\n";
		}
		bool empty() {
			bool emptyCheck;
			if (topNode) {
				emptyCheck = 0;
			}
			else {
				emptyCheck = 1;
			}
			return emptyCheck;
		}
		void pop() {
			if (empty())
				cout << "-1\n";
			else {
				cout << topNode->data << "\n";
				topNode = topNode->next;
			}

		}
};



int main() {
	int iter;
	cin >> iter;
	string cmd;
	Stack stk;
	int num;
	for (int i = 0; i < iter; i++) {
		cin >> cmd;
		if (!cmd.compare("push")) {
			cin >> num;
			stk.push(num);
		}
		else if (!cmd.compare("top")) {
			stk.top();
		}
		else if (!cmd.compare("size")) {
			stk.size();
		}
		else if (!cmd.compare("empty")) {
			cout << stk.empty() << "\n";
		}
		else if (!cmd.compare("pop")) {
			stk.pop();
		}
	}
	return 0;
}
