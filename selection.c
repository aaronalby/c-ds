#include<stdio.h>
void main()
{
 int a[10],i,j,min,n,temp,t=0;
 t=t+2;
printf("enter the number of elements ");t++;
scanf("%d",&n);t++;

for(i=0;i<n;i++)
{t++;
printf("elements of array ");t++;
scanf("%d",&a[i]);t++;
}t++;
for(i=0;i<n-1;i++)
{t++;
min=i;
for(j=i+1;j<n;j++)
{t++;
t++;if(a[j]<a[min])
{
min=j;
}
}
t++;if(i!=min)
{
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}
printf("sorted array is ");t++;
for(i=0;i<n;i++)
{t++;
printf("%d\t",a[i]);t++;

}t++;
printf("\nSpace complexity is %d ",(5*4)+(n*4));t++;
  printf("\ntime complexity is %d",t);t+1;
}
