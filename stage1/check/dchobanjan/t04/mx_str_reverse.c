void mx_swap_char(char*s1, char*s2)
{
	char temp = s1[0];

	s1[0] = s2[0];
	s2[0] = temp;
}

void mx_str_reverse(char*s){
	
	int len = 0;
	while(s[len] != '\0')
        {
                if(s[len] == '\0')
                        break;
                len++;
        }

	for(int a = 0; a < len/2; a++)
	{
		mx_swap_char(&s[a], &s[len-a-1]);
	}
}

