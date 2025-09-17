#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node * prev;
};
void traversal(struct node * ptr){
    struct node * a= ptr;
    while(ptr != NULL){
        printf("%d-> ",ptr->data);
        ptr=ptr->next;
    }
    //print from ptr->reverse baki 6...
    // while(ptr!=a){
    //     printf("%d-> ",ptr->data);
    //     ptr=ptr->prev;
    // }
    printf("NULL \n");
}
int main (){
    struct node * head;
    struct node * third;
    struct node * second;
    head=(struct node *)malloc(sizeof(struct node ));
    second=(struct node *)malloc(sizeof(struct node ));
    third=(struct node *)malloc(sizeof(struct node ));
    head->data=7;
    head->prev=NULL;
    head->next=second;
    second->data=11;
    second->prev=head;
    second->next=third;
    third->data=34;
    third->prev=second;
    third->next=NULL;
    traversal(head);
    
    return 0;
}