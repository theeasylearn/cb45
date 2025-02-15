/* write a program to findout whether given letter is vowel or consonant 
    vowel = a e i o u
    remaining letter are consonant 

    step 
    accept single letter from user 
    compare letter with a & e & i & o & u. if any one of the condition is true it is vowel otherwise consonant 
*/
#include<stdio.h>
void main()
{
     char letter;
     int ascii;
     printf("Enter one letter");
     scanf("%c",&letter);
     if(letter=='a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter=='A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') // == != < > <= >=   
     {
        printf("it is vowel");
     }
     else 
     {
        printf("it is consonant");
        ascii = letter; //
        printf("\n ascii = %d",ascii);
     }
     printf("\n good bye..");
}