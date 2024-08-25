#include<iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> a(n);
    cout << "Enter the elements:" << endl;
    
    for(int i = 0; i < n; i++) {
        cout << "Enter a number: ";
        cin >> a[i];
    }

    bool found = false;
    
    for(int i = 0; i < n; i++) {
        int j;
        for(j = 0; j < n; j++) {
            if(i != j && a[i] == a[j]) {
                break;
            }
        }
        if(j == n) {
            cout << "The first non-repeating element is: " << a[i] << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "There is no non-repeating element in the array." << endl;
    }

    return 0;
}
