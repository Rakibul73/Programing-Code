
/***
    Bismillahir Rahmanir Rahim
    Read in the name of Allah, who created you.
    Author : Md. Rakibul Islam,
    Faculty of CSE, Patuakhali Science & Technology University, Bangladesh.
***/

// last modified: 2021/03/06 13:49:05



#include <bits/stdc++.h> 
using namespace std;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int* GetBigInteger_by_string_input_to_int_array(string str) 
{ 
    int x = str.size(), a = 0; 
    int* arr = new int[str.size()]; 
    while (a != x) { 
        arr[a] = str[a] - '0'; 
        a++; 
    }
    return arr;
    // Function Call 
    // int* arr = GetBigInteger_by_string_input_to_int_array(str); 
}

int main() {
    // Below function is A fast IO program
    fast_cin();
    int T;
    cin>>T;
    while (T)
    {
        string N;
        cin>>N;
        int* arr = GetBigInteger_by_string_input_to_int_array(N);
        int count = 0;
        bool agezero = true;
        for (long long i = 0; i < N.size(); i++)
        {
            if(arr[i] == 0) {
                agezero = true;
                continue;
            }
            if(agezero) {
                agezero = false;
                count = count + 1;
            }
            
        }
        cout<<count<<"\n";

        T--;
    }
    
    
    
    return 0;
}