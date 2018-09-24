// A complete working C program to demonstrate deletion in singly 
// linked list 
#include <stdio.h> 
#include <stdlib.h> 

// A linked list node 
typedef struct Node 
{ 
	int data; 
	struct Node *next; 
}node;
void treeSet(node** head,int d){
    node* newN=(node*)malloc(sizeof(node));
    newN->data=d;
    newN->next=NULL;

    node* temp=*head;
    node* prev=temp;
    while(temp->next!=NULL && (temp->data)<=d){
       prev=temp;
       temp=temp->next;
    }
    if(temp->next==NULL && (temp->data)<=d){
        temp->next=newN;
        return;
    }
    newN->next=prev->next;
    prev->next=newN;
}
void print(node* head){
    while(head!=NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL");
}
int main(void){
    int n;
    node* head=malloc(sizeof(node));
    head->data=-65000;
    head->next=NULL;
  for(int i=0;i<5;i++){
  scanf("%d",&n);
  treeSet(&head,n);
  }
  print(head->next);
}
