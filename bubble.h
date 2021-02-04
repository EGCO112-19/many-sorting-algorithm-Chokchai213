//
//  bubble.h
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2564 BE.
//

#ifndef bubble_h
#define bubble_h
#include "swap.h"
void display(int value[], int N)
{
    int i;
    for(i=0;i<N-1;i++)
    {
        printf("%5d",value[i]);
    }
    printf("\n");
}


void bubble(int a[], int N){
    int i,r=0;
    int j;
    int sorted;
  for(i=N-2;i>0;i--)
  {
    sorted=0;
    for(j=0;j<i;j++)
    {
        if(a[j]>a[j+1]) 
        {
            swap(&a[j],&a[j+1]);
            sorted=1;
        }
        
        display(a,N);
       
        
    }
    r++;
    printf("\t===end of round %d===\n",r);
    if (sorted==0) break;
  }
    
}


#endif /* bubble_h */
