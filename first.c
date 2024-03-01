#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("enter 1 for addition...2 for subtraction...3 for multiplication..4 for division...5 for power operation :\n");
    scanf("%d",&a);
   switch (a)
   {
   case 1 :
   printf("enter 1st number:\n");
   scanf("%d",&b);
   printf("enter 2nd number:\n");
   scanf("%d",&c);
   d=b+c;
   printf("%d\n",d);
   break;

    
}
return 0;
}