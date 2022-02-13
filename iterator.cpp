# include<iostream>
# include<vector>
using namespace std;
    
/*program for stl class using vector

*/
int main()
{
    //can use list,deque,forward_list,set,multiset,map,multimap,unordered_set,unordered_map,unordered_multiset,unordered_multimap instead of vector but push back is not available for forward_list 
	vector<int> v={2,4,6,8,10};
	v.push_back(20);
	v.push_back(30);
	vector<int>::iterator itr;
	cout<<"using iterator"<<endl;
	for(itr=v.begin();itr!=v.end();itr++)
		cout<<++*itr<<endl;
	cout<<"using for each loop"<<endl;
	for(int x:v)
		cout<<x<<endl;
}