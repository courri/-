```c
//斐波那契数列的几个实现
#include "stdio.h"
int factorial_1(int n);
int factorial_2(int n);
int factorial_3(int n);
int fac_aux(int n, int acc);


int main(int argc, char const *argv[])
{
	a = factorial_1(5);
	b = factorial_2(5);
	c = factorial_3(5);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;
}

// Iterative 迭代
int factorial_1(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}
 // Recursive 递归
int factorial_2(int n) {
    return n == 0 ? 1 : n * factorial(n - 1);
}
// Tail Recursive
// Safe with some compilers (for example: GCC with -O2, LLVM's clang)
int fac_aux(int n, int acc) {
    return n < 1 ? acc : fac_aux(n - 1, acc * n);
}
 
int factorial_3(int n) {
    return fac_aux(n, 1);
}

```
