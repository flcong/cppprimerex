#include <iostream>

int main() {
    int istart, iend;
    std::cin >> istart >> iend;
    if (istart < iend) {
        while (istart <= iend) {
            std::cout << istart << " ";
            ++istart;
        }
        std::cout << std::endl;
    }
    return 0;
}
