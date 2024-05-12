#include<iostream>

int main() {
    int sum = 0, i;
    while (std::cin >> i) {
        sum += i;
    }
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}
