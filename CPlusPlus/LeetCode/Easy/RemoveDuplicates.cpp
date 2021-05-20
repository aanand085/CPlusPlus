//#######################################################Remove duplicates from sorted array#######################################################

#include<vector>
#include<iostream>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	if (nums.size() == 0)return 0;
	int i = 0;
	for (int j = 1; j < nums.size(); j++)
	{
		if (nums[i] != nums[j])
			i++;
		nums[i] = nums[j];
	}
	return (i + 1);

}

int main()
{
	vector<int> n = { 0,0,1,1,1,2,2,3,3,4 };
	cout << removeDuplicates(n) << endl;
	for (int i = 0; i < n.size(); i++)
		cout << n[i] << " ";
	cout << endl;
	return 0;
}