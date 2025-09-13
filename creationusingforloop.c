#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
void insert_and_display( int a){
  struct node * ptr=(struct node *)malloc(sizeof(struct node *));
  struct node *head=(struct node *)malloc(sizeof(struct node *));
  for(int i=0;i<a;i++){
    if(i==0){
       head =ptr;
       printf("Enter element :");
       scanf("%d",&head->data);
    }
    else{
        struct node * new=(struct node *)malloc(sizeof(struct node *));
        printf("Enter element :");
        scanf("%d",&new->data);
        ptr->next=new;
        ptr=new;
        if(i==a-1) ptr->next=NULL;
    }
  }
  struct node * q=head;
  while(q!=NULL){
    printf("%d \n",q->data);
    q=q->next;
  }
}





int main (){
    struct node*head=(struct node *)malloc(sizeof(struct node *));
    int n;
    printf("Enter Number Of node: ");
    scanf("%d",&n);
    insert_and_display(n);
    
    return 0;
}