#include<iostream>
#include <climits>
using namespace std;

float max(float a, float b) {
    return (a >= b) ? a : b;
}

float min(float a, float b) {
    return (a < b) ? a : b;
}

int main() {
    int arr[] = {5, 3, 10, 6};
    int n = 3;

    // Print the first n elements of the array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // k range [4, 6]
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;

    for(int i = 0; i < n - 1; i++) {  // Note: n-1 to avoid out-of-bounds access
        if(arr[i] >= arr[i + 1]) { // Updating kmin
            kmin = max(kmin, (arr[i] + arr[i + 1]) / 2.0);
        } else { // Updating kmax
            kmax = min(kmax, (arr[i] + arr[i + 1]) / 2.0);
        }

        if(kmin > kmax) {
            flag = false;
            break;
        }
    }

    if(flag == false) {
        cout << -1;
    } else {
        cout << "Range of k is: [" << kmin << "," << kmax << "]";
    }

    return 0;
}
