/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 01:28:54 by inazaria          #+#    #+#             */
/*   Updated: 2024/03/27 11:42:38 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h" 
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>

#define RED(value) "\033[31m" value "\033[0m"
#define GREEN(value) "\033[32m" value "\033[0m"
#define ORANGE(value) "\033[33m" value "\033[0m"


char	func_test_mapi(unsigned int n, char c) {
	return ((c + n) % 127);
}

void	del_content(void *content)
{
	free(content);
}

void	func_test_iteri(unsigned int n, char *c)
{
	*c = func_test_mapi(n, *c);
}

void	func_test_lstiter(void *s)
{
	strncpy(s, "XXX", 4);
}

void	*func_test_lstmap(void *content)
{
    if (content == NULL) {
        return NULL;}
    char *str = (char *)content;
    char *result = strdup(str); 
	for (size_t i = 0; result[i]; i++) {
        result[i] = toupper(result[i]);
    }
    return result;
}


int	occurences(char c, char *sep_charset)
{
	while (sep_charset && c && *sep_charset)
	{
		if (c == *sep_charset++)
			return (1);
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	wordcount;
	int	f_change;

	if (str == NULL || sep == NULL)
		return (0);
	wordcount = 0;
	f_change = 1;
	while (*str)
	{
		wordcount += (f_change && !occurences(*str, sep));
		f_change = (occurences(*str++, sep));
	}
	return (wordcount);
}

size_t	ft_strlen(char const *s) __attribute__((weak));

void	test_ft_strlen(char *strs[], int size)
{
	printf("------------Testing ft_strlen-------------\n");
	if (!ft_strlen)
	{
		printf(ORANGE("\nft_strlen not found.\n"));
		return ;
	}
	for (int i = 0; i < size ; i++) 
	{
		printf("   strlen(%s)    = %ld\n", strs[i], strlen(strs[i]));
		printf("ft_strlen(%s) = %ld\n", strs[i], ft_strlen(strs[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}
	printf("------------Testing ft_strlen-------------\n\n\n");
}


int	ft_toupper(int c) __attribute__((weak));

void	test_ft_toupper(int tab[], int size) 
{
	printf("------------Testing ft_toupper-------------\n");
	if (!ft_toupper) {
		printf("%s\n", ORANGE("\nft_toupper not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   toupper(%c) = %c\n", tab[i], toupper(tab[i]));
		printf("ft_toupper(%c) = %c\n", tab[i], ft_toupper(tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_toupper-------------\n\n\n");
}

int	ft_tolower(int i) __attribute__((weak));

void	test_ft_tolower(int tab[], int size) 
{
	printf("------------Testing ft_tolower-------------\n");
	if (!ft_tolower)
	{
		printf("%s\n", ORANGE("\nft_tolower not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   tolower(%c) = %c\n", tab[i], tolower(tab[i]));
		printf("ft_tolower(%c) = %c\n", tab[i], ft_tolower(tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_tolower-------------\n\n\n");
}


int		ft_atoi(char const *nptr) __attribute__((weak));

void	test_ft_atoi(char *tab[], int size) 
{
	printf("------------Testing ft_atoi-------------\n");
	if (!ft_atoi)
	{
		printf("%s\n", ORANGE("\nft_atoi not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   atoi(%s) = %d\n", tab[i], atoi(tab[i]));
		printf("ft_atoi(%s) = %d\n", tab[i], ft_atoi(tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_atoi-------------\n\n\n");
}


int		ft_isalpha(int c) __attribute__((weak));

void	test_ft_isalpha(int tab[], int size) 
{
	printf("------------Testing ft_isalpha-------------\n");
	if (!ft_isalpha)
	{
		printf("%s\n", ORANGE("\nft_isalpha not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   isalpha(%d) = %d\n", tab[i], isalpha(tab[i]));
		printf("ft_isalpha(%d) = %d\n", tab[i], ft_isalpha(tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_isalpha-------------\n\n\n");
}


int		ft_isdigit(int c) __attribute__((weak));

void	test_ft_isdigit(int tab[], int size) 
{
	printf("------------Testing ft_isdigit-------------\n");
	if (!ft_isdigit)
	{
		printf("%s\n", ORANGE("\nft_isdigit not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   isdigit(%d) = %d\n", tab[i], isdigit(tab[i]));
		printf("ft_isdigit(%d) = %d\n", tab[i], ft_isdigit(tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_isdigit-------------\n\n\n");
}



int		ft_isprint(int c) __attribute__((weak));

void	test_ft_isprint(int tab[], int size) 
{
	printf("------------Testing ft_isprint-------------\n");
	if (!ft_isprint)
	{
		printf("%s\n", ORANGE("\nft_isprint not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   isprint(%d) = %d\n", tab[i], isprint(tab[i]));
		printf("ft_isprint(%d) = %d\n", tab[i], ft_isprint(tab[i]));	
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_isprint-------------\n\n\n");
}


int		ft_isalnum(int c) __attribute__((weak));

void	test_ft_isalnum(int tab[], int size) 
{
	printf("------------Testing ft_isalnum-------------\n");
	if (!ft_isalnum)
	{
		printf("%s\n", ORANGE("\nft_isalnum not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   isalnum(%d) = %d\n", tab[i], isalnum(tab[i]));
		printf("ft_isalnum(%d) = %d\n", tab[i], ft_isalnum(tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_isalnum-------------\n\n\n");
}


int		ft_isascii(int c) __attribute__((weak));

void	test_ft_isascii(int tab[], int size) 
{
	printf("------------Testing ft_isascii-------------\n");
	if (!ft_isascii)
	{
		printf("%s\n", ORANGE("\nft_isascii not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   isascii(%d) = %d\n", tab[i], isascii(tab[i]));
		printf("ft_isascii(%d) = %d\n", tab[i], ft_isascii(tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_isascii-------------\n\n\n");
}


char	*ft_itoa(int num) __attribute__((weak));

void	test_ft_itoa(int tab[], int size) 
{
	printf("------------Testing ft_itoa-------------\n");
	if (!ft_itoa)
	{
		printf("%s\n", ORANGE("\nft_itoa not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("ft_itoa(%d) = %s\n", tab[i], ft_itoa(tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_itoa-------------\n\n\n");
}


char	**ft_split(char const *s, char c) __attribute__((weak));

void	test_ft_split(char *tab[][2], int size) 
{
	printf("------------Testing ft_split-------------\n");
	if (!ft_split)
	{
		printf("%s\n", ORANGE("\nft_split not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("ft_split('%s', '%s') = {", tab[i][0], tab[i][1]);
		char **res = ft_split(tab[i][0], *tab[i][1]);
		int wc = count_words(tab[i][0], tab[i][1]); 
		for (int j = 0; j < wc - 1; j++) {
			printf("'%s', ", res[j]);
		}
		wc > 0 ? printf("'%s'}\n", res[wc - 1]) : printf("}\n") ;
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_split-------------\n\n\n");
}


char	*ft_strjoin(char const *s1, char const *s2) __attribute__((weak));

void	test_ft_strjoin(char *strs[][2], int size) 
{
	printf("------------Testing ft_strjoin-------------\n");
	if (!ft_strjoin)
	{
		printf("%s\n", ORANGE("\nft_strjoin not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("ft_strjoin('%s', '%s') = ", strs[i][0], strs[i][1]);
		char *res_strjoin = ft_strjoin(strs[i][0], strs[i][1]);
		printf("%s \n", res_strjoin);		
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_strjoin-------------\n\n\n");
}



char	*ft_substr(char const *s, unsigned int start, size_t len) __attribute__((weak));

void	test_ft_substr(int tab[], char *strs[], int size) 
{
	printf("------------Testing ft_substr-------------\n");
	if (!ft_substr)
	{
		printf("%s\n", ORANGE("\nft_substr not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		size_t x = ft_strlen(strs[i]);
		printf("ft_substr(%s, %d, %ld) = %s\n", 
		 strs[i], tab[i], x, ft_substr(strs[i], tab[i], x));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_substr-------------\n\n\n");
}


char	*ft_strtrim(char const *s1, char const *set) __attribute__((weak));

void	test_ft_strtrim(char *tab[][2], int size) 
{
	printf("------------Testing ft_strtrim-------------\n");
	if (!ft_strtrim)
	{
		printf("%s\n", ORANGE("\nft_strtrim not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("ft_strtrim('%s', '%s') = '%s'\n",
				tab[i][0], tab[i][1], ft_strtrim(tab[i][0], tab[i][1]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_strtrim-------------\n\n\n");
}


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)) __attribute__((weak));

void	test_ft_strmapi(char *strs[], int size, char (*f)(unsigned int, char))
{
	printf("------------Testing ft_strmapi-------------\n");
	if (!ft_strmapi)
	{	
		printf("%s\n", ORANGE("\nft_strmapi not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("ft_strmapi(%s, f) = '%s'\n",
		 strs[i], ft_strmapi(strs[i], f));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}
	printf("------------Testing ft_strmapi-------------\n\n\n");
}



void	ft_striteri(char *s, void (*f)(unsigned int, char*)) __attribute__((weak));

void	test_ft_striteri(char strs[][100], int size, void (*f)(unsigned int, char*))
{
	printf("------------Testing ft_striteri-------------\n");
	if (!ft_striteri)
	{
		printf("%s\n", ORANGE("\nft_striteri not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("ft_striteri(%s, f) = ", strs[i]);
		ft_striteri(strs[i], f);
		printf("'%s' \n", strs[i]);
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}
	printf("------------Testing ft_striteri-------------\n\n\n");
}



size_t	ft_strlcat(char *dst, const char *src, size_t size) __attribute__((weak));

void	test_ft_strlcat(char *strs[], int size) 
{
	printf("------------Testing ft_strlcat-------------\n");
	if (!ft_strlcat)
	{	
		printf("%s\n", ORANGE("\nft_strlcat not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		char tab[100] = {0};
		strcat(tab, "joe ");
		printf("ft_strlcat('%s', '%s', 100) = ", tab, strs[i]);
		ft_strlcat(tab, strs[i], 100);
		printf("'%s' \n", tab);		
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_strlcat-------------\n\n\n");
}



size_t	ft_strlcpy(char *dst, const char *src, size_t size) __attribute__((weak));

void	test_ft_strlcpy(char *strs[], int size) 
{
	printf("------------Testing ft_strlcpy-------------\n");
	if (!ft_strlcpy)
	{
		printf("%s\n", ORANGE("\nft_strlcpy not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		char tab[100] = {0};
		strcat(tab, "joe ");
		printf("ft_strlcpy('%s', '%s', 100) = ", tab, strs[i]);
		ft_strlcpy(tab, strs[i], 100);
		printf("'%s' \n", tab);		
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_strlcpy-------------\n\n\n");
}



void	ft_putchar_fd(char c, int fd) __attribute__((weak));

void	test_ft_putchar_fd(char c) 
{
	printf("------------Testing ft_putchar_fd-------------\n");			
	if (!ft_putchar_fd)
	{
		printf("%s\n", ORANGE("\nft_putchar_fd not found\n")); 
		return ;
	}
	int fd = open("Test_ft_putchar_fd.txt", O_RDWR | O_CREAT, S_IWUSR | S_IRUSR);
	ft_putchar_fd(c, fd);
	close(fd);
	printf("Adding : '%c' to test \n", c);
	printf("------------Testing ft_putchar_fd-------------\n\n\n");
}


void	ft_putstr_fd(char *s, int fd) __attribute__((weak));

void	test_ft_putstr_fd(char *s) 
{
	printf("------------Testing ft_putstr_fd-------------\n");			
	if (!ft_putstr_fd)
	{
		printf("%s\n", ORANGE("\nft_putstr_fd not found\n")); 
		return ;
	}
	int fd = open("Test_ft_putstr_fd.txt", O_RDWR | O_CREAT, S_IWUSR | S_IRUSR);
	ft_putstr_fd(s, fd);
	close(fd);
	printf("Adding : '%s' to test \n", s);
	printf("------------Testing ft_putstr_fd-------------\n\n\n");
}



void	ft_putnbr_fd(int n, int fd) __attribute__((weak));

void	test_ft_putnbr_fd()
{
	printf("------------Testing ft_putnbr_fd-------------\n");			
	if (!ft_putnbr_fd)
	{
		printf("%s\n", ORANGE("\nft_putnbr_fd not found\n")); 
		return ;
	}
	int fd = open("Test_ft_putnbr_fd_INT_MAX.txt", O_RDWR | O_CREAT, S_IWUSR | S_IRUSR);
	ft_putnbr_fd(INT_MAX, fd);
	close(fd);
	printf("Adding : 2147483647 to test \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	int fd1 = open("Test_ft_putnbr_fd_INT_MIN.txt", O_RDWR | O_CREAT, S_IWUSR | S_IRUSR);
	ft_putnbr_fd(INT_MIN, fd1);
	close(fd1);	
	printf("Adding : -2147483648 to test \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	int fd3 = open("Test_ft_putnbr_fd_minus_1.txt", O_RDWR | O_CREAT, S_IWUSR | S_IRUSR);
	ft_putnbr_fd(-1, fd3);
	close(fd3);
	printf("Adding : -1 to test \n");
	printf("------------Testing ft_putnbr_fd-------------\n\n\n");
}


void	ft_putendl_fd(char *s, int fd) __attribute__((weak));

void	test_ft_putendl_fd(char *s) 
{
	printf("------------Testing ft_putendl_fd-------------\n");			
	if (!ft_putendl_fd)
	{
		printf("%s\n", ORANGE("\nft_putendl_fd not found\n")); 
		return ;
	}
	int fd = open("Test_ft_putendl_fd.txt", O_RDWR | O_CREAT, S_IWUSR | S_IRUSR);
	ft_putendl_fd(s, fd);
	close(fd);
	printf("Adding : '%s' to test \n", s);
	printf("------------Testing ft_putendl_fd-------------\n\n\n");			
}



int		ft_strncmp(const char *s1, const char *s2, size_t n) __attribute__((weak));

void	test_ft_strncmp(int tab[], char *strs[][2], int size) 
{
	if (!ft_strncmp)
	{
		printf("%s\n", ORANGE("\nft_strncmp not found\n")); 
		return ;
	}
	printf("------------Testing ft_strncmp-------------\n");
	for (int i = 0; i < size ; i++) {
		printf("   strncmp('%s', '%s', %d) = %d\n",
			strs[i][0], strs[i][1], tab[i], strncmp(strs[i][0], strs[i][1], tab[i]));
		printf("ft_strncmp('%s', '%s', %d) = %d\n",
			strs[i][0], strs[i][1], tab[i], ft_strncmp(strs[i][0], strs[i][1], tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_strncmp-------------\n\n\n");
}



char	*ft_strnstr(const char *big, const char *small, size_t len) __attribute__((weak));

void	test_ft_strnstr(int tab[], char *strs[][2], int size) 
{
	printf("------------Testing ft_strnstr-------------\n");
	if (!ft_strnstr)
	{
		printf("%s\n", ORANGE("\nft_strnstr not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("ft_strnstr('%s', '%s', %d) = %s\n",
			strs[i][0], strs[i][1], tab[i], ft_strnstr(strs[i][0], strs[i][1], tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_strnstr-------------\n\n\n");
}



char	*ft_strchr(const char *s, int c) __attribute__((weak));

void	test_ft_strchr(int tab[], char *strs[], int size) 
{
	printf("------------Testing ft_strchr-------------\n");
	if (!ft_strchr)
	{
		printf("%s\n", ORANGE("\nft_strchr not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   strchr('%s', %d) = %p \n",
			strs[i], tab[i], strchr(strs[i], tab[i]));
		printf("ft_strchr('%s', %d) = %p \n",
			strs[i], tab[i], ft_strchr(strs[i], tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_strchr-------------\n\n\n");
}


char	*ft_strrch(const char *s, int c) __attribute__((weak));

void	test_ft_strrch(int tab[], char *strs[], int size) 
{
	printf("------------Testing ft_strrch-------------\n");
	if (!ft_strrch)
	{
		printf("%s\n", ORANGE("\nft_strrch not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   strrch('%s', %d) = %p \n",
			strs[i], tab[i], strrchr(strs[i], tab[i]));
		printf("ft_strrch('%s', %d) = %p \n",
			strs[i], tab[i], ft_strrch(strs[i], tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_strrch-------------\n\n\n");
}



void	*ft_memchr(const void *s, int c, size_t n) __attribute__((weak));

void	test_ft_memchr() 
{
	printf("------------Testing ft_memchr-------------\n");
	if (!ft_memchr)
	{
		printf("%s\n", ORANGE("\nft_memchr not found\n")); 
		return ;
	}
	char *test1 = "XXAABB";
	printf("   memchr('%s', %d) = %p \n", test1, (int) 'A', memchr(test1, (int) 'A', 6));
	printf("ft_memchr('%s', %d) = %p \n", test1, (int) 'A', ft_memchr(test1, (int) 'A', 6));
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	char *test2 = "";
	printf("   memchr('%s', %d) = %p \n", test2, (int) 'A', memchr(test2, (int) 'A', 0));
	printf("ft_memchr('%s', %d) = %p \n", test2, (int) 'A', ft_memchr(test2, (int) 'A', 0));
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	char *test3 = "1231234";
	printf("   memchr('%s', %d) = %p \n", test3, (int) '4', memchr(test3, (int) 'A', 7));
	printf("ft_memchr('%s', %d) = %p \n", test3, (int) '4', ft_memchr(test3, (int) 'A', 7));		
	printf("------------Testing ft_memchr-------------\n\n\n");
}


char	*ft_strdup(const char *s) __attribute__((weak));

void	test_ft_strdup(char *strs[], int size) 
{
	printf("------------Testing ft_strdup-------------\n");
	if (!ft_strdup)
	{
		printf("%s\n", ORANGE("\nft_strdup not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   strdup('%s') = %s \n",
			strs[i], strdup(strs[i]));
		printf("ft_strdup('%s') = %s \n",
			strs[i], ft_strdup(strs[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_strdup-------------\n\n\n");
}


void	*ft_memset(void *s, int c, size_t n) __attribute__((weak));

void	test_ft_memset() 
{
	printf("------------Testing ft_memset-------------\n");
	if (!ft_memset)
	{
		printf("%s\n", ORANGE("\nft_strdup not found\n")); 
		return ;
	}
	char test1[15] = {0};
	char test2[15] = {0};
	printf("   memset('%s', 'A', 12, ) = ", test1);
	memset(test1, (int) 'A', 12);
	printf("'%s' \n", test1);
	printf("ft_memset('%s', 'A', 12, ) = ", test2);
	ft_memset(test2, (int) 'A', 12);	
	printf("'%s' \n", test2);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("   memset('%s', 'C', 12, ) = ", test1);
	memset(test1, (int) 'C', 12);
	printf("'%s' \n", test1);
	printf("ft_memset('%s', 'C', 12, ) =", test2);
	ft_memset(test2, (int) 'C', 12);	
	printf("'%s' \n", test2);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("   memset('%s', '1', 12, ) = ", test1);
	memset(test1, (int) '1', 12);
	printf("'%s' \n", test1);
	printf("ft_memset('%s', '1', 12, ) = ", test2);
	ft_memset(test2, (int) '1', 12);	
	printf("'%s' \n", test2);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("   memset('%s', 0, 12, ) = ", test1);
	memset(test1, (int) 0, 12);
	printf("'%s' \n", test1);
	printf("ft_memset('%s', 0, 12, ) = ", test2);
	ft_memset(test2, (int) 0, 12);	
	printf("'%s' \n", test2);
	printf("------------Testing ft_memset-------------\n\n\n");
}



void	*ft_memmove(void *dest, const void *src, size_t n) __attribute__((weak));

void	test_ft_memmove() 
{
	printf("------------Testing ft_memmove-------------\n");
	if (!ft_memmove)
	{
		printf("%s\n", ORANGE("\nft_memmove not found\n")); 
		return ;
	}
	char tab[] =  {'1', '2', '3', '4', '5', '6', '7', '8', 0};	
	char tab2[] = {'1', '2', '3', '4', '5', '6', '7', '8', 0};
	printf("   memmove(%s, %s, %d) = ", tab, tab + 2, 5);
	memmove(tab, tab + 2, 5);
	printf("'%s' \n", tab);
	printf("ft_memmove(%s, %s, %d) = ", tab2, tab2 + 2, 5);
	ft_memmove(tab2, tab2 + 2, 5);
	printf("'%s' \n", tab2);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	char tab5[] =  {'1', '2', '3', '4', '5', '6', '7', '8', 0};	
	char tab6[] = {'1', '2', '3', '4', '5', '6', '7', '8', 0};
	printf("   memmove(%s, %s, %d) = ", tab5 + 2, tab5, 5);
	memmove(tab5 + 2, tab5, 5);
	printf("'%s' \n", tab5);
	printf("ft_memmove(%s, %s, %d) = ", tab6 + 2, tab6, 5);
	ft_memmove(tab6 + 2, tab6, 5);
	printf("'%s' \n", tab6);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	char tab3[50] = {0};
	char tab4[50] = {0};
	printf("   memmove(%s, %s, %d) = ", tab3, tab, 5);
	memmove(tab3, tab, 5);
	printf("'%s' \n", tab3);
	printf("ft_memmove(%s, %s, %d) = ", tab4, tab2, 5);
	ft_memmove(tab4, tab2, 5);
	printf("'%s' \n", tab4);	
	printf("------------Testing ft_memmove-------------\n\n\n");
}



void	*ft_memcpy(void	*dest, const void *src, size_t n) __attribute__((weak));

void	test_ft_memcpy() 
{
	printf("------------Testing ft_memcpy-------------\n");
	if (!ft_memcpy)
	{
		printf("%s \n", ORANGE("\nft_memcpy not found\n")); 
		return ;
	}
	char tab1[10] = {0};
	char tab2[10] = {0};
	char tab3[] =  {'1', '2', '3', '4', '5', '6', '7', '8', 0};	
	printf("   memcpy(%s, %s, %d) = ", tab1, tab3, 5);
	memcpy(tab1, tab3, 5);
	printf("'%s' \n", tab1);
	printf("ft_memcpy(%s, %s, %d) = ", tab2, tab3, 5);
	ft_memcpy(tab2, tab3, 5);
	printf("'%s' \n", tab2);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	char tab4[10] = {0};
	char tab5[10] = {0};
	char tab6[] =  {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 0};	
	printf("   memcpy(%s, %s, %d) = ", tab4, tab6, 5);
	memcpy(tab4, tab6, 5);
	printf("'%s' \n", tab4);
	printf("ft_memcpy(%s, %s, %d) = ", tab5, tab6, 5);
	ft_memcpy(tab5, tab6, 5);
	printf("'%s' \n", tab5);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	char tab7[10] = {0};
	char tab8[10] = {0};
	char tab9[] = {'a', 'v', 'c', 'd', 0};
	printf("   memcpy(%s, %s, %d) = ", tab7, tab9, 4);
	memcpy(tab7, tab9, 5);
	printf("'%s' \n", tab7);
	printf("ft_memcpy(%s, %s, %d) = ", tab8, tab9, 5);
	ft_memcpy(tab8, tab9, 5);
	printf("'%s' \n", tab8);	
	printf("------------Testing ft_memcpy-------------\n\n\n");
}



int		ft_memcmp(const void *s1, const void *s2, size_t n) __attribute__((weak));

void	test_ft_memcmp(int tab[], char *strs[][2], int size) 
{
	printf("------------Testing ft_memcmp-------------\n");
	if (!ft_memcmp)
	{
		printf("%s \n", ORANGE("\nft_memcmp not found\n")); 
		return ;
	}
	for (int i = 0; i < size ; i++) {
		printf("   memcmp('%s', '%s', %d) = %d\n",
			strs[i][0], strs[i][1], tab[i], memcmp(strs[i][0], strs[i][1], tab[i]));
		printf("ft_memcmp('%s', '%s', %d) = %d\n",
			strs[i][0], strs[i][1], tab[i], ft_memcmp(strs[i][0], strs[i][1], tab[i]));
		if (i != (size - 1)) {printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");}
	}	
	printf("------------Testing ft_memcmp-------------\n\n\n");
}



void	ft_bzero(void *s, size_t n) __attribute__((weak));

void	test_ft_bzero() 
{
	printf("------------Testing ft_bzero-------------\n");
	if (!ft_bzero)
	{
		printf("%s \n", ORANGE("\nft_bzero not found\n")); 
		return ;
	}
	char tab[] = "hello";
	char tab1[] = "hello";
	printf("   bzero(%s, 5) = ", tab);
	bzero(tab, 5);
	printf("'%s' \n", tab);
	printf("ft_bzero(%s, 5) = ", tab1);
	ft_bzero(tab1, 5);
	printf("'%s' \n", tab1);
	printf("------------Testing ft_bzero-------------\n\n\n");
}



void	*ft_calloc(size_t nmemb, size_t size) __attribute__((weak));

void	test_ft_calloc() 
{
	printf("------------Testing ft_calloc-------------\n");
	if (!ft_calloc)
	{
		printf("%s \n", ORANGE("\nft_calloc not found\n")); 
		return ;
	}
	char *tab = ft_calloc(10, sizeof(int));
	char *tab1 =   calloc(10, sizeof(int));
	printf("   calloc(10, %ld) = '%s' \n", sizeof(int), tab1);
	printf("ft_calloc(10, %ld) = '%s' \n", sizeof(int), tab);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
//	char *tab2 = ft_calloc(INT_MAX, sizeof(int));
//	char *tab3 =   calloc(INT_MAX, sizeof(int));
//	printf("   calloc(%d, %ld) = '%s' \n", INT_MAX, sizeof(int), tab3);
//	printf("ft_calloc(%d, %ld) = '%s' \n", INT_MAX, sizeof(int), tab2);
	printf("------------Testing ft_calloc-------------\n\n\n");
}



t_list	*ft_lstnew(void	*content) __attribute__((weak));

void	test_ft_lstnew() 
{
	printf("------------Testing ft_lstnew-------------\n");
	if (!ft_lstnew)
	{
		printf("%s \n", ORANGE("\nft_lstnew not found\n")); 
		return ;
	}
	char *test = "miaou";
	t_list *lst = ft_lstnew(test);
	printf("Adding '%s' to the list \n", test);
	printf("ft_lstnew(%s) = lst \n", test);
	printf("lst->content = %s\n", (char *) lst->content);	
	printf("------------Testing ft_lstnew-------------\n\n\n");
}




void	ft_lstadd_front(t_list **lst, t_list *new) __attribute__((weak));

void	test_ft_lstadd_front() 
{
	printf("------------Testing ft_lstadd_front-------------\n");
	if (!ft_lstadd_front)
	{
		printf("%s \n", ORANGE("\nft_lstadd_front not found\n")); 
		return ;
	}
	if (!ft_lstnew)
	{
		printf("%s \n", ORANGE("ft_lstnew is required to test but it was not found\n")); 
		return ;
	}
	char *test = "miaou";
	t_list *lst = ft_lstnew(test);
	printf("Adding '%s' to the list \n", test);
	printf("ft_lstnew(%s) = lst \n", test);
	printf("lst->content = %s\n", (char *) lst->content);
	t_list *lst2 = ft_lstnew("this is the new item !");
	ft_lstadd_front(&lst, lst2);
	printf("Adding a new items in front of the list\n");
	printf("New elem added : lst->content = %s \n", (char *) lst->content);
	printf("------------Testing ft_lstadd_front-------------\n\n\n");
}


t_list	*ft_lstlast(t_list *lst) __attribute__((weak));

void	test_ft_lstlast() 
{
	printf("------------Testing ft_lstlast-------------\n");
	if (!ft_lstlast)
	{
		printf("%s \n", ORANGE("\nft_lstlast not found\n")); 
		return ;
	}
	if (!ft_lstnew)
	{
		printf("%s \n", ORANGE("ft_lstnew is required to test but it was not found\n")); 
		return ;
	}
	if (!ft_lstadd_front)
	{
		printf("%s \n", ORANGE("ft_lstadd_front is required to test but it was not found\n")); 
		return ;
	}
	char *test = "miaou";
	t_list *lst = ft_lstnew(test);
	printf("Adding '%s' to the list \n", test);
	printf("ft_lstnew(%s) = lst \n", test);
	printf("lst->content = %s\n", (char *) lst->content);
	t_list *lst2 = ft_lstnew("this is the new item !");
	ft_lstadd_front(&lst, lst2);
	printf("Adding a new items in front of the list\n");
	printf("New elem added : lst->content = %s \n", (char *) lst->content);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Now last elem.content should be miaou\n");
	t_list *last = ft_lstlast(lst);
	printf("t_list last = ft_lstlast(lst)\n");
	printf("Last elem : last->content = '%s'\n", (char *) last->content);
	printf("------------Testing ft_lstlast-------------\n\n\n");
}



int		ft_lstsize(t_list *lst) __attribute__((weak));

void	test_ft_lstsize() 
{
	printf("------------Testing ft_lstsize-------------\n");	
	if (!ft_lstsize)
	{
		printf("%s \n", ORANGE("\nft_lstsize not found\n")); 
		return ;
	}
	if (!ft_lstnew)
	{
		printf("%s \n", ORANGE("ft_lstnew is required to test but it was not found\n")); 
		return ;
	}
	if (!ft_lstadd_front)
	{
		printf("%s \n", ORANGE("ft_lstadd_front is required to test but it was not found\n")); 
		return ;
	}

	char *test = "miaou";
	t_list *lst = ft_lstnew(test);
	printf("t_list lst = ft_lstnew('random')\n");
	t_list *lst1 = ft_lstnew(test);
	ft_lstadd_front(&lst, lst1);
	printf("ft_lstadd_front(lst, lst1)\n");
	t_list *lst2 = ft_lstnew(test);
	ft_lstadd_front(&lst, lst2);
	printf("ft_lstadd_front(lst, lst2)\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("size of lst is now 3 \n");
	printf("ft_lstsize(lst) = %d\n", ft_lstsize(lst));
	printf("------------Testing ft_lstsize-------------\n\n\n");
}


void	ft_lstadd_back(t_list **lst, t_list *new) __attribute__((weak));

void	test_ft_lstadd_back() 
{
	printf("------------Testing ft_lstadd_back-------------\n");	
	if (!ft_lstadd_back)
	{
		printf("%s \n", ORANGE("\nft_lstadd_back not found\n")); 
		return ;
	}
	if (!ft_lstnew)
	{
		printf("%s \n", ORANGE("ft_lstnew is required to test but it was not found\n")); 
		return ;
	}
	char *test = "Hello";
	t_list *lst = ft_lstnew(test);
	printf("t_list lst = ft_lstnew('random')\n");
	char *test2 = "World";
	t_list *lst1 = ft_lstnew(test2);
	ft_lstadd_back(&lst, lst1);
	printf("ft_lstadd_back(lst, lst1)\n");
	char *test3 = "!";
	t_list *lst2 = ft_lstnew(test3);
	ft_lstadd_back(&lst, lst2);
	printf("ft_lstadd_back(lst, lst2)\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("the list content should be 'Hello' -> 'World -> '!'\n");
	printf("list is : '%s' -> '%s' -> '%s' \n", 
		(char *)lst->content, (char *)(lst->next)->content, (char *)((lst->next)->next)->content);
	printf("------------Testing ft_lstadd_back-------------\n\n\n");	
}


void	ft_lstdelone(t_list *lst, void (*del)(void *)) __attribute__((weak));

void	test_ft_lstdelone() 
{
	printf("------------Testing ft_lstdelone-------------\n");	
	if (!ft_lstdelone)
	{
		printf("%s \n", ORANGE("\nft_lstdelone not found\n")); 
		return ;
	}
	if (!ft_lstnew)
	{
		printf("%s \n", ORANGE("ft_lstnew is required to test but it was not found\n")); 
		return ;
	}
	if (!ft_lstadd_back)
	{
		printf("%s \n", ORANGE("ft_lstadd_back is required to test  but it was not found\n")); 
		return ;
	}
	if (!ft_lstlast)
	{
		printf("%s \n", ORANGE("ft_lstlast is required to test  but it was not found\n")); 
		return ;
	}

	char *test = "Hello";
	t_list *lst = ft_lstnew(test);
	printf("t_list lst = ft_lstnew('random')\n");
	char *test2 = "World";
	t_list *lst1 = ft_lstnew(test2);
	ft_lstadd_back(&lst, lst1);
	printf("ft_lstadd_back(lst, lst1)\n");
	char *test3 = malloc(sizeof(char) * 20);
	strncpy(test3, "!", 15);
	t_list *lst2 = ft_lstnew(test3);
	ft_lstadd_back(&lst, lst2);
	printf("ft_lstadd_back(lst, lst2)\n");
	printf("list is : '%s' -> '%s' -> '%s' \n", 
		(char *)lst->content, (char *)(lst->next)->content, (char *)((lst->next)->next)->content);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("ft_lstdelone(ft_lstlast(lst), del_content)\n");
	printf("the list content should be 'Hello' -> 'World' -> '(null)'\n");
	ft_lstdelone(ft_lstlast(lst), del_content);
	printf("list is : '%s' -> '%s' -> '%s' \n", 
		(char *)lst->content, (char *)(lst->next)->content, (char *)((lst->next)->next));
	printf("------------Testing ft_lstdelone-------------\n\n\n");	
}



void	ft_lstclear(t_list **lst, void (*del)(void *)) __attribute__((weak));

void	test_ft_lstclear() 
{
	printf("------------Testing ft_lstclear-------------\n");	
	if (!ft_lstclear)
	{
		printf("%s \n", ORANGE("\nft_lstclear not found\n")); 
		return ;
	}
	if (!ft_lstnew)
	{
		printf("%s \n", ORANGE("ft_lstnew is required to test but it was not found\n")); 
		return ;
	}
	if (!ft_lstadd_back)
	{
		printf("%s \n", ORANGE("ft_lstadd_back is required to test  but it was not found\n")); 
		return ;
	}
	if (!ft_lstsize)
	{
		printf("%s \n", ORANGE("ft_lstsize is required to test  but it was not found\n")); 
		return ;
	}
	char *test = malloc(sizeof(char) * 20);	
	strcpy(test, "Hello");
	t_list *lst = ft_lstnew(test);
	printf("t_list lst = ft_lstnew('random')\n");
	char *test2 = malloc(sizeof(char) * 20);
	strcpy(test2, "World");
	t_list *lst1 = ft_lstnew(test2);
	ft_lstadd_back(&lst, lst1);
	printf("ft_lstadd_back(lst, lst1)\n");
	char *test3 = malloc(sizeof(char) * 20);
	strcpy(test3, "!");
	t_list *lst2 = ft_lstnew(test3);
	ft_lstadd_back(&lst, lst2);
	printf("ft_lstadd_back(lst, lst2)\n");
	printf("list is : '%s' -> '%s' -> '%s' \n", 
		(char *)lst->content, (char *)(lst->next)->content, (char *)((lst->next)->next)->content);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("ft_lstclear(ft_lstlast(lst), del_content)\n");
	ft_lstclear(&lst, del_content);
	printf("the list size should be \n");
	printf("ft_lstsize(lst) = %d \n", ft_lstsize(lst));
	printf("------------Testing ft_lstclear-------------\n\n\n");	
}



void	ft_lstiter(t_list *lst, void (*f)(void *)) __attribute__((weak));


void	test_ft_lstiter() 
{
	printf("------------Testing ft_lstiter-------------\n");	
	if (!ft_lstiter)
	{
		printf("%s \n", ORANGE("\nft_lstiter not found\n")); 
		return ;
	}
	if (!ft_lstnew)
	{
		printf("%s \n", ORANGE("ft_lstnew is required to test but it was not found\n")); 
		return ;
	}
	if (!ft_lstadd_back)
	{
		printf("%s \n", ORANGE("ft_lstadd_back is required to test  but it was not found\n")); 
		return ;
	}
	char *test = malloc(sizeof(char) * 20);	
	strcpy(test, "Hello");
	t_list *lst = ft_lstnew(test);
	printf("t_list lst = ft_lstnew('random')\n");
	char *test2 = malloc(sizeof(char) * 20);
	strcpy(test2, "World");
	t_list *lst1 = ft_lstnew(test2);
	ft_lstadd_back(&lst, lst1);
	printf("ft_lstadd_back(lst, lst1)\n");
	char *test3 = malloc(sizeof(char) * 20);
	strcpy(test3, "!");
	t_list *lst2 = ft_lstnew(test3);
	ft_lstadd_back(&lst, lst2);
	printf("ft_lstadd_back(lst, lst2)\n");
	printf("list is : '%s' -> '%s' -> '%s' \n", 
		(char *)lst->content, (char *)(lst->next)->content, (char *)((lst->next)->next)->content);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("ft_lstiter(ft_lstlast(lst), func_test_lstiter)\n");
	ft_lstiter(lst, func_test_lstiter);
	printf("the list contents should be 'XXX' -> 'XXX' -> 'XXX'\n");
	printf("list is : '%s' -> '%s' -> '%s' \n", 
		(char *)lst->content, (char *)(lst->next)->content, (char *)((lst->next)->next)->content);
	printf("------------Testing ft_lstiter-------------\n\n\n");	
}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) __attribute__((weak));

void	test_ft_lstmap() 
{
	printf("------------Testing ft_lstmap-------------\n");	
	if (!ft_lstmap)
	{
		printf("%s \n", ORANGE("\nft_lstmap not found\n")); 
		return ;
	}
	if (!ft_lstnew)
	{
		printf("%s \n", ORANGE("ft_lstnew is required to test but it was not found\n")); 
		return ;
	}
	if (!ft_lstadd_back)
	{
		printf("%s \n", ORANGE("ft_lstadd_back is required to test  but it was not found\n")); 
		return ;
	}

	char *test = malloc(sizeof(char) * 20);	
	strcpy(test, "Hello");
	t_list *lst = ft_lstnew(test);
	printf("t_list lst = ft_lstnew('random')\n");
	char *test2 = malloc(sizeof(char) * 20);
	strcpy(test2, "World");
	t_list *lst1 = ft_lstnew(test2);
	ft_lstadd_back(&lst, lst1);
	printf("ft_lstadd_back(lst, lst1)\n");
	char *test3 = malloc(sizeof(char) * 20);
	strcpy(test3, "!");
	t_list *lst2 = ft_lstnew(test3);
	ft_lstadd_back(&lst, lst2);
	printf("ft_lstadd_back(lst, lst2)\n");
	printf("list is : '%s' -> '%s' -> '%s' \n", 
		(char *)lst->content, (char *)(lst->next)->content, (char *)((lst->next)->next)->content);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("ft_lstmap(ft_lstlast(lst), func_test_lstmap, del_content)\n");
	t_list *l = ft_lstmap(lst, func_test_lstmap, del_content);
	printf("the list contents should be 'HELLO' -> 'WORLD' -> '!' -> '(null)'\n");
	printf("list is : '%s' -> '%s' -> '%s' -> '%s' \n", 
		(char *)l->content, (char *)(l->next)->content, (char *)((l->next)->next)->content, (char *) (ft_lstlast(l)->next));
	printf("------------Testing ft_lstmap-------------\n\n\n");	
}



int main(void) {

	printf(GREEN("Test file for libft made by Iyan Nazarian (inazaria :))\n\n"));

	char *items_ft_strlen[] = {"hello", "hey", ""};
	test_ft_strlen(items_ft_strlen, 3);
	
	int items_ft_toupper[] = {18, 23, 97, 112};
	test_ft_toupper(items_ft_toupper, 4);
	
	int items_ft_tolower[] = {18, 26, 68, 78};
	test_ft_tolower(items_ft_tolower, 4); 
	
	char *items_ft_atoi[] = {"123bn", "p123", "000122-+23\t23", "\t-123", "-\t123", "\t\t123", "-123zy"};
	test_ft_atoi(items_ft_atoi, 7);

	int items_ft_isalpha[] = {1, 23, 65, 90, 97, 122, 231};
	test_ft_isalpha(items_ft_isalpha, 7);

	int	items_ft_isdigit[] = {1, 23, 47, 48, 57, 58, 343};
	test_ft_isdigit(items_ft_isdigit, 7);

	int items_ft_isprint[] = {-1, 0, 31, 32, 45, 69, 127};
	test_ft_isprint(items_ft_isprint, 7);

	int items_ft_isalnum[] = {-1, 23, 65, 90, 112, 53, 47};
	test_ft_isalnum(items_ft_isalnum, 7);
	
	int items_ft_isascii[] = {-12, 12, 127, 1242, 0, 128};
	test_ft_isascii(items_ft_isascii, 6);

	int	items_ft_itoa[]    = {-123, 123, 0, -1, 1, INT_MIN, INT_MAX};
	test_ft_itoa(items_ft_itoa, 7);

	char	*items_ft_split[7][2] = {{"", "a"}, {"hello world !", " "}, {"hello[world[!", "["}, \
		{"Hello World !", ""}, {NULL, "a"}, {"Hello World", ""}, {NULL, "A"}};
	test_ft_split(items_ft_split, 7);


	char *items_ft_strjoin[][2] = {{"Hello", NULL}, {NULL, "world"}, {"Hello", "World"}, \
		{"Hello", ""}, {"", "world"}, {"", ""}};
	test_ft_strjoin(items_ft_strjoin, 6);

	char *items_ft_substr1[] = {"Hello World !", "XXXXXCut from Here !", "", "XXXXX"};
	int	items_ft_substr2[] = {5, 5, 0, 4};
	test_ft_substr(items_ft_substr2, items_ft_substr1, 4);

	char *items_ft_strtrim[][2] = {{"Hello", "Ho"}, {"XXXONLY_PASTE_THIS   ", "X "}, \
		{"", "ABC", }, {"ONLY_COPY_THIS", ""}};
	test_ft_strtrim(items_ft_strtrim, 4);

	char	*items_ft_strmapi[] = {"Hello World !", "Ici c'est Paris !", "", "Miaou"};
	test_ft_strmapi(items_ft_strmapi, 4, &func_test_mapi);

	char	items_ft_striteri[][100] = {"Hello World !", "Ici c'est Paris !", "", "Miaou"};
	test_ft_striteri(items_ft_striteri, 4, &func_test_iteri);
	
	char *items_ft_strlcat[] = {"Add me !", "", "Easy !"};
	test_ft_strlcat(items_ft_strlcat, 3);

	char *items_ft_strlcpy[] = {"Add me !", "", "Easy !"};
	test_ft_strlcpy(items_ft_strlcpy, 4);

	test_ft_putchar_fd('c');

	test_ft_putstr_fd("Hello There ! I am in a File !");

	test_ft_putnbr_fd();

	test_ft_putendl_fd("After this is a new lllineee !");

	int	items_ft_strncmp1[] = {3, 2, 1, 2, 0, 5, 0};
	char *items_ft_strncmp2[][2] = {{"ABC", "ABD"}, {"", ""}, {"hhhh", "hhhh"}, {"..", "z"} \
		, {"z", ".."}, {"abc", "abc"}, {"", ""}};
	test_ft_strncmp(items_ft_strncmp1, items_ft_strncmp2, 7);

	int	items_ft_strnstr1[] = {3, 3, 5, 4, 3};
	char *items_ft_strnstr2[][2] = {{"abc", "d"}, {"abc", "b"}, {"dddda", "a"}, {"", "abc"} \
		, {"acd", "acd"}};
	test_ft_strnstr(items_ft_strnstr1, items_ft_strnstr2, 5);

	int	items_ft_strchr1[] = {(int) 'o', (int) '!', (int) 'x', (int) 'a', 0};
	char *items_ft_strchr2[] = {"Hello Hello", "Nothing here ! ! !", "XFind the X", "", "Heeeey there !"};
	test_ft_strchr(items_ft_strchr1, items_ft_strchr2, 5);

	int	items_ft_strrch1[] = {(int) 'x', 0, (int) 'o', (int) '!', (int) 'X', (int) 'a', 0};
	char	*items_ft_strrch2[] = {"", "", "Hello Hello","Nothing here ! ! !", "XFind the X", "", "Heeeey there !"};
	test_ft_strrch(items_ft_strrch1, items_ft_strrch2, 6);

	test_ft_memchr();


	char *items_ft_strdup[] = {"Hello Hello", "Nothing here ! ! !", "XFind the X", "", \
		"Heeeey there !"};
	test_ft_strdup(items_ft_strdup, 5);

	test_ft_memset();
	
	test_ft_memmove();

	test_ft_memcpy();

	int	items_ft_memcmp1[] = {3, 2, 1, 2, 0, 5, 0};
	char *items_ft_memcmp2[][2] = {{"ABC", "ABD"}, {"", ""}, {"hhhh", "hhhh"}, {"..", "z"} \
		, {"z", ".."}, {"abc", "abc"}, {"", ""}};
	test_ft_memcmp(items_ft_memcmp1, items_ft_memcmp2, 7);

	test_ft_bzero();

	test_ft_calloc();

	// Test of bonus functions.

	test_ft_lstnew();

	test_ft_lstadd_front();

	test_ft_lstlast();
	
	test_ft_lstsize();

	test_ft_lstadd_back();

	test_ft_lstdelone();

	test_ft_lstclear();

	test_ft_lstiter();

	test_ft_lstmap();

	return (0);

}
