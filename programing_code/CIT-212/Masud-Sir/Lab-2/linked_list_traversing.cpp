#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> data = 1;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 4;
    current->link = NULL;
    head->link->link->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 5;
    current->link = NULL;
    head->link->link->link->link = current;

    struct node *temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->link;
    }
    return 0;
}
