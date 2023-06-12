int mx_strncmp(const char*s1, const char*s2, int n);

int mx_strncmp(const char*s1, const char*s2, int n){
	for(int a = 0; a < n; a++ )
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
