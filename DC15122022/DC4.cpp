/*Do the min_max arrangement in constant space. Rearrange the input array
itself without using any extra space.
Array : [1, 2, 3, 4, 5, 6] Array is already sorted.
Answer :[6, 1, 5, 2, 4, 3]
*/


#include<iostream>
#define max 32768
using namespace std;
void rearrange(int *arr, int n)
{
    int size=n;
    int max_floor=arr[size-1]+1;
    int max_idx=size-1;
    int min_idx=0;
    for(int i=0;i<size;)
    {
        arr[i]=arr[i]+(arr[max_idx]%max_floor)*max_floor;
        max_idx--;
        i++;
        if(i>=n) break;
        arr[i]=arr[i]+(arr[min_idx]%max_floor)*max_floor;
        min_idx++;
        i++;
    }
    for(int i=0;i<size;i++)
    {
        arr[i]=arr[i]/max_floor;
    }
    for(int i=0;i<size;i++)
    {
        cout<<*arr<<" ";
        *arr++;
    }
}
int main()
{
    int arr[max],i=0,size=1;
    while(1)
    {
        cin>>arr[i];
        if(cin.get()=='\n')
            break;
        i++;
        ++size;
    }
    rearrange(arr,size);
}
