/*Rearrange the array in linear time and constant space.
 You are given an array of n elements, and the array can only contain
elements from 0 to n-1, you need to rearrange the array in such a way that
Given array :4 0 2 1 3
Modifed Array : 3 4 2 0 1
*/


#include<iostream>
#define max 32768
using namespace std;
void arrange(long long arr[], int n)
{
    for(int i=0;i<n;i++) arr[i]+=(arr[arr[i]]%n)*n;
    for(int i=0;i<n;i++)arr[i]=arr[i]/n;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
int main()
{
    long long arr[max];
    int i=0, size=1;
    while(1)
    {
        cin>>arr[i];
        if(cin.get()=='\n')
            break;
        i++;
        ++size;
    }
    arrange(arr,size);
}
