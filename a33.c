//write a program to implement BST tree 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    struct BSTnode *head =NULL;
    head=create(head,10);
    head=create(head,20);
    head=create(head,30);
    head=create(head,40);
    head=create(head,50);
    head=create(head,60);
    head=create(head,80);
    inorder(head);
    return 0;
}
struct BSTnode 
{   
    int data;
    struct BSTnode* left;
    struct BSTnode* right;
};
struct BSTnode *newnode(int data)
{
 struct BSTnode *t=(struct BSTnode*)malloc(sizeof(struct BSTnode));
 t->data=data;
 t->left=t->right=NULL;
 return t;
}
struct BSTnode* create(struct BSTnode *head,int data)
{
    if(head==NULL)
    {
      head=newnode(data);
      return head;
    }
        else if(data<=head->data)
               head->left=create(head->left,data);  
    else
            head->right=create(head->right,data);
        return head;
    
}
void inorder(struct BSTnode *head)
{
    if(head!=NULL)
    {
        inorder(head!=NULL);
        printf("%d",head->data);
        inorder(head->right);
    }
}