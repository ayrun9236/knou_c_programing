#include <stdio.h>
#include <windows.h>

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    short int num1, num2;
    
    num1 = 32767 + 1;  // short int형의 범위를 벗어남 (오버플로우)
    num2 = -32768 - 1; // short int형의 범위를 벗어남 (언더플로우)
    // (short int형의 범위 : -32768~32767)
    
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n", num2);
    
    // 추가 설명 출력
    printf("\n=== 정수 오버플로우/언더플로우 설명 ===\n");
    printf("short int 범위: -32768 ~ 32767\n");
    printf("num1 = 32767 + 1 = 32768 (오버플로우) → %d\n", num1);
    printf("num2 = -32768 - 1 = -32769 (언더플로우) → %d\n", num2);
    printf("2의 보수 표현으로 인해 wraparound 발생\n");
    
    return 0;
}
