#include "Node.h"
#include <iostream>

void AddNodeToEnd(Node* head, Node* toAdd) {
	Node* traverse = head;
	while (traverse ->next != nullptr) {
		traverse = traverse->next;
	}
	traverse->next = toAdd;
	return;
}

void PrintList(Node* head) {
	Node* traverse = head;
		while (traverse != nullptr) {
			std::cout << traverse->value << std::endl;
			traverse = traverse->next;
	}
}

int main() {
	Node* head = new Node();
	Node* anotherNode = new Node();
	Node* anotherNode1 = new Node();

	head->value = 5;
	AddNodeToEnd(head, anotherNode);
	AddNodeToEnd(head, anotherNode1);

	PrintList(head);

	std::cout << head->value << std::endl;

	return 0;
}