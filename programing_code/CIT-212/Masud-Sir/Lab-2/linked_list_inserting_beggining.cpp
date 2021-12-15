#include <bits/stdc++.h>

using namespace std;


struct node{
        int data;
        struct node *link;
};
struct node* add_beg(struct node* head, int d){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
};

int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 2;
    ptr->link = NULL;

    head->link = ptr;

    struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->data = 3;
    ptr2->link = NULL;

    ptr->link = ptr2;

    int data = 4;
     head = add_beg(head, data);
     ptr = head;
     while(ptr!=NULL){
        cout << ptr->data << endl;
        ptr = ptr->link;
     }

    return 0;
}
