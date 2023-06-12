void mx_swap_char(char*s1, char*s2);

void mx_swap_char(char*s1, char*s2){
	char temp = s1[0];
	s1[0] = s2[0];
	s2[0] = temp;
}
