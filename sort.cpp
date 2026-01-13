#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int>&vec)
int main()
{
    vector<int>vec{5,4,3,2,1};
    bubble_sort(vec);
  for(auto p:vec)
  cout<<p<<" ";
  cout<<endl;
}