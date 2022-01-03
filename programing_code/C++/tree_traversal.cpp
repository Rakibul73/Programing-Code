#include <iostream>
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

void print_inorder (struct Node *root) {
    if(root == NULL) {
        return;
    }
    print_inorder(root->left);
    cout << root->data << " ";
    print_inorder(root->right);
}

void print_preorder (struct Node *root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}

void print_postorder (struct Node *root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}

int main() {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(3);
    root->right->right = new Node(3);

    cout << "inorder = ";
    print_inorder(root);
    cout << "preorder = ";
    print_preorder(root);
    cout << "postorder = ";
    print_postorder(root);
}