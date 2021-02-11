
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/11 13:40:40



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

/* function to check whether 
characters of a string can form a palindrome ,if not removes one odd character*/
void canyou(string str)
{

    map<char, int> count;

    for (int i = 0; str[i]; i++)
        count[str[i]]++;

    int win = 1, bairo = 0;
    while(bairo == 0) {
        int odd = 0;
        for(auto &x: count) {
            if (x.second & 1) {
                odd++;
            }

            if (odd > 1){
                x.second--;
                win++;
                
                break;
            }
        }
        if(odd > 1) {
            continue;
        }
        bairo = 1;
    }

    if (win % 2 == 0)
    {
        cout<<"Second"<<"\n";
    }
    else {
        cout<<"First"<<"\n";
    }
    
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    string s;
    cin>>s;
    int win = 1;

    canyou(s);
    return 0;
}