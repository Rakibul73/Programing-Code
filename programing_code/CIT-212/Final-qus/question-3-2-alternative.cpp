#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(stack <char > st, string str){
    int i = 0;
    if(str == ""){
        return true;
    }
    else{
    while(!st.empty()){

      if(str[i] == st.top()){
          i++;
          st.pop();
      }
      else{
        return false;
      }
     }
    }
    if(i == str.size()){
        return true;
    }
    else{
         return false;
    }
}

int main(){
   

   string str;
   getline(cin, str);

   stack < char > st;

   for(int i = 0 ; i < str.size(); i++){
       st.push(str[i]);
   }

   bool isValid = is_palindrome(st, str);

   if(isValid){
       cout << "String is Palindrome" << endl;
   }
   else{
       cout << "String is not Palindrome" << endl;
   }

    return 0;
}