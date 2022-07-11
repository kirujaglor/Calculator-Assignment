/*Project:  Simple calculator that takes two numbers and outputs the sum, difference, product and quotient of the numbers.
Author:     Kendi Kiruja
License:    MIT
Date:       9th July 2022
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
  //variable declaration
    float num1, num2, sum, difference, product, quotient;
    printf("Calculator!\n");
    //input
    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);
    //computation
    //arithmetic operators + - * /
    sum= num1 + num2;
    difference= num1 - num2;
    product= num1 * num2;
    quotient= num1 / num2;
    //output
    //500 + 100 =600
    printf("%f + %f= %f\n",num1, num2, sum);
    printf("%f - %f= %f\n",num1, num2, difference);
    printf("%f * %f= %f\n",num1, num2, product);
    printf("%f / %f= %f\n",num1, num2, quotient);
    return 0;
}
