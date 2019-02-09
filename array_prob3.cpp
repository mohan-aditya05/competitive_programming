//Rearrange array such that arr[i] >= arr[j] if i is even and arr[i]<=arr[j] if i is odd and j < i

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the no. of elements:";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+num);
    int arr_new[num];
    int even=1,odd=1;
    int mid;
    if(num%2==0)
        mid=(num/2)-1;
    else
        mid=num/2;
    for(int i=0;i<num;i++)
    {
        if (i==0)
        {
            arr_new[i]=arr[mid];
        }
        else if(i%2==0)
        {
            arr_new[i]=arr[mid-odd];
            odd++;
        }
        else
        {
            arr_new[i]=arr[mid+even];
            even++;
        }
    }
    for(int i=0;i<num;i++)
    {
        cout<<arr_new[i]<<" ";
    }

}
