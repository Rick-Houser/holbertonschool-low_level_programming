/* func to compare two strings */
int shell_comp(char *s1, char *s2)
 {
  if (*s1 == *s2 && *s2 == '\0') {
    return 1;
  }
  else if (*s1 == *s2) {
    return shell_comp(s1 + 1, s2 + 1);
  }
  else if (*s2 == '*') {
    if (*(s2 + 1) != '\0' && *s1 == '\0') {
      return 0;
    }
    else if (shell_comp(s1 + 1, s2)) {
      return 1;
    }
    else {
      return shell_comp(s1, s2 + 1);
    }
  }
  return 0;
 }
