#include<stdio.h>
int partition(int A[],int p,int r)
{
int x,i,j,t,s;
x=A[r];
i=p-1;
for(j=p;j<r;j++)
{
if(A[j]<=x)
{
i=i+1;
t=A[i];
A[i]=A[j];
A[j]=t;
}
}
s=A[i+1];
A[i+1]=A[r];
A[r]=s;
return i+1;
}
void Quicksort(int A[],int p,int r)
{
int q;
if(p<r)
{
q=partition(A,p,r);
Quicksort(A,p,q-1);
Quicksort(A,q+1,r);
}
}
void main()
{
    int A[30],i,n;
    printf("Enter Size:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;i++)
      scanf("%d",&A[i]);
    printf("\n Before Sort :");
    for(i=0;i<n;i++)
       printf("\n %d",A[i]);
    Quicksort(A,0,n-1);
    printf("\nAfter sort");
    for(i=0;i<n;i++)
      printf("\n %d",A[i]);
}
