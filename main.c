#include <stdio.h>

size_t		ft_strlen_surprise_mthfck(const char *s);

int main(void)
{
	char *string1 = "hello";
	char *string2 = "foo";
	
	printf("your strlen input: %s |  return: %zu\n", string1, ft_strlen_surprise_mthfck(string1));
	printf("your strlen input: %s |  return: %zu\n", string2, ft_strlen_surprise_mthfck(string2));
}
