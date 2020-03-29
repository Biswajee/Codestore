#include <iostream>
#include <vector>
using namespace std;

// int a() {
//     cout << "a";
//     return 0;
// }
// int b() {
//     cout << "b";
//     return 0;
// }
// int main() {
//     // if(a() & b())
//     // // cout << "run";
//     char *str = "hello";
//     printf("%d", sizeof(str));
//     return 0;
// }



int main() {
    vector <int> v(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    cout << v.size() << endl;
}