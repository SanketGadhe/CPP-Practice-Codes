#include <iostream>
using namespace std;
int partition(int arr[], int l, int h)
{

    int pivot = arr[l];
    int count = 0;
    for (int i = l + 1; i <= h; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    int pivotindex = count + 1;
    swap(arr[l], arr[pivotindex]);
    int i = l, j = h;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotindex;
}
void quick_sort(int arr[], int l, int h)
{
    if (l >= h)
        return;

    int p = partition(arr, l, h);
    cout << p << endl;
    quick_sort(arr, l, p - 1);
    quick_sort(arr, p + 1, h);
}
int main()
{
    int arr[] = {3, 5, 4, 2, 1};
    int n = 5;
    quick_sort(arr, 0, n - 1);
    cout << "hi";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}