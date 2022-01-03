#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *link;
};

void del_pos(struct node **head, int pos){
    struct node *current = *head;
    struct node *previous = *head;
    if(*head == NULL){
        cout << "empty" << endl;
    }
    else if(pos == 1){
        *head = current->link;
        free(current);
        current = NULL;
    }
    else{
        while(pos != 1){
            previous = current;
            current = current->link;
            pos--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
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

    int pos = 2;
    del_pos(&head, pos);

    struct node *ptr = head;
    while(ptr != NULL){
        cout << ptr->data << endl;
        ptr = ptr->link;
    }
    return 0;
}
