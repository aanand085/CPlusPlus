//#######################################################Longest common prefix#######################################################
#include<iostream>
#include<vector>

using namespace std;


string longestCommonPrefix(vector<string>& strs) {
	string sample = strs[0], common = "";
	bool flag = 1;
	for (int i = 0; i < sample.length(); i++)
	{
		for (int j = 1; j < strs.size(); j++)
		{
			if (strs[j][i] != sample[i])
				flag = 0;
		}
		if (flag == 0)
			break;
		else
			common += sample[i];
	}
	return common;
}


int main()
{
	vector<string> str = { "flower", "glow", "right" };
	string res = longestCommonPrefix(str);
	cout << res  << endl;
	return 0;
}