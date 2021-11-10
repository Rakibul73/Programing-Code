#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> data = 8;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 36;
    current->link = NULL;
    head->link = current;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 36;
    current->link = NULL;
    head->link = current;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 36;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 48;
    current->link = NULL;
    head->link->link = current;

    struct node *temp = head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->link;
    }
    return 0;
}
