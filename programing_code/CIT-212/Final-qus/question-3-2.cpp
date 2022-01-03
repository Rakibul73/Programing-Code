#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    if(s == ""){
        return true;
    }
	int length = s.size();

	stack<char> st;

	int i, mid = length / 2;

	for (i = 0; i < mid; i++) {
		st.push(s[i]);
	}

	if (length % 2 != 0) {
		i++;
	}

	char ch;

	while (s[i] != '\0')
	{
		ch = st.top();
		st.pop();
        if (ch != s[i]) {
            return false;
        }
		i++;
	}
    return true;
}

int main()
{
    string s;
    cout << "enter a string to check is it plaindrome = ";
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "Yes , it is Palindrome";
	}
	else {
		cout << "No, it is not Palindrome";
	}

	return 0;
}