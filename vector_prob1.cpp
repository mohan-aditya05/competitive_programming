//Maximum Of K- size subarrays (Deque)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num,k;
	cin >> num;
	cin>>k;
	vector<int> g1;
	int j;
	for(int i=0;i<num;i++)
	{
	    cin>>j;
	    g1.push_back(j);
	}
	vector<int> g2;
	vector<int> max_arr;
	for(int i=0;i<num-k+1;i++)
	{
	    g2=vector<int>(g1.begin()+i,g1.begin()+i+k);
	    sort(g2.begin(),g2.end());
	    max_arr.push_back(*(g2.end()-1));
	}
	for(auto i=max_arr.begin();i<max_arr.end();i++)
	{
	    cout<<*i<<" ";
	}
}
