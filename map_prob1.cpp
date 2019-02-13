//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/snackdown-contest/

#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i=0;i<num;i++)
	{
	    int N=0;
	    map<int, int> ques;
	    cin>>N;
	    for(int j=0;j<N;j++)
	    {
	        ques.insert(pair<int, int>(j+1,0));
	    }
	    int P,p;
	    cin>>P;
	    for(int k=0;k<P;k++)
	    {
	        cin>>p;
	        ques[p]=1;
	    }
	    int Q,q;
	    cin>>Q;
	    for(int k=0;k<Q;k++)
	    {
	        cin>>p;
	        ques[p]=1;
	    }
	    int flag=0;
	    for(auto k=ques.begin();k!=ques.end();k++)
	    {
	        if(k->second==1)
	        {
	            flag++;
	        }
	    }
	    if(flag==N)
	    {
	        cout<<"YES";
	    }
	    else
	        cout<<"NO";
        cout<<"\n";
	}
}
