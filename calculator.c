// calculator.c  
  
#include <stdio.h>  
  
// 声明函数  
int add(int a, int b);  
int subtract(int a, int b);  
int multiply(int a, int b);  
int divide(int a, int b);  
  
int main() {  
    // 定义两个整数变量  
    int num1 = 10;  
    int num2 = 5;  
  
    // 调用函数并打印结果  
    int sum = add(num1, num2);  
    printf("The sum of %d and %d is %d\n", num1, num2, sum);  
  
    int diff = subtract(num1, num2);  
    printf("The difference between %d and %d is %d\n", num1, num2, diff);  
  
    int product = multiply(num1, num2);  
    printf("The product of %d and %d is %d\n", num1, num2, product);  
  
    if (num2 != 0) { // 避免除以零的错误  
        int quotient = divide(num1, num2);  
        printf("The quotient of %d and %d is %d\n", num1, num2, quotient);  
    } else {  
        printf("Error: Division by zero is not allowed.\n");  
    }  
  
    return 0;  
}  
  
// 定义加法函数  
int add(int a, int b) {  
    // 返回两个数的和  
    return a + b;  
}  
  
// 定义减法函数  
int subtract(int a, int b) {  
    // 返回两个数的差  
    return a - b;  
}
  
// 定义乘法函数  
int multiply(int a, int b) {  
    return a * b;  
}  
  
// 定义除法函数  
int divide(int a, int b) {  
    if (b == 0) {  
        // 抛出错误或采取其他措施  
        printf("Error: Division by zero is not allowed.\n");  
        return 0; // 或者可以返回一个错误代码  
    }  
    return a / b;  
}
