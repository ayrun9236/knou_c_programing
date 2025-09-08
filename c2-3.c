#include <stdio.h>
#include <windows.h>

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    char ch1;  // 문자형 변수 ch1 선언
    char ch2;  // 문자형 변수 ch2 선언
    
    ch1 = 0;   // 정수 0 저장 (ASCII 코드값 0은 null 문자)
    ch2 = '0'; // 문자 '0'의 ASCII 코드값인 48 저장
    
    printf("ch1의 ASCII 코드값 = %d, ASCII 문자 = '%c' \n", ch1, ch1);
    // ch1에 저장된 정수 0을 출력, ASCII 코드값 0은 null 문자 (화면에 보이지 않음)
    printf("ch2의 ASCII 코드값 = %d, ASCII 문자 = '%c' \n", ch2, ch2);
    // ch2에 저장된 ASCII 문자 '0'의 코드값 48을 출력
    
    return 0;
}
