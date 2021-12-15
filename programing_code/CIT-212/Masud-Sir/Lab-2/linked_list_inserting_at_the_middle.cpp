#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *link;
};

add_at_pos(struct node* head, int data, int pos){
    struct node *ptr = head;
    struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;
    while(pos != 1){
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}
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

    int data = 4, pos = 3;
    add_at_pos(head, data, pos);

    struct node *ptr = head;
     while(ptr != NULL){
        cout << ptr->data << endl;
        ptr = ptr->link;
     }

    return 0;
}

