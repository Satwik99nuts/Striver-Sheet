#include <bits/stdc++.h>
using namespace std;

void one_to_n(int i, int n) {
    if (i > n) {
        return;
    }

    cout << i << " ";
    one_to_n(i + 1,n);
}

int main() {
    int n;
    cout << "Write the value of n: ";
    cin >> n;

    one_to_n(1, n);
    return 0;
}
