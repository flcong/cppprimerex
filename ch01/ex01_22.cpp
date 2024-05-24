#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item eachItem, sumItem;
    std::cin >> sumItem;
    while (std::cin >> eachItem) {
        sumItem += eachItem;
    }
    std::cout << sumItem << std::endl;
    return 0;
}
