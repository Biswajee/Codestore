#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> unsorted) {
    vector<pair<int, string>> v;
    vector<int> res;
    vector<string> stres;
    for(auto x: unsorted) {
        v.push_back(make_pair(x.length(), x));
    }
    sort(v.begin(), v.end());
    vector<pair<int, string>>::iterator it;
    for(it=v.begin(); it!=v.end(); it++) {
        try {
            res.push_back(stoi(it->second));
        } catch(...) {
            break;
        }
    }
    sort(res.begin(), res.end());
    for(;it!=v.end(); it++) {
        stres.push_back(it->second);
    }

    vector<string> result;
    for(auto x: res) {
        result.push_back(to_string(x));
    }
    for(auto x: stres) {
        result.push_back(x);
    }

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
