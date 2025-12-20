#include <iostream>
using namespace std;

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int a[n];
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    
    int pairs = 0;
    bool seen[1000001] = {false};
    for (int i = 0; i < n; i++) {
        int complement = x - a[i];
        if (complement >= 1 && complement <= 1000000 && seen[complement]) pairs++;
        seen[a[i]] = true;
    }

    printf("%d\n", pairs);

    return 0;
}