#include "swap.h"
#include <stdio.h>

void print(int v[], int len)
{
    int i;
    for(i = 0; i < len; ++i) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main()
{
    { int *v = NULL, len=0; print(v,len); swap(v,len); print(v,len); }
    { int v[] = {1}, len=sizeof(v)/sizeof(v[0]); print(v,len); swap(v,len); print(v,len); }
    { int v[] = {1,2}, len=sizeof(v)/sizeof(v[0]); print(v,len); swap(v,len); print(v,len); }
    { int v[] = {1,2,3}, len=sizeof(v)/sizeof(v[0]); print(v,len); swap(v,len); print(v,len); }
    { int v[] = {1,2,3,4}, len=sizeof(v)/sizeof(v[0]); print(v,len); swap(v,len); print(v,len); }
    { int v[] = {1,2,3,4,5}, len=sizeof(v)/sizeof(v[0]); print(v,len); swap(v,len); print(v,len); }
    
    return 0;
}