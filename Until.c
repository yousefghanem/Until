//MADE by YOUSef
#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int i = get_int("Integer: ");
    if(i%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}

