#include <stdio.h>

int counter = 0;

void tick ()
{
    printf("#%d-",counter);
    counter++;
}

int binCoeff (int n, int k)
{
    int y1, y2;
    tick();
    printf("BC(%d,%d)\n",n,k);

    if ( k==0 || n==k) 
    {
        printf("Returning (%d,%d)\n",n,k);
        return 1;
    }
    else
    {
        printf("BC(%d,%d) calling BC(%d,%d)\n",n,k, n-1, k);
        y1=binCoeff(n-1, k);
        printf("BC(%d,%d) calling BC(%d,%d)\n",n,k, n-1, k-1);
        y2=binCoeff(n-1, k-1);

        printf("Returning (%d,%d)\n",n,k);
        printf("y1:%d - y2:%d\n",y1,y2);
        return y1 + y2;
    }
}

int main()
{
    binCoeff(4,2);
}

