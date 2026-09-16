#include <stdio.h>

int main() {
    
    // input: fahrenheit
    //declare variables
    float fahrenheit;
    float celsius;

    //input: fahrenheit
    printf("Write the fahrenheit value: "); //display: ask the user for an input
    scanf("%f", &fahrenheit);
    printf("fahrenheit %.2f\n",fahrenheit);
    
    //process: celsius= (fahrenheight - 31) *5 /9
    celsius = (fahrenheit - 32) * 5/9;
    
    //output: fahrenheit
    printf("celsius =%.2f",celsius);

    return 0;
}