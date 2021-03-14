// C++ implementation to sort the matrix row-wise 
// and column-wise 
#include <bits/stdc++.h> 

using namespace std; 

#define MAX_SIZE 10 

// function to sort each row of the matrix 
void sortByRow(int mat[MAX_SIZE][MAX_SIZE], int n) 
{ 
	for (int i = 0; i < n; i++) 

		// sorting row number 'i' 
		sort(mat[i], mat[i] + n); 
} 

// function to find transpose of the matrix 
void transpose(int mat[MAX_SIZE][MAX_SIZE], int n) 
{ 
	for (int i = 0; i < n; i++) 
		for (int j = i + 1; j < n; j++) 

			// swapping element at index (i, j) 
			// by element at index (j, i) 
			swap(mat[i][j], mat[j][i]); 
} 

// function to sort the matrix row-wise 
// and column-wise 
void sortMatRowAndColWise(int mat[MAX_SIZE][MAX_SIZE], 
											int n) 
{ 
	// sort rows of mat[][] 
	sortByRow(mat, n); 

	// get transpose of mat[][] 
	transpose(mat, n); 

	// again sort rows of mat[][] 
	sortByRow(mat, n); 

	// again get transpose of mat[][] 
	transpose(mat, n); 
} 

// function to print the matrix 
void printMat(int mat[MAX_SIZE][MAX_SIZE], int n) 
{ 
	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < n; j++) 
			cout << mat[i][j] << " "; 
		cout << endl; 
	} 
} 

// Driver program to test above 
int main() 
{ 
	int mat[MAX_SIZE][MAX_SIZE] = { { 4, 1, 3 }, 
							{ 9, 6, 8 }, 
							{ 5, 2, 7 } }; 
	int n = 3; 

	cout << "Original Matrix:\n"; 
	printMat(mat, n); 

	sortMatRowAndColWise(mat, n); 

	cout << "\nMatrix After Sorting:\n"; 
	printMat(mat, n); 

	return 0; 
} 
