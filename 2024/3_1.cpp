#include <iostream>
#include <vector>

int main(void) {
    int n, m = 0;
    std::vector<int> odd;

    std::cin >> n;

    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0)
            odd.push_back(digit);
        n /= 10;
    }
    
    int factor = 1;
    for (const auto &i : odd) {
        m += i * factor;
        factor *= 10;
    }

    std::cout << m << '\n';

    return 0;
}
