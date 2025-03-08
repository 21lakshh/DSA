#include <iostream>
using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int *a1 = new int[n1];
    int *a2 = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        a1[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        a2[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
        {
            arr[k] = a1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = a2[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = a2[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[], int n, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        MergeSort(arr, n, l, mid);
        MergeSort(arr, n, mid + 1, r);

        Merge(arr, l, mid, r);
    }
}
int main()
{

    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    MergeSort(arr, n, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}
