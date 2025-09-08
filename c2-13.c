#include <stdio.h>
#include <windows.h>

#define Hap1(x,y) x + y             // 매크로 함수 정의 시 인수에 괄호를 사용 안 함
#define Hap2(x,y) ((x) + (y))       // 매크로 함수 정의 시 인수에 괄호를 사용함
#define Gop1(x,y) x * y             // 매크로 함수 정의 시 인수에 괄호를 사용 안 함
#define Gop2(x,y) ((x) * (y))       // 매크로 함수 정의 시 인수에 괄호를 사용함

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    int h1, h2, g1, g2;
    
    h1 = 10 * Hap1(3,4);    // h1 = 10 * 3 + 4;
    h2 = 10 * Hap2(3,4);    // h2 = 10 * ((3) + (4));
    
    g1 = Gop1(1 + 2, 3 + 4); // g1 = 1 + 2 * 3 + 4;
    g2 = Gop2(1 + 2, 3 + 4); // g2 = ((1 + 2) * (3 + 4));
    
    printf("h1 = %d, h2 = %d \n", h1, h2);
    printf("g1 = %d, g2 = %d \n", g1, g2);
    
    return 0;
}
