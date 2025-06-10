/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//file:sum.c

#include<stdio.h>

int sum(int a, int b) {
    return a + b; //somma due interi
}

int main(){
    int x = 10, y = 20;
    int s = sum(x,y);
    printf("La somma di %d e %d è %d\n",x,y,s);
    return 0;
}