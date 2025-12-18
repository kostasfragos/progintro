#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int total_sum = 0;
    int current_sum = 0;
    int start = 0;

    for (int i = 0; i < N; i++) {
        int b_k; cin >> b_k;

        total_sum += b_k;
        current_sum += b_k;

        if (current_sum < 0) {
            start += 1;
            current_sum = 0;
        }
    }

    if (total_sum < 0 || start >= N) {
        cout << 0 << endl;
    }

    else cout << start + 1 << endl;
}
