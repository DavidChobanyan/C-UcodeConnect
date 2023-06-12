int mx_count_words(const char*str, char delimiter)
{
	int counter = 0;
	
	for(int a = 0; str[a] != '\0'; a++)
	{
		if(str[a] == delimiter 
		&& str[a+1] != delimiter)
		{
			counter++;
		}
	}
	
}

