//maximum-of-all-subarrays-of-size-k

#include<iostream>
#include<deque>

using namespace std;

void func()
{
    int num,k,i;
    scanf("%d%d",&num,&k);
    deque<int>Q(k);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<k;i++)
    {
        while((!Q.empty())&&(arr[i]>=arr[Q.back()]))
        {
            Q.pop_back();
        }
        Q.push_back(i);
    }
    for( ;i<num;i++)
    {
        printf("%d ",arr[Q.front()]);
        while ( (!Q.empty()) && Q.front() <= i - k)
            Q.pop_front();

        while((!Q.empty())&&(arr[i]>=arr[Q.back()]))
        {
            Q.pop_back();
        }
        Q.push_back(i);
    }
    printf("%d",arr[Q.front()]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        func();
    return 0;
}
