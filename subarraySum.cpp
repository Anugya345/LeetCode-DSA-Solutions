#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxSum=INT_MIN;
    int currSum=0;
    for (int i = 0; i < n; i++) {
        currSum +=arr[i];
        maxSum=max( currSum , maxSum );
        if(currSum<0){
            currSum=0;
        }
        }
        cout << "Maximum Subarray Sum is: " << maxSum;

    return 0;
}
