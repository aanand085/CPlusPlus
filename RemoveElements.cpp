//#######################################################Remove elements from sorted array#######################################################
#include<iostream>
#include<vector>


int removeElement(vector<int>& nums, int val) 
{

        int i = 0;
        vector<int> dup;
	for (int j = 0; j < nums.size(); j++)
	{
		if (nums[j] != val)
			dup.push_back(nums[j]);
	}
        nums = dup;
        return (nums.size() );
}
	
	
int main()
{
	int val = 3;
	vector<int> n = { 2 };
	int len = removeElement(n, val);
	cout << len << endl;
	for (int i = 0; i < len; i++)
		cout << n[i] << " ";
	cout << endl;
	return 0;
}
