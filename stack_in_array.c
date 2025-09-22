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
int main()
{
    // struct stake s;
    // s.size=80;
    // s.top=-1;
    // s.array=(int *)malloc(s.size * sizeof(int));
    struct stake *s;
    s->size = 80;
    s->top = -1;
    s->array = (int *)malloc(s->size * sizeof(int));
    // push element manuaaly
    //  s->array[0]=8;
    //  s->top++;

    if (isempty(s))
    {
        printf("Stake is empty.");
    }
    else
    {
        printf("Stake is not empty.");
    }

    return 0;
}