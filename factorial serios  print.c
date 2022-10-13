#include <stdio.h>
int main (){
long long int i, j, n, sum, fact=1;

scanf("%lld", &n);

for (i=1; i<=n; i++){
    fact = i*fact;
        printf("%lld + ", fact);
}


return 0;
}
