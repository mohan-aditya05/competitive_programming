//Count all distinct pairs with difference equal to k.
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int num,k;
    cout<<"Enter total elements in array:";
    cin>>num;
    int arr[num];
    for (int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n"<<"Enter k:";
    cin>>k;
    sort(arr,arr+num);
    int result=0;
    for (int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(arr[num-1-j]-arr[i]>=k)
            {
                if(arr[num-1-j]-arr[i]==k)
                {
                    result++;
                }
            }
            else
            {
                break;
            }
        }
    }
    cout<<"Result:"<<result;
}
