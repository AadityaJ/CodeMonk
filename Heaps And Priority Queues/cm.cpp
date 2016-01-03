#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{   priority_queue<long> heap;
    vector<long> backup;
    
    int t, n;
    int prod = 1;
    
    scanf("%d\n",&t);   
    while(t--) {
        scanf("%d\n",&n);
        heap.push(n);
        if(heap.size() < 3) {
            printf("%d\n",-1);
        } else {
            prod = 1;
            for(int i = 0; i < 3; ++i) {
                n = heap.top();
                heap.pop();
                
                prod *= n;
                backup.push_back(n);
            }
            printf("%d\n",prod);
            for(int i = 0; i < 3; ++i) {
                heap.push(backup[i]);
                backup.clear();
            }
        }
    }
    return 0;
}