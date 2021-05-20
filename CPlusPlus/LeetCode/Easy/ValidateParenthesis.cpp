//#######################################################Validate Parenthesis#######################################################

/* 	Declare a character stack S.
	Now traverse the expression string exp. 
	If the current character is a starting bracket (‘(‘ or ‘{‘ or ‘[‘) then push it to stack.
	If the current character is a closing bracket (‘)’ or ‘}’ or ‘]’) then pop from stack and if the popped character is the matching starting bracket then fine else brackets are not balanced.
	After complete traversal, if there is some starting bracket left in stack then “not balanced” */

#include<iostream>
#include<stack>

	
bool isValid(string s)
{
	char c;
	stack<char> st;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '[' || s[i] == '{' || s[i] == '(')
			st.push(s[i]);

		if (st.empty())
			return false;
		switch (s[i])
		{
		case ']':
			c = st.top();
			st.pop();
			if (c == '{' || c == '(')
				return false;
			break;

		case ')':
			c = st.top();
			st.pop();
			if (c == '{' || c == '[')
				return false;
			break;

		case '}':
			c = st.top();
			st.pop();
			if (c == '(' || c == '[')
				return false;
			break;
		}
	}
	return(st.empty());
}
