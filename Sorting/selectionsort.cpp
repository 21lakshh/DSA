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

    // Implementing Selection sort
    for(int i = 0;i<n-1;i++){
        int min = i;
        for(int j = i;j<n;j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        swap(arr[min],arr[i]);
    }
    // Output Array
    for (int i = 0; i < n; i++)
    {
        cout <<" "<< arr[i];
    }
    return 0;
}