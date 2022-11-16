#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_int("whats's x? ");
    int y = get_int("what's y? ");

    if (x < y)
    {
        printf(" x less is than y \n");

    }
    else if ( x > y)
    {
        printf(" x is greater than y \n");
    }
    else
    printf(" x is equal to y \n");
    
    
    return 0;

}