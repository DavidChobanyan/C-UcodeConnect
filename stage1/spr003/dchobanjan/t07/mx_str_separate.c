void mx_str_separate(const char*str, char delim);
void mx_printchar(char s);

void mx_str_separate(const char*str, char delim)
{
	for(int a = 0; str[a] != '\0'; a++)
	{
		if(str[a] != delim)
			mx_printchar(str[a]);
		else if(str[a] == delim 
		&& str[a + 1] != delim 
		&& str[a+1] != '\0')
			mx_printchar('\n');

	}
	mx_printchar('\n');	
}

