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

    //print
    if(head == NULL) {
        cout << "List is empty";
        return 0;
    }
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    //add data at beggining
    cout << "enter data to insert at beggining = ";
    cin >> data;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;


    //print
    if(head == NULL) {
        cout << "List is empty";
        return 0;
    }
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;


    //add data at the middle
    cout << "Which position you want to add? = ";
    int pos;
    cin >> pos;
    cout << "which data you want add ? = ";
    cin >> data;
    struct node *ptr = head;
    struct node *ptr2 = (struct node *)malloc(sizeof(struct node));
    ptr2->data = data;
    pos--;
    while(pos != 1) {
        ptr = ptr->next;
        pos--;
    }
    ptr2->next = ptr->next;
    ptr->next = ptr2;


    //print
    if(head == NULL) {
        cout << "List is empty";
        return 0;
    }
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;


    //delete with a give position
    cout << "which position's data do you want to delete ? = ";
    cin >> pos;
    struct node *previous = head;
    struct node *current = head;
    if(head == NULL) {
        cout << "nothing to delete";
    }
    else if(pos == 1) {
        head = current->next;
        free(current);
        current = NULL;
    }
    else {
        while(pos != 1) {
            previous = current;
            current = current->next;
            pos--;
        }
        previous->next = current->next;
        free(current);
        current = NULL;
    }


    //print
    if(head == NULL) {
        cout << "List is empty";
        return 0;
    }
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}