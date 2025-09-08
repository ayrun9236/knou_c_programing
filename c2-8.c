#include <stdio.h>
#include <windows.h>

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    short int num1, num2;
    
    num1 = 32767 + 1;  // short int형의 범위를 벗어남 (오버플로우)
    num2 = -32768 - 1; // short int형의 범위를 벗어남 (언더플로우)
    
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n", num2);
    
    return 0;
}
