#include<stdio.h>

// 3. Write a C program to find out the sum of all odd digits of a positive integer.
  
  int main(){ 
    int a,n,sum=0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    while(n!=0){
        a=n%10;
        if(a%2!=0)
            sum+=a;
        n=n/10;
    }
    printf("The sum of odd digits: %d",sum);
    return 0;
}
