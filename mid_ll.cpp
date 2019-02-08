//Printing mid of a singly linked list.

#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct Node
{
    int data;
    Node *next;
}Node;

void insert(Node **head,int new_data)
{
    Node *new_node=(Node *)malloc(sizeof(Node));
    new_node->data=new_data;
    new_node->next=*head;
    *head=new_node;
}

void display(Node *node)
{
    while (node!=NULL)
    {
        cout<<node->data;
        node=node->next;
    }
}

void print_mid(Node *node,int num)
{
    int i=0,cond=num/2;
    Node *prev=NULL;
    if (num%2==0)
    {
        cond=cond;
    }
    else
    {
        cout<<"here";
        cond=cond+1;
        cout<<cond<<endl;
    }
    while(node!=NULL && i<cond)
    {
        prev=node;
        node=node->next;
        i++;
    }
    cout<<prev->data;
}

int main()
{
    int data,num;
    Node *head=NULL;
    cout<<"Enter no. of elements:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>data;
        insert(&head,data);
    }
    cout<<"Linked List:";
    display(head);
    print_mid(head,num);
    return 0;
}





