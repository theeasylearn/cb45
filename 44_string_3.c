// write a program to count words & letter(anything) in string
/*
    address = Hill Drive, bhavnagar
    output : 3 words
    steps
    1) create variable word,letter
    2) compare first letter of line with space if it is space
        then increase word by 1
    3)   otherwise
        increase letter by 1
    4) repeat step 2 and 3 until you reach at \0
*/

#include <stdio.h>
#include <conio.h>
void main()
{
    // create array of character (String)
    char line[] = "abc def";
    int word = 0, letter = 0,position=0;
    
    while(line[position] != '\0')
    {
        if (line[position] == ' ')
            word++;
        else
            letter++;
        position++;
    }
    printf("words = %d",word+1);
    if(word>1)
        printf("\nletter = %d",letter+word+1);
    else 
        printf("\nletter = %d",letter+word);

}