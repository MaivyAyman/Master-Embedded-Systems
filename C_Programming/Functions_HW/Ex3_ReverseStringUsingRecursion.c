/*
 *    Created on: Nov 1, 2024
 *      Author: Maivy Ayman
 */

#include <stdio.h>

int main()
{
    printf("Enter a sentence: ");
    GetReverse();
    return 0;
}

void GetReverse()
{
    char c;
    scanf("%c", &c);
    if (c != '\n') 
    {
        GetReverse();
        printf("%c", c);
    }
}  