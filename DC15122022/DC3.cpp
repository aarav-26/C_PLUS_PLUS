/*Given an array of elements fnd the equilibrium point. The equilibrium point
is the point where the sum of the numbers before that index, is equal to the
sum of the element after the index.
Array : 1,5, 2 ,3,3
Equilibrium point =3( If you look at index 2 ) à The sum of the elements
before the index, (1+5=6) , is equal to the sum of elements after the index.
( 3+3)
The index is 2, (0 based) so return 2+1=3, because answer is 1’based
indexing.
If there is no equilibrium index, then return -1

*/
#include<iostream>
using namespace std;
#define max 32768
int equilibriumPoint(long long a[], int n)
{
    long long left_sum,right_sum;
    for(int i=0;i<n;i++)
    {
        left_sum=0;
        right_sum=0;
        for(int left_idx=i-1;left_idx>=0;left_idx--) left_sum+=a[left_idx];
        for(int right_idx=i+1;right_idx<n;right_idx++) right_sum+=a[right_idx];
        if(left_sum==right_sum) return i+1;
    }
    return -1;
}
int main()
{
    long long arr[max];
    int i=0,size=1;
    while(1)
    {
        cin>>arr[i];
        if(cin.get()=='\n')
            break;
        i++;
        ++size;
    }
    cout<<equilibriumPoint(arr,size);
}
