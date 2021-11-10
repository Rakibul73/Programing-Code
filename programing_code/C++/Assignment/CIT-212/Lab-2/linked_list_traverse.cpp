// A simple C++ program for traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// This function prints contents of linked list
// starting from the given node
void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

// Driver code
int main()
{
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	Node* four = NULL;
	Node* five = NULL;


	// allocate 3 nodes in the heap
	one = new Node();
	two = new Node();
	three = new Node();
	four = new Node();
	five = new Node();

	one->data = 1; // assign data in first node
	one->next = two; // Link first node with second

	two->data = 2; // assign data to second node
	two->next = three;

	three->data = 3; // assign data to third node
	three->next = four;

	four->data = 4; // assign data to third node
	four->next = five;

	five->data = 5; // assign data to third node
	five->next = NULL;

	printList(one);

	return 0;
}

// This is code is contributed by rathbhupendra
