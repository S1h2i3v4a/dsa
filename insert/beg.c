#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
}*head=NULL,*temp,*newnode;
void insertbeg(int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void traverse(){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    insertbeg(10);
    insertbeg(20);
    insertbeg(30);
    traverse();
    return 0;
}
