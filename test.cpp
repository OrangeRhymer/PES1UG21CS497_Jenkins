#include <iostream>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    num = 5;

    if (num < 0)
        std::cout << "Factorial of negative number is undefined.";
    else
        std::cout << "Factorial of " << num << " is " << factorial(num);

    return 0;
}
