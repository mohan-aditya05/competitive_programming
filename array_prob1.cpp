#include<iostream>
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
    int max_sum=0;
    int shift=0;
    for (int i=0;i<num;i++)
    {
        int sum=0;
        for(int j=0;j<num;j++)
        {
            sum=(arr[j]*j)+sum;
        }
        if(sum>max_sum)
        {
                max_sum=sum;
                shift=i;
        }
        int temp;
        for (int j=0;j<num-1;j++)
        {
            if(j==0)
                temp=arr[j];
            arr[j]=arr[j+1];
            if(j==num-2)
                arr[num-1]=temp;
        }
        for(int k=0;k<num;k++)
        {
            cout<<arr[k]<<" ";
        }
    }
    cout<<"Max Sum:"<<max_sum<<"\n";
    cout<<"Rotations needed:"<<shift;
}
