#include<stdio.h>
void insert(int a[],int size,int capacity,int index,int element){
    if (size > capacity) printf("No space available..");
    else{
        for(int i=size;i>=index;i--){
            a[i+1]=a[i];
        }
        a[index]=element;
        size++;
        for(int j=0;j<size;j++){
            printf("%d ",a[j]);
        }
        
    }

}
int main(){
    int array[20]={1,22,32,23,45};
    int size=5,capa=20,ind=2,ele=100;
    insert(array,size,capa,ind,ele);

    return 0;
}