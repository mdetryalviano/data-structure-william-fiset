#include <iostream>
using namespace std;

// constant time: o(1)
int constant() {
    int i = 0;

    while (i < 11) {
        i++;
    }

    return i;
}

// linear time: o(n)
int linear(int n) {
    int i = 0;

    while (i < n) {
        i += 3;
    }

    return i;
}

int main() {
}