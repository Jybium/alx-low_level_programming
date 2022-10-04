#ifndef _MAIN_H_INCLUDED
#define _MAIN_H_INCLUDED
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int **alloc_grid(int width, int height);
#endif
