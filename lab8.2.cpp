#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;char* Change(char* dest, const char* str, char* t, int i){	if (str[i] != 0)	{		if (str[i] == '.')		{			strncat(t, "", 2);			return Change(dest, str, t + 4, i + 3);		}    		else		{			*t++ = str[i++];			*t = '\0';			return Change(dest, str, t, i);		}	}	else	{		*t++ = str[i++];		*t++ = str[i++];		*t = '\0';		return dest;	}}int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin>> str;	char* dest1 = new char[151];	dest1[0] = '\0';	char* dest2;	dest2 = Change(dest1, str, dest1, 0);	cout << "Modified string : " << dest1 << endl;	return 0;
}