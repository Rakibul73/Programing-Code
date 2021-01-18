#include <bits/stdc++.h> 
#include <vector>
using namespace std;
int main() {
    vector<int> a;


    for(int i = 0; i <10; i++) {
        a.push_back(i+1);
        cout<<a.back()<<endl;          //a.back() return kore "a" vector r sobar last value
    }
    cout<<"after push back"<<endl;
    for(int i = 0; i <a.size(); i++) {   //a.size() return kore "a" vector r size
        cout<<a[i]<<endl;
    }
    while(!a.empty()) {   //a.empty() sudu true false return kore
        a.pop_back();   //a.pop_back() kisu return kore na. sudu "a" vector r last value remove kore
    }
    cout<<"after pop back"<<endl;
    for(int i = 0; i <a.size(); i++) {
        cout<<a[i]<<"++++"<<endl;
    }
    cout<<"--------------------"<<endl;
    

    
    
    
    return 0;
}