#include <stdio.h>
#include <windows.h>

#define CONDITION 0

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
#if CONDITION
    printf("\n A 프로그램을 컴파일");
#else
    printf("\n B 프로그램을 컴파일");
#endif
    
    printf("\n");
    
    return 0;
}
