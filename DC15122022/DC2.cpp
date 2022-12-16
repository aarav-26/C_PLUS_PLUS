/*Find the smallest positive missing integer.
Given an array of numbers, fnd out which smallest positive number is
missing
Arr : [1, 2, 3, 4, 5]
O/P : 6
*/


#include<iostream>
#define max 32768
using namespace std;
#include<map>
int missingNumber(int arr[], int n) {
    map<int,bool> my_ref;
    for(int i=0;i<n;i++) my_ref[arr[i]]=true;
    int min_val=1;
    while(min_val<=n)
    {
        if(my_ref.find(min_val)==my_ref.end()) return min_val;
        min_val+=1;
    }
    return min_val;
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
    cout<<missingNumber(arr,size);
}
