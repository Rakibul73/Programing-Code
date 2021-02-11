
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/02/11 13:02:11



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
void isPalindrome(string str) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = str.size() - 1; 

    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            cout<<str<<" is Not Palindrome"<<"\n";
            return; 
        } 
    } 
    cout<<str<<" is Palindrome"<<"\n";
}
/* function to check whether 
 characters of a string can form a palindrome */
bool canFormPalindrome(string str)
{
    // Create a count array and initialize all
    // values as 0

    map<char, int> count;

    // For each character in input strings,
    // increment count in the corresponding
    // count array
    for (int i = 0; str[i]; i++)
        count[str[i]]++;

    // Count odd occurring characters
    int odd = 0;
    for(auto &x: count) {
        if (x.second & 1) {
            odd++;
        }

        if (odd > 1){
            x.second--;
            return false;
        }
        
    }
    for (int i = 0; i < count.size(); i++) {
        if (count[i] & 1)
            odd++;

        if (odd > 1){

            
            return false;
        }
    }

    // Return true if odd count is 0 or 1,
    return true;
}
int main() {
    // Below function is A fast IO program
    fast_cin();
    string s;
    cin>>s;
    isPalindrome(s);
    canFormPalindrome(s);
    // s.erase(s.begin() + 4); // delete index 4 pos character
    return 0;
}