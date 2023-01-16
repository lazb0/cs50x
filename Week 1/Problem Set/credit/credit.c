#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
    long number = get_long("Number: ");
    while(!number || number < 0){
        number = get_long("Number: ");
    }

    int length = 0;
    //cc as Company Code
    long cc = number;
    while(cc >= 100){
        cc /= 10;

        length++;
    }

    length += 2;

    //Check if length is valid
    if(!((cc == 34 || cc == 37) && length == 15) && !((cc >= 51 &&cc <= 55) && length==16)){
        cc/=10;
        if(!(cc == 4 && (length == 13 || length == 16))){
            printf("INVALID\n");
            return 0;
        }
    }

    //Checksum

    //All seconds digits multiplied by two
    int sum1 = 0;
    //All other digits
    int sum2 = 0;

    int x;
    long digit;

    for(int i = 0; i < length; i++){
        //Gets one number
        digit = number/(pow(10, i));

        while(digit >= 10){
            digit = digit%10;
        }

        //Checks if it is on odd position or not if yes just adds it to sum2
        if(i%2 == 0){
            sum2 += digit;
            continue;
        }

        //If its not multiply it by two. Then if it has more than one digit split it to two and add it
        x = digit*2;

        if(x >= 10){
            sum1 += x%10 + x/10;
            continue;
        }

        sum1 += x;
    }

    //Adds two sums
    int sum = sum1 + sum2;

    if(!(sum%10 == 0)){
        printf("INVALID\n");
        return 0;
    }

    switch(cc){
        case 34:
        case 37:
            printf("AMEX\n");
            break;
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
            printf("MASTERCARD\n");
            break;
        case 4:
            printf("VISA\n");
            break;
        default:
            printf("INVALID\n");
    }
}