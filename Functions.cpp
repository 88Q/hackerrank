#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four (int a, int b, int c, int d) {
    int ans = a;

    int arr[4] = {a, b, c, d}; 

    for (int i = 0; i < 4; i++){
        if (ans < arr[i]){
            ans = arr[i];
        }
    } 
return ans; 
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    cin >> a >> b >> c >> d; 
    return 0;
}
