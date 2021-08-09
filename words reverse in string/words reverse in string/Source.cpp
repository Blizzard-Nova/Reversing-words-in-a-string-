/*#include <iostream>
using namespace std;
void Reverse_words_in_String(char* str)
{
	
	if (*str =='\0')
	{
		return;
	}
	else
	{
		return Reverse_words_in_String(str + 1);
		cout << *str << endl;
	}
}
int main()
{
	char str[] = "NooBSaiboT";
	cout << "Original string is " << str << endl;
	cout << "Reversed string is ";
	Reverse_words_in_String(str);
	return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;

void reverse(const string& a);

int main()
{
	string str;
	cout << " Please enter a string " << endl;
	getline(cin, str);
	reverse(str);
	return 0;
}

void reverse(const string& str)
{
	size_t numOfChars = str.size();

	if (numOfChars == 1)
		cout << str << endl;
	else
	{
		cout << str[numOfChars - 1];
		reverse(str.substr(0, numOfChars - 1));
	}
}*/
#include <iostream>
using namespace std;
void Reverse(string str)
{
	if (str.length() == 0)
	{
		return;
	}
	else
	{
		Reverse(str.substr(1));
		cout << str[0];
	}
}
int main()
{
	string x = "NooBSaibot";
	Reverse(x);
	return 0;
}