//#######################################################Roman to integer#######################################################
#include<iostream>
using namespace std;


int getValue(char ch)
{
	int n;
	switch (ch)
	{
	case 'I': 
		n = 1;
		break;
	case 'V': 
		n = 5;
		break;
	case 'X': 
		n = 10;
		break;
	case 'L': 
		n = 50;
		break;
	case 'C': 
		n = 100;
		break;
	case 'D': 
		n = 500;
		break;

	case 'M': 
		n = 1000;
		break;
	}
	return n;
}

int romanToInt(string s) {
	int ans = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (getValue(s[i + 1]) > getValue(s[i]))
			ans -= getValue(s[i]);
		else
			ans += getValue(s[i]);
	}
	return ans;
}


int main()
{
	string s = "IV";
	int res = romanToInt(s);
	cout << res << endl;
	return 0;
}