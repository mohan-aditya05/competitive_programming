//Rearrange an array in order – smallest, largest, 2nd smallest, 2nd largest, ..

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the length of the array:";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+num);
    /*for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/
    int arr_new[num];
    int even=0;
    int odd=0;
    for(int i=0;i<num;i++)
    {
        if(i%2==0)
        {
            arr_new[i]=arr[odd];
            odd++;
        }
        else
        {
            arr_new[i]=arr[num-1-even];
            even++;
        }
    }
    for(int i=0;i<num;i++)
    {
        cout<<arr_new[i]<<" ";
    }
}
