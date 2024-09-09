#include <stdio.h>

int recursivaNum(int num) {
    printf("\n %d", num);
    recursivaNum(num+1);
}

int main(){
    recursivaNum(0);
    return 0;
}
