#include<studio.h>
int main()
{
int opt;
printf("enter the option");
scand("%d",&opt);
switch(opt)
{
case 1:printf("food item-pizza\n price-Rs 239\n");
       break;
case 2:printf("food item-burger\n price-Rs 129\n");
       break;
case 3:printf("food item-pasta\n price-Rs 179\n");
       break;
case 4:printf("food item-french fries\n price-Rs 99\n");
       break;
case 5:printf("food item-sandwich\n price:Rs 149\n");
       break;
default:printf("entered wrong choice");
}
return 0;
}
