//segment tree is involved :D
#include <stdio.h>
using namespace std;
# define MAX 100 // assuming we need first 100 rows
long long triangle[MAX + 1][MAX + 1];
void makeTriangle() {
    int i, j;

    // initialize the first row
    triangle[0][0] = 1; // C(0, 0) = 1

    for(i = 1; i < MAX; i++) {
        triangle[i][0] = 1; // C(i, 0) = 1
        for(j = 1; j <= i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
}
long long C(int n, int r) {
    return triangle[n][r];
}
int main(int argc, char const *argv[])
{
	int t;
	makeTriangle();
	scanf("%d",&t);
	while(t--){
		int n,x;
		scanf("%d",&n);
		scanf("%d",&x);
		printf("%lld\n",C(n,x));
	}
	return 0;
}