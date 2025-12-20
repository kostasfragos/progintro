#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int product = N * M;

    // if (product / 10000 == 0 && product / 1000 != 0)
    //     cout << "yes" << endl;

    if (product >= 1000 && product <= 9999) cout << "yes" << endl;
        
    else cout << "no" << endl;

    return 0;
}