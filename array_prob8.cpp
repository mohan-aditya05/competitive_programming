//https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0

#include <iostream>
#include<stdio.h>
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
	    for(int j=0;j<n;j++)
	    {
	        scanf("%d",&arr[j]);
	    }
        for(int j=0;j<n;j++)
        {
            int flag=0;
            for(int k=j+1;k<n;k++)
            {
                if(arr[j]-arr[k]<0)
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                printf("%d",arr[j]);
                printf(" ");
            }
        }
        printf("\n");
	}
	return 0;
}
