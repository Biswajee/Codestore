// #include <bits/stdc++.h>
// using namespace std;
// class Matrix {
//     public:
//     int size;
//     Matrix(void) {}
    
//     Matrix(int n) {
//         size = n;
//     }

//     void rotate(int n, int matrix[1000][1000]) {
//     for(int layer=0; layer<n/2; layer++) {
//         int first = layer;
//         int last = n-layer-1;
//         for(int i=first; i<last; i++) {
//             int offset = i-first;

//             int top = matrix[first][i];
//             matrix[first][i] = matrix[last-offset][first];
//             matrix[last-offset][first] = matrix[last][last-offset];
//             matrix[last][last-offset] = matrix[i][last];
//             matrix[i][last] = top;    
//         }
//     }

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++)
//         cout << matrix[i][j] << " ";
//         cout << endl;
//     }
// }

// };

#include <bits/stdc++.h>
using namespace std;

void Swap(int &i, int &j) {
    int temp = i;
    i = j;
    j = temp;
}

int main() {
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        int m[n][n];
        memset(m, 0, n);
        int count=0;
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                cin >> m[i][j];
                // m[i][j] = count;
                // count++;
            }
        }

        // Printing original matrix...
        // for(int i=0; i<n; i++) {
        //     for(int j=0; j<n; j++) {
        //         cout << m[i][j] << " ";
        //     }
        //     cout << endl;
        // }


        int last = n-1;
        int level = 0;
        int totNumOfLevels = n/2;

        while(level < totNumOfLevels) {
            for(int i=level; i<last; i++) {
                Swap(m[level][i], m[i][last]);
                Swap(m[level][i], m[last][last - i + level]);
                Swap(m[level][i], m[last - i + level][level]);
            }
            ++level;
            --last;
        }
        // cout << endl << endl;
        // Printing rotated matrix...
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout << m[i][j] << " ";
            }
            // cout << endl;
        }
        cout << endl;
    }
    return 0;
}