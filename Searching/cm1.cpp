//https://www.hackerearth.com/code-monk-searching/algorithm/discover-the-monk/
#include <algorithm>
using namespace std ;
int main(int argc, char const *argv[])
{
    int t,a,key;
    scanf("%d",&a);
    scanf("%d",&t);
    int arr[a];
    for(int i=0;i<a;i++) scanf("%d",&arr[i]);
    sort (arr,arr+a);
    while(t--){
        scanf("%d",&key);
        if(binary_search(arr,arr+a,key)){printf("YES \n");}
        else {printf("NO \n");}
    }
    return 0;
}