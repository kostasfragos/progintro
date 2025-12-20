#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    int current_gcd = a[0];
    int answer = a[0];

    for (int i = 1; i < N; i++) {
        if (current_gcd % a[i] == 0) {
            if (a[i] < answer) answer = a[i];
        }
        current_gcd = __gcd(current_gcd, a[i]);
    }
        
    cout << answer << endl;

    return 0;
}