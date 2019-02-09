
#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of elements:";
    cin>>num;
    int arr[num];
    for (int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    int total=0;
    int breadth=0;
    int height=0;
    for(int i=0;i<num;i++)
    {
        if(arr[0]==0)
        {
            int temp;
            for(int k=0;k<num;k++)
            {
                if(k==0)
                    temp=arr[k];
                if(k==num-1)
                    arr[k]=temp;
                else
                    arr[k]=arr[k+1];
            }
        }
        if(i==0)
            height=arr[i];
        else if(arr[i]==0)
            breadth++;
        else if(breadth>0)
        {
            if(arr[i]<=height)
                height=arr[i];
            total=total+(breadth*height);
            breadth=0;
        }
    }
    for(int i=0;i<num;i++)
    {
        if(i==0)
            height=arr[i];
        else if(arr[i]<height)
            breadth++;
        else if(arr[i]>height)
        {
            total=total+(breadth*(arr[i]-height));
            breadth=0;
            height=arr[i];
        }
    }
    cout<<"Total:"<<total;
}
