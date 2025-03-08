#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of your array:\n";
    cin >> n;
    cout << "Enter the elements of your array:\n";
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Implementing Insertion sort
    for(int i = 1;i<n;i++){ // start from second element 
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current; // shift elements to right 
    }
    // Output Array
    for (int i = 0; i < n; i++)
    {
        cout <<" "<< arr[i];
    }
    return 0;
}