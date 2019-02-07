#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void push(Node **head_ref, int new_data)
{
    Node *new_node=(Node *)malloc(sizeof(Node));

    new_node->data=new_data;

    new_node->next=(*head_ref);

    (*head_ref)=new_node;
}

void insert_at_end(Node **head_ref,int new_data)
{
    Node *new_node=(Node *)malloc(sizeof(Node));

    new_node->data=new_data;
    new_node->next=NULL;

    Node *temp=*head_ref;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}

void delete_at(Node **head,int pos)
{
    Node *temp=*head;
    Node *prev;
    int i=0;
    if (pos==1)
    {
        *head=temp->next;
        return;
    }
    while(temp!=NULL && i<pos-1)
    {
        prev=temp;
        temp=temp->next;
        i++;
    }
    if (temp==NULL)
    {
        cout<<"No deletion";
    }
    else
    {
        prev->next=temp->next;
    }

}

void printlist(Node *node)
{
    while (node!=NULL)
    {
        cout<<node->data;
        node=node->next;
    }

}

int main()
{
    Node *head=NULL;

    push(&head,7);
    push(&head,8);
    push(&head,9);
    insert_at_end(&head,1);
    delete_at(&head,1);
    printlist(head);

    return 0;

}
