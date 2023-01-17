#include <iostream>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int v)
    {
        size = size + 1;
        int index = size;
        arr[index] = v;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else 
            return;
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void deleteheap(){
         
         swap(arr[1],arr[size]);
         size--;
         int i = 1;
         while(i<size){
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(leftindex<size&&arr[leftindex]>arr[i]){
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if (rightindex < size && arr[rightindex] > arr[i])
            {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            }
            else 
            return;
         }
    }
    void heapify(int arr[],int n,int i){
        int largest=i;
        int l=2*i;
        int r=2*i+1;
        if(l<n&&arr[largest]<arr[l]){
            largest=l;
        }
        if(r<n&&arr[largest]<arr[r]){
            largest=r;
        }
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
 
        
    }
};
int main()
{
    heap h;
    h.insert(20);
    h.insert(25);
    h.insert(19);
    h.insert(30);
    h.insert(22);
    h.print();
    h.deleteheap();
    h.print();
    int arr[6]={-1,23,54,32,9,34};
    int n=6;
    for(int i=n/2;i>0;i--){
        h.heapify(arr,n,i);
    }
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}