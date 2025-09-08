#include <stdio.h>
#include <windows.h>

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    char ch;  // 문자형 변수 ch 선언
    int in;   // 정수형 변수 in 선언
    
    ch = in = 'A';  // 실제로는 'A'의 ASCII 코드값인 65 저장
    printf("ch = %d \n", ch);  // ch에 저장된 정수 65를 출력
    printf("in = %d \n", in);
    
    printf("---------- \n");
    
    ch = in = 100;  // ch와 in에 정수 100 저장
    printf("ch = %c \n", ch);  // ch에 저장된 정수 100을 ASCII 문자로 출력
    printf("in = %c \n", in);
    
    return 0;
}
