#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

void printPostorder(struct Node* node)
{
	if (node == NULL)
		return;

	printPostorder(node->left);
	printPostorder(node->right);
    cout << node->data << " ";
}

void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;

	cout << node->data << " ";
	printPreorder(node->left);
	printPreorder(node->right);
}

void printInorder(struct Node* node)
{
	if (node == NULL)
		return;

	printInorder(node->left);
    cout << node->data << " ";
	printInorder(node->right);
}

int main()
{
	struct Node* root = new Node(1);
    root->left = new Node(12);
	root->right = new Node(9);
	root->left->left = new Node(5);
	root->left->right = new Node(6);

    cout << "\nThis is Inorder traversal\n";
	printInorder(root);
    cout << "\n\n";

    cout << "\nThis is preorder traversal\n";
	printPreorder(root);
    cout << "\n\n";

    cout << "\nThis is postorder traversal\n";
	printPostorder(root);
    cout << "\n\n";

	return 0;
}
