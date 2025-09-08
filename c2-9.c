#include <stdio.h>
#include <windows.h>

int a = 100;  // 전역변수 a

void func() {
    int a = 200;
    printf("func()에서 a의 값=> %d \n", a);  // func()의 지역변수 a 출력
}

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    printf("main()에서 a의 값=> %d \n", a);  // 전역변수 출력
    func();
    printf("main()에서 a의 값=> %d \n", a);  // 전역변수 출력
    
    return 0;
}
