char *mx_strchr(const char*s, int c);
int mx_strlen(const char*s);
char *mx_strchr(const char*s, int c);

char*mx_strstr(const char*s1, const char*s2)
{
	int len = mx_strlen(s1);
	for(int a = 0; a < len; a++)
	{
		if(s1[a] == s2[0])
		{
			for(int b = 0; b < mx_strlen(s2); b++)
			{
				if(s1[a + b] != s2[b])
					break;
				if(s2[b+1] == '\0'){
					return mx_strchr(s1, s1[a]);
				}	
			}
		}
	}
	return 0;
}

