#include <stdbool.h>
bool mx_islower(int c);
bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);
void mx_reverse_case(char*s);

void mx_reverse_case(char*s)
{
	for(int a = 0; s[a] != '\0'; a++)
	{
		if(mx_islower(s[a]))
			s[a] = mx_toupper(s[a]);
		else
			s[a] = mx_tolower(s[a]);
	}
}

