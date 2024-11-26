
// fib_recursive
// 1    2   3   4   5   6   7   8    9    10   11    12    13      14      15      16     17
// 0	1	1	2	3	5	8	13 	 21	  34   55	 89	   144	   233	   377	   610	  987	

int fib_recursive(int n){
    if (n == 1 || n == 2){
        return n-1;}
    else{return fib_recursive (n-1) + fib_recursive (n-2);}
}

// fib_iterative
// 1    2   3   4   5   6   7   8    9    10   11    12    13      14      15      16     17
// 0	1	1	2	3	5	8	13 	 21	  34   55	 89	   144	   233	   377	   610	  987	

int fib_iterative(int n){
    int v1 = 0;
    int v2 = 1;
    int r = 0;
    if (n == 1 || n == 2){
        return n-1;}
    else{
        for (int i = 2; i < n; i++){
            r = (v1+v2);
            v1 = v2;
            v2 = r;            
        }
        return r;
    }
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter the nth Fibonacci number: ");
    scanf("%d", &n);

    int a = fib_recursive(n);
    int b = fib_iterative(n);

    printf("Recursive (%d-th Fibonacci): %d\n", n, a);
    printf("Iterative (%d-th Fibonacci): %d\n", n, b);
    return 0;
}