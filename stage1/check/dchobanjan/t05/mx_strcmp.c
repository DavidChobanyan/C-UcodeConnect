int mx_strcmp(const char*s1, const char*s2){
	for(int a = 0; s1[a] != '\0' || s2[a] != '\0'; a++ )
	{
		if(s1[a] != s2[a])
			return 0;
		if((s1[a+1] == '\0' 
		&& s2[a+1] != '\0') 
		|| (s1[a+1] != '\0' 
		&& s2[a+1] ==  '\0'))
			return 0;
	}
	return 1;
}

