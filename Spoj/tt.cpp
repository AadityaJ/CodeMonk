#include <string.h>
#include <stdio.h>
 
static int distance (const char * word1,
		int len1,
		const char * word2,
		int len2)
{
	int matrix[len1 + 1][len2 + 1];
	int i;
	for (i = 0; i <= len1; i++) {
		matrix[i][0] = i;
	}
	for (i = 0; i <= len2; i++) {
		matrix[0][i] = i;
	}
	for (i = 1; i <= len1; i++) {
		int j;
		char c1;
 
		c1 = word1[i-1];
		for (j = 1; j <= len2; j++) {
			char c2;
 
			c2 = word2[j-1];
			if (c1 == c2) {
				matrix[i][j] = matrix[i-1][j-1];
			}
			else {
				int del;
				int insert;
				int substitute;
				int minimum;
 
				del = matrix[i-1][j] + 1;
				insert = matrix[i][j-1] + 1;
				substitute = matrix[i-1][j-1] + 1;
				minimum = del;
				if (insert < minimum) {
					minimum = insert;
				}
				if (substitute < minimum) {
					minimum = substitute;
				}
				matrix[i][j] = minimum;
			}
		}
	}
	return matrix[len1][len2];
}
 
int main ()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char word1[501];
		char word2[501];
		int len1;
		int len2;
		int d;
 
		scanf("%s%s",word1,word2);
		len1 = strlen (word1);
		len2 = strlen (word2);
		d = distance (word1, len1, word2, len2);
		printf ("%d\n",d);
	}
		return 0;
}