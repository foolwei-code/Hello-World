#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int>&vec)
{
    int n=vec.size();
    for(int i=n-1;i>=0;i--)
      for(int j=0;j<i;j++)
	 if(vec[j]>vec[j+1])
		 swap(vec[j],vec[j+1]);
}
int main()
{
    vector<int>vec{5,4,3,2,1};
    bubble_sort(vec);
  for(auto p:vec)
  cout<<p<<" ";
  cout<<endl;
}
