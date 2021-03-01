#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> possibleChanges(vector<string> usernames) {
    string u;
    for (int i = 0; i < usernames.size(); i++) {
        u = usernames[i];
        sort(u.begin(), u.end());
        if(u == usernames[i]){
            cout<<"NO"<<"\n";
        }
        else {
            cout<<"YES"<<"\n";
        }
    }
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string usernames_count_temp;
    getline(cin, usernames_count_temp);

    int usernames_count = stoi(ltrim(rtrim(usernames_count_temp)));

    vector<string> usernames(usernames_count);

    for (int i = 0; i < usernames_count; i++) {
        string usernames_item;
        getline(cin, usernames_item);

        usernames[i] = usernames_item;
    }

    vector<string> result = possibleChanges(usernames);

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
