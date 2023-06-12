int mx_strlen(const char*s){
	int check = 0;

	do{
		if(s[check] == '\0')
			break;
		check++;
	}while(s[check] != '\0');
	return check;
}

