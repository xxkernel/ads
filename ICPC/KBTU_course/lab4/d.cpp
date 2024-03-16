#include <iostream>

#define MAX 1000001

int Fenwick[MAX];

int Summa0_i(int i) {
    int result = 0;
    for (; i >= 0; i = (i & (i + 1)) - 1)
        result += Fenwick[i];
    return result;
}

void IncElement(int i, int delta) {
    for (; i < MAX; i |= i + 1)
        Fenwick[i] += delta;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    for (int j = 0; j < m; ++j) {
        char command;
        std::cin >> command;
        if (command == 'A') {
            int l, r, d;
            std::cin >> l >> r >> d;
            IncElement(l, d);
            IncElement(r + 1, -d);
        } else {
            int i;
            std::cin >> i;
            std::cout << Summa0_i(i) << std::endl;
        }
    }

    return 0;
}

