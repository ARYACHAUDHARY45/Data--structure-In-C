#include<stdio.h>
#include<stdlib.h>
struct node {
   int data;
   struct node * next;
};
void traversal(struct node * ptr){
    while(ptr != NULL){
        printf("%d-> ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL \n");
}struct node * deletefirst(struct node * head){
      struct node * ptr=head;
      head=head->next;
      free(ptr);
      return head;
}
struct node * deleteatindex(struct node * head,int index){
    struct node * p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct node * q=p->next;
    p->next=q->next;
    free(q);
    return head;
}
struct node * deleteatend(struct node * head){
    struct node * p=head;
    //we can use w=p->next and update it with p...in place of p->next->next...
    while(p->next->next!=NULL){
        p=p->next;
    }
    struct node * q=p->next->next;
    p->next=NULL;
    free(q);
    
    return head;
}
//extra 
struct node * deleteatvalue(struct node * head,int value){
    struct node * p=head;
    int i=0;
    while(p->data==value && p->next!=NULL){
        p=p->next;
        i++;
    }
    struct node * q=p->next;
    p->next=q->next;
    free(q);
    return head;
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;

    head=(struct node *)malloc(sizeof(struct node ));
    second=(struct node *)malloc(sizeof(struct node ));
    third=(struct node *)malloc(sizeof(struct node ));

    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=34;
    third->next=NULL;
    
    printf("Before deletion: ");
    traversal(head);
    // head=deletefirst(head);
    // head=deleteatindex(head,2);
    head=deleteatend(head);
    //head=deleteatvalue(head,34);
    printf("After deletion: ");
    traversal(head);

    return 0;
}