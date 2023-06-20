#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to find all possible sums
vector<long long> subsetSum(vector<long long>& arr) {
    // Calculate the maximum possible sum based on the absolute value of the input numbers
    long long maxSum = 0;
    for (auto num : arr) {
        maxSum += abs(num);
    }

    // Initialize a vector of booleans to store the possible sums
    vector<bool> dp(maxSum + 1, false);
    dp[0] = true;

    // Iterate through the array and update the dp vector
    for (int i = 0; i < arr.size(); i++) {
        for (int j = maxSum - abs(arr[i]); j >= 0; j--) {
            if (dp[j]) {
                dp[j + abs(arr[i])] = true;
            }
        }
    }

    // Convert the dp vector to a vector of long long integers and return it
    vector<long long> result;
    for (long long i = 1; i < dp.size(); i++) {
        if (dp[i]) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<long long> arr = {3, -2, 4};

    vector<long long> result = subsetSum(arr);

    // Print the result
    for (auto sum : result) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
