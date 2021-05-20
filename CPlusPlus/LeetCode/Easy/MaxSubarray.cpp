//#######################################################max Subarray#######################################################

//kandane's algorithm
/*In this algorithm, a variable called max_sum is created to store 
maximum sum of the positive contiguous subarray till current 
iterated element and a variable called current_sum is created 
to store sum of the positive subarray which ends at current 
iterated element. In each iteration, current_sum is compared 
with max_sum, to update max_sum if it is greater than max_sum.*/


#include<vector>

int maxSubArray(vector<int>& nums) {

	int max_sum = INT_MIN, current_sum = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		current_sum = current_sum + nums[i];
		if (current_sum > max_sum)
			max_sum = current_sum;
		if (current_sum < 0)
			current_sum = 0;
	}

	return max_sum;


	int sum = 0; int maxi = INT_MIN;
	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
		if (sum > maxi)
			maxi = sum;
		if (sum < 0)
			sum = 0;
	}
	return maxi;

}


int main()
{
	vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
	int res = maxSubArray(nums);
	cout << res << endl;
	return 0;
}