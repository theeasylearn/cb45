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
        ascii = letter; //when we store char type variable's value into integer variable, ascii code of char variable will be stored into integer variable
        //A = 65 Z = 90
        //a = 97 z = 122
        //printf("\n ascii = %d",ascii);
        if((ascii>=65 && ascii<=90) ||  (ascii>=97 && ascii<=122))
        {
            printf("it is consonant");
        }
        else 
        {
            printf("it is nether vowel nor consonant");
        }
     }
     printf("\n good bye..");
}