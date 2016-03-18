char *leet(char *c) {
	int i;
	/* loop to end of string replacing specific occurrences */
	for (i = 0; c[i] != '\0'; i++) {
		switch(c[i]) {
			case 'a' :
			case 'A' :
				c[i] = '4';
				break;
			case 'e' :
			case 'E' :
				c[i] = '3';
				break;
			case 'o' :
			case 'O' :
				c[i] = '0';
				break;
			case 't' :
			case 'T' :
				c[i] = '7';
				break;
			case 'l' :
			case 'L' :
				c[i] = '1';
				break;
		}
	}
	return c;
}
