#include <iostream>
using namespace std;
void selection(int arr[], int s)
{
    for (int i = 0; i < s - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < s; j++)
        {
            if (arr[j] < arr[min])
            {
                swap(arr[i], arr[min]);
                min = j;
            }
        }
    }
}
int main()
{
    int arr[] = {3, 5, 1, 7, 9, 0};
    selection(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}