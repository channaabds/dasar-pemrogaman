#include <stdio.h>
#include <conio.h>

int main (){
    
    int bil = 1;

    do 
    {
        if (bil >= 6)
        break;
        printf (" %d", bil);
    }
    while (bil++);
}