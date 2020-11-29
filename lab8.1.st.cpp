#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find('a'&&'b'&&'c', pos)) != -1)
	{
		pos++;
		if(s[pos] == 'a' && 'b' && 'c')
		if (s[pos+1] == 'a'&&'b'&&'c')
			k++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('a'&& 'c' && 'b', pos)) != -1)
		if (s[pos+1] == 'a'&&'c'&&'b')
			if (s[pos + 2] == 'a' && 'c' && 'b')
			s.replace(pos, 3, "**");
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << Count(str) << " groups of 'a','b','c'" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}