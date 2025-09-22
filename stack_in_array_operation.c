#include <stdio.h>
#include <stdlib.h>
struct stake
{
    int size;
    int top;
    int *array;
};
int isempty(struct stake *ptr)
{
    if (ptr->top == -1)
    {   
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stake * ptr){
    if(ptr->top==ptr->size-1) 
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stake * ptr,int val){
    if(isfull(ptr)){
        printf("Stake overflow.");
    }
    else{
        ptr->top++;
        ptr->array[ptr->top]=val;
    }
}
void pop(struct stake * ptr){
    if(isempty(ptr)){
        printf("Stake underflow.");
    }
    else{
        int val=ptr->array[ptr->top];
        free(ptr->array[ptr->top]);
        ptr->top--;
    }
}
int main()
{
    struct stake *sp=(struct stake *)malloc(sizeof(struct stake));
    sp->size = 80;
    sp->top = -1;
    sp->array = (int *)malloc(sp->size * sizeof(int));

    // if (isempty(sp))
    // {
    //     printf("Stake is empty.");
    // }
    // else
    // {
    //     printf("Stake is not empty.");
    // }
    push(sp,100);
    push(sp,101);
    push(sp,102);
    push(sp,103);
    push(sp,108);

    pop(sp);
    //pop(sp);
    printf("%d",sp->array[4]);

    return 0;
}