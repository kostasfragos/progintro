#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int count7 = 0;
    if (N / 10 == 7) count7++;
    if (N % 10 == 7) count7++;

    cout << count7 << endl;

    return 0;
}