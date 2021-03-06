#include "../head/libasm.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


int main(void)
{
	printf("----------STRLEN TEST----------\n\n");

	printf("moi  = %lu\n", ft_strlen("yo"));
	printf("vrai = %lu\n", strlen("yo"));
	printf("\n");
	printf("moi  = %lu\n", ft_strlen("bonjour"));
	printf("vrai = %lu\n", strlen("bonjour"));
	printf("\n");
	printf("moi  = %lu\n", ft_strlen("TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE"));
	printf("vrai = %lu\n", strlen("TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE"));
	printf("\n");
	printf("moi  = %lu\n", ft_strlen(""));
	printf("vrai = %lu\n", strlen(""));
	printf("\n\n");

	char src[] = "bonjour";
	char dest[8];
	char src2[] = "TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE";
	char dest2[929];
	char src3[] = "";
	char dest3[1];

	printf("----------STRCPY TEST----------\n\n");

	printf("ret vrai  = %s\n", strcpy(dest, src));
	printf("dest vrai = %s\n", dest);
	memset(dest, '\0', 8);
	printf("ret moi   = %s\n", ft_strcpy(dest, src));
	printf("dest moi  = %s\n", dest);

	printf("\n");

	printf("ret vrai  = %s\n", strcpy(dest2, src2));
	printf("dest vrai = %s\n", dest2);
	memset(dest2, '\0', 929);
	printf("ret moi   = %s\n", ft_strcpy(dest2, src2));
	printf("dest moi  = %s\n", dest2);

	printf("\n");

	printf("ret vrai  = %s\n", strcpy(dest3, src3));
	printf("dest vrai = %s\n", dest3);
	memset(dest3, '\0', 1);
	printf("ret moi   = %s\n", ft_strcpy(dest3, src3));
	printf("dest moi  = %s\n", dest3);

	printf("\n");

	printf("----------STRCMP TEST----------\n\n");
	printf("vrai = %d\n", strcmp("bon", "bon"));
	printf("moi  = %d\n", ft_strcmp("bon", "bon"));

	printf("\n");

	printf("vrai = %d\n", strcmp("TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE", "TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE"));
	printf("moi  = %d\n", ft_strcmp("TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE", "TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE"));
	
	printf("\n");

	printf("vrai = %d\n", strcmp("12", "21"));
	printf("moi  = %d\n", ft_strcmp("12", "21"));

	printf("\n");

	printf("vrai = %d\n", strcmp("cba", "cab"));
	printf("moi  = %d\n", ft_strcmp("cba", "cab"));

	printf("\n");

	printf("vrai = %d\n", strcmp("", ""));
	printf("moi  = %d\n", ft_strcmp("", ""));

	printf("\n");

	printf("----------WRITE  TEST----------\n\n");
	printf("%zd\n", write(1, "bonjour\n", 8));
	printf("%zd\n", ft_write(1, "bonjour\n", 8));

	printf("\n");

	printf("%zd\n", write(1, "TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE\n", 929));
	printf("%zd\n", ft_write(1, "TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE\n", 929));

	printf("\n");

	printf("%zd\n", write(1, "bonjour\n", 0));
	printf("%zd\n", ft_write(1, "bonjour\n", 0));

	printf("\n");

	printf("%zd\n", write(1, "bonjour\n", -2));
	printf("%zd\n", ft_write(1, "bonjour\n", -2));

	printf("\n");

	printf("%zd\n", write(-1, "bonjour\n", 8));
	printf("%zd\n", ft_write(-1, "bonjour\n", 8));

	printf("\n");

	int fdf;
	int fdv;

	fdf = open("test/writef", O_WRONLY);
	fdv = open("test/writev", O_WRONLY);
	printf("%zd\n", write(fdv, "bonjour\n", 8));
	printf("%zd\n", ft_write(fdf, "bonjour\n", 8));
	close(fdf);
	close(fdv);
	printf("\n");

	printf("----------READ   TEST----------\n\n");
	char buf[128];

	memset(buf, '\0', 128);
	printf("%zd\n", read(0, buf, 8));
	printf("%s\n", buf);
	memset(buf, '\0', 128);
	printf("%zd\n", ft_read(0, buf, 8));
	printf("%s\n", buf);

	printf("\n");

	printf("%zd\n", read(0, buf, 0));
	printf("%zd\n", ft_read(0, buf, 0));

	printf("\n");

	printf("%zd\n", read(0, buf, -2));
	printf("%zd\n", ft_read(0, buf, -2));

	printf("\n");

	printf("%zd\n", read(-2, buf, 8));
	printf("%zd\n", ft_read(-2, buf, 8));

	printf("\n");

	fdf = open("test/writef", O_RDONLY);
	fdv = open("test/writev", O_RDONLY);
	memset(buf, '\0', 128);
	printf("%zd\n", read(fdv, buf, 8));
	printf("%s\n", buf);
	memset(buf, '\0', 128);
	printf("%zd\n", ft_read(fdf, buf, 8));
	printf("%s\n", buf);
	close(fdf);
	close(fdv);

	printf("----------DUP    TEST----------\n\n");
	char *tst1;
	char *tst2;

	tst1 = strdup("bonjour\n");
	tst2 = ft_strdup("bonjour\n");
	printf("%s\n", tst1);
	printf("%s\n", tst2);
	free(tst1);
	free(tst2);

	tst1 = strdup("TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE\n");
	tst2 = ft_strdup("TRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASETRESLONGUEPHRASE\n");
	printf("%s\n", tst1);
	printf("%s\n", tst2);
	free(tst1);
	free(tst2);

	tst1 = strdup("");
	tst2 = ft_strdup("");
	printf("%s\n", tst1);
	printf("%s\n", tst2);
	free(tst1);
	free(tst2);
	return (0);
}