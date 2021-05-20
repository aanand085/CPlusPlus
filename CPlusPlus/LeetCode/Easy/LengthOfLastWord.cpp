//#######################################################Length of Last Word#######################################################


int lengthOfLastWord(string s) {
	int res = 0;
	int count = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != ' ')
			res = ++count;
		else
			count = 0;
	}
	return res;
}

int main()
{
	string phrase= "a ";
	int count = lengthOfLastWord(phrase);
	cout << count << endl;
	return 0;
}