#include <iostream>
using namespace std;

int main() {
    int M; cin >> M;
    int N; cin >> N;
    
    if (M > N) cout << M << endl;
    else if (N > M) cout << N << endl;
    else cout << M << endl;
    
    return 0;
}