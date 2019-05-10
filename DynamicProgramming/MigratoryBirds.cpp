#include <bits/stdc++.h>
#include <algorithm>
#include <map>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

bool cmp(const pair<int,int> &p1, const int v)
{
    if(p1.first<v)
        return true;
    else
        return false;
}

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    map<int, int> mp;
    vector<pair<int, int>> v;
    for(auto x: arr) {
        mp[x]++;
    }
    int maxm = 0;
    for(auto i=mp.begin(); i!=mp.end(); i++) {
        v.push_back(make_pair(i->second, i->first));
        if(maxm < i->second) maxm=i->second;
    }
    sort(v.begin(), v.end());

    return lower_bound(v.begin(),v.end(),maxm, cmp)->second;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
