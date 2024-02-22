#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char* argv[])
{
    float valueOne;
    float valueTwo;
    char operators;
    float answer;

    printf("Enter calculation:\n\n");
    scanf("%f %c %f", &valueOne, &operators, &valueTwo);
    switch (operators)
    {
    case '/': answer = valueOne / valueTwo;
        break;
    case '*': answer = valueOne * valueTwo;
        break;
    case '+': answer = valueOne + valueTwo;
        break;
    case '-': answer = valueOne - valueTwo;
        break;
    case '^': answer = pow(valueOne, valueTwo);
        break;
    case ' ': answer = sqrt(valueTwo);
        break;
    default: goto fail;
    }
    printf("%.9g%c%.9g =  %.6g\n\n", valueOne, operators, valueTwo, answer);
    goto exit;
fail:
    printf("Fail.\n");
exit:
    return 0;
}