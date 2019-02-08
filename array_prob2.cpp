//Find the Rotation Count in Rotated Sorted array.

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the no. of elements:";
    cin>>num;
    int arr[num];
    int arr_unsorted[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    copy(arr,arr+num,arr_unsorted);
    sort(arr,arr+num);
    int shift=0;
    for (int i=0;i<num;i++)
    {
        shift=i;
        if(arr[num-1]==arr_unsorted[num-1] && arr[0]==arr_unsorted[0])
        {
            cout<<"Rotation Count:"<<shift;
            break;
        }
        else
        {
            int temp;
            for(int j=0;j<num-1;j++)
            {
                if (j==0)
                {
                    temp=arr_unsorted[j];
                }
                arr_unsorted[j]=arr_unsorted[j+1];
                if(j==num-2)
                {
                    arr_unsorted[num-1]=temp;
                }
            }
        }
    }
}
