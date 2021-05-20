//#######################################################Find substring in a string#######################################################
#include<iostream>

int strStr(string haystack, string needle)
{
	if (needle == "")
		return 0;
	else
	{
		size_t index = haystack.find(needle);
		if (index != string::npos)
			return index;
		else
			return -1;
	}
}

int main()
{
	string haystack = "hello";
	string needle = "ll";
	int index = strStr(haystack, needle);
	cout << index << endl;
	return 0;
}