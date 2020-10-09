#include <iostream>
#include <stdio.h>
//<stdio.h>，同<cstdio>，include後可使用C語言的"printf"與"scanf" 

using namespace std;

int main(){
    int a;
    long long int b;
    char c;
    float d;
    double e;
//scanf用法：(" % + 個別input的datatype ", & + 變數名 , & + 變數名 .....。)
//printf用法同上，只不過變數名稱不必加&。換行請用"\n"
    scanf("%d %lld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%lld\n%c\n%f\n%lf\n", a , b, c, d, e);
    return 0;
}