//https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//code
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    int len[n]={0};
	    bool flag[n]={0};
	    flag[n-1]=true;
	    int last_j=n-1;
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&arr[j]);
	    }
	    for(int j=n-2;j>=0;j--)
	    {
	        if(arr[j]>=arr[last_j])
	        {
	            len[j]++;
	            flag[j]=true;
	            last_j=j;
	        }
	    }
	    for(int j=0;j<n;j++)
	    {
	        if(flag[j]==true)
	        {
	            if(len[j]>1)
	            {
	                for(int k=0;k<len[j];k++)
	                    printf("%d ",arr[j]);
	            }
	            else
	                printf("%d ",arr[j]);
	        }
	    }
        printf("\n");
	}
	return 0;
}
