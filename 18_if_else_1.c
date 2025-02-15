/* write a program to accept two product weight price from user. findout which is cheaper product to buy using price per gram technique
    steps
    ---------------------
    accept weight and price for 1st product
    accept weight and price for 2nd product
    findout price per gram for 1st product
    findout price per gram for 2nd product
    compare ppg of both product
        if 1st product ppg is less then 2nd product ppg 1st product is cheaper otherwise 2nd product is cheaper
*/
#include<stdio.h>
void main()
{
     int price1,price2;
     float weight1,weight2,ppg1,ppg2;
     
     printf("Enter 1st product price");
     scanf("%d",&price1);

     printf("Enter 1st product weight");
     scanf("%f",&weight1);

     printf("Enter 2nd product price");
     scanf("%d",&price2);

     printf("Enter 2nd product weight");
     scanf("%f",&weight2);

     //findout ppg 
     ppg1 = price1/weight1;
     ppg2 = price2/weight2;

     if(ppg1<ppg2) // == != < > <= >= 
     {
        printf("Product 1 is cheaper and its price per gram is %.2f",ppg1);
     }    
     else 
     {
        printf("Product 2 is cheaper and its price per gram is %.2f",ppg2);
     }
     printf("\n good bye..");
}