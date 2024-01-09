

//1단계 10번(2588) 곱셈
#include <stdio.h>
int main() {
    
    int A, B;
    scanf("%d", &A);    //472
    scanf("%d", &B);    //385
    printf("%d\n", A*(B % 10));
    printf("%d\n", A*(B % 100 / 10));
    printf("%d\n",A * (B / 100));
    printf("%d\n", A * B);

    
    
    return 0;
}


//고양이
#include <stdio.h>
int main() {
    printf("\\    /\\\n");
    printf(" )  ( ')\n");
    printf("(  /  )\n");
    printf(" \\(__)|\n");
    return 0;
}


//강아지
#include <stdio.h>
int main() {
    printf("|\\_/|\n");
    printf("|q p|   /}\n");
    printf("( 0 )\"\"\"\\\n");
    printf("|\"^\"`    |\n");
    printf("||_/=\\\\__|\n");
    return 0;
}