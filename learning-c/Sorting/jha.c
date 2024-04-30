#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}Node;
Node *head = NULL;


void addNode(int val )
{
    if(head==NULL)
    {
        head = (Node *)malloc(sizeof(Node));
        head->data = val;
        head->next = NULL;
        return;
    }
    Node *ptr = head;
    while(ptr->next) ptr = ptr->next;
    ptr->next= (Node *)malloc(sizeof(Node));
    ptr->next->data=val;
    ptr->next->next=NULL;
    return ;
}

void reverse(Node *head)
{
    if((head==NULL)||(head->next==NULL))
    {
        
    }
}

void printlist(Node* head)
{
    Node *ptr = head;
    while(ptr) 
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);
    printlist(head);
    return 0;
}