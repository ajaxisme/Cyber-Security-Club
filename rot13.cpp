//Implementing Rot13 cipher
#include<iostream>

using namespace std;

int main()
{
	char s[] = "synt{f0_l0h_p4a_u4px}";
	char c[30];
	int i, pos, new_pos;
	for(i=0;s[i];i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			pos = s[i] - 'a';
			new_pos = (pos + 13)%26;
			c[i] = 'a' + new_pos;
		}
		else
			c[i] = s[i];
	}
	c[i] = '\0';
	cout<<c<<endl;

	return 0;
}
