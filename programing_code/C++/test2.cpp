// C++ Program to decide if an 
// array represents a permutation or not 

#include <bits/stdc++.h> 
using namespace std; 

// Function to check if an 
// array represents a permutation or not 
bool permutation(int arr[], int n) 
{ 
	// Set to check the count 
	// of non-repeating elements 
	set<int> hash; 

	int maxEle = 0; 

	for (int i = 0; i < n; i++) { 

		// Insert all elements in the set 
		hash.insert(arr[i]); 

		// Calculating the max element 
		maxEle = max(maxEle, arr[i]); 
	} 

	if (maxEle != n) 
		return false; 

	// Check if set size is equal to n 
	if (hash.size() == n) 
		return true; 

	return false; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 1, 2, 5, 3, 2 }; 
	int n = sizeof(arr) / sizeof(int); 

	if (permutation(arr, n)) 
		cout << "Yes" << endl; 
	else
		cout << "No" << endl; 

	return 0; 
} 
