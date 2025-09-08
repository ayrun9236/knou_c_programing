#include <stdio.h>
#include <windows.h>

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    int a, b;                    // 정수형 변수 a, b를 선언
    a = 100;                     // 변수 a에 100 대입
    b = 50;                      // 변수 b에 50 대입
    printf("a = %d, b = %d \n", a, b);  // 변수 a, b 값 출력
    
    return 0;
}
