#include <stdio.h>
#include <windows.h>

#define ADDR "서울시 종로구 대학로 86(동숭동)"
#define TEL "1577-999520"

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    printf("한국방송통신대학교 주소: %s \n", ADDR);
    printf("전화번호: %s \n", TEL);
    
    return 0;
}
