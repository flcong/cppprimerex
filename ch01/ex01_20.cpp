#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item salesItem;
    while (std::cin >> salesItem)
        std::cout << salesItem << std::endl;
    return 0;
}
