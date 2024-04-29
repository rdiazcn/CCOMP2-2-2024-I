#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string s, int l, int r) {
	if (l > r) {
		return true;
	}
	else {

		if (s[l] == s[r]) 
            return isPalindrome(s, l + 1, r - 1);
		else if (s[l]==' ') 
            return isPalindrome(s, l + 1, r);
		else if(s[r]==' ') 
            return isPalindrome(s, l, r-1);
	}

	return false;
}

int main()
{
    cout<<"Ingrese la cadena: ";
	string s{""};
	getline(cin, s);

	if (isPalindrome(s, 0, s.length() - 1)) 
        cout << "'" << s << "': es un palindrome" << endl;
	else 
        cout << "'" << s << "': no es un palindrome" << endl;
}
