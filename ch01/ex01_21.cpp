#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2, itemSum;
    std::cin >> item1 >> item2;
    itemSum = item1 + item2;
    std::cout << itemSum << std::endl;
    return 0;
}
