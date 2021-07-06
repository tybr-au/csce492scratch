#include <stdio.h>
#include <stdlib.h>

void rotateLeft(int * array, int count)
{
    int temp;

    printf("Swapping %d @%d and %d @ %d\n",array[0],0,array[count-1],count);

    char pause;
    pause = getchar();

    temp = array[0];
    array[0]=array[count-1];
    array[count-1]=temp;

    if (count!=2)   rotateLeft(array,count-1);

}


int main()
{
    int count=5;
    int array[]={5,6,7,8,9};
    rotateLeft(array,count);
    
    for(int i=0; i<count; i++)
    {
        printf(" %d ",array[i]);
    }
    printf("\n");

    return  0;
}