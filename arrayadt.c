#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int total_size;
    int used_size;
    int *ptr;//points to first element of an array.
};
void createarray(struct myarray * a,int tsize,int usize){
    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr=(int *)malloc(tsize * sizeof(int));
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int *)malloc(tsize * sizeof(int));
};
void show(struct myarray * a){
    for(int i=0;i< a->used_size;i++){
        printf("%d\n",(a->ptr)[i]);
        
    }
}
void set(struct myarray * a){
    for(int i=0;i< a->used_size;i++){
        scanf("%d",&(a->ptr)[i]);
    }
}
int main(){
    struct myarray marks;
    createarray(&marks,10,2);
    printf("Enter your elements: ");
    set(&marks);
    printf(" your elements: ");
    show(&marks);
    
    return 0;
}