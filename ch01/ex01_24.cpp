#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item currItem, prevItem;
    int cnt = 1;
    if (std::cin >> prevItem) {
        while (std::cin >> currItem) {
            if (currItem.isbn() == prevItem.isbn()) {
                ++cnt;
            }
            else {
                std::cout << cnt << " transactions for ISBN: " << prevItem.isbn() << std::endl;
                prevItem = currItem;
                cnt = 1;
            }
        }
        std::cout << cnt << " transactions for ISBN: " << prevItem.isbn() << std::endl;
    }
    return 0;
}
