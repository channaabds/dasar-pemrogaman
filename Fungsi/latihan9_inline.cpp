/* -------------------------- */
/* Penggunaan inline function */
/* -------------------------- */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int max_skill = M;

    for (int permutation = 0; permutation < (1 << N); permutation++) {
        int current_skill = M;
        for (int i = 0; i < N; i++) {
            if (permutation & (1 << i)) {
                if (A[i] <= current_skill) {
                    current_skill += B[i];
                } else {
                    break;
                }
            }
        }
        if (current_skill > max_skill) {
            max_skill = current_skill;
        }
    }

    cout << max_skill << endl;

    return 0;
}
