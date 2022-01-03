#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node *next;
} * head;

int main() {
    int n;
    cout << "enter number of nodes = ";
    cin >> n;

    struct node *newnode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL) {
        cout << "unable to allocate memory";
        exit(0);
    }

    cout << "enter the data of node 1 = ";
    cin >> data;

    head->data = data;
    head->next = NULL;

    temp = head;
    for (i = 2; i <= n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));

        if(newnode == NULL) {
            cout << " Unable to allocate memory";
            break;
        }

        cout << "enter the data of node " << i << "= ";
        cin >> data;

        newnode->data = data;
        newnode->next = NULL;

        temp->next = newnode;
        temp = temp->next;
    }

    if(head == NULL) {
        cout << "List is empty";
        return 0;
    }

    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}