#include <stdio.h>
#include <windows.h>

// 정수형 상수 설명 함수
void explain_integer_constants() {
    printf("=== 정수형 상수 예시 ===\n\n");
    
    // 1. 10진 상수 (Decimal Constant)
    printf("1. 10진 상수 (Decimal Constant):\n");
    printf("   10진수: %d, %d, %d\n", 10, -10, 999);
    printf("   - 0~9 숫자 사용, 0으로 시작할 수 없음\n\n");
    
    // 2. 8진 상수 (Octal Constant)
    printf("2. 8진 상수 (Octal Constant):\n");
    printf("   8진수 011 = 10진수 %d\n", 011);
    printf("   8진수 055 = 10진수 %d\n", 055);
    printf("   - 0~7 숫자 사용, 0으로 시작\n\n");
    
    // 3. 16진 상수 (Hexadecimal Constant)
    printf("3. 16진 상수 (Hexadecimal Constant):\n");
    printf("   16진수 0xac = 10진수 %d\n", 0xac);
    printf("   16진수 0X2A = 10진수 %d\n", 0X2A);
    printf("   - 0~9, A~F 사용, 0x 또는 0X로 시작\n\n");
    
    // 4. unsigned형 상수 (Unsigned Type Constant)
    printf("4. unsigned형 상수 (Unsigned Type Constant):\n");
    printf("   12u = %u\n", 12u);
    printf("   067u = %u (8진수)\n", 067u);
    printf("   0XFAU = %u (16진수)\n", 0XFAU);
    printf("   - 숫자 뒤에 'U' 또는 'u' 추가\n\n");
    
    // 5. long형 상수 (Long Type Constant)
    printf("5. long형 상수 (Long Type Constant):\n");
    printf("   123456l = %ld\n", 123456l);
    printf("   0XFFL = %ld (16진수)\n", 0XFFL);
    printf("   - 숫자 뒤에 'l' 또는 'L' 추가\n\n");
    
    // 6. 다양한 조합 예시
    printf("6. 다양한 조합 예시:\n");
    printf("   unsigned long: %lu\n", 123456UL);
    printf("   long long: %lld\n", 123456789LL);
    printf("   unsigned long long: %llu\n", 123456789ULL);
}

// 실수형 상수 설명 함수
void explain_floating_constants() {
    printf("\n=== 실수형 상수 예시 ===\n\n");
    
    // 1. 소수 형식 (Decimal/Fractional Form)
    printf("1. 소수 형식 (Decimal/Fractional Form):\n");
    printf("   12.345 = %f\n", 12.345);
    printf("   3.14 = %f\n", 3.14);
    printf("   .5 = %f\n", .5);
    printf("   - 소수점을 사용하여 표현\n\n");
    
    // 2. 지수 형식 (Exponential Form)
    printf("2. 지수 형식 (Exponential Form):\n");
    printf("   12E3 = %f (12000)\n", 12E3);
    printf("   5e-2 = %f (0.05)\n", 5e-2);
    printf("   1.23E+4 = %f (12300)\n", 1.23E+4);
    printf("   - 10진수와 e(E)를 사용하여 표현\n\n");
    
    // 3. float형 상수 (float type constant)
    printf("3. float형 상수 (float type constant):\n");
    printf("   3.14f = %f\n", 3.14f);
    printf("   3.14E-3F = %f\n", 3.14E-3F);
    printf("   2.5F = %f\n", 2.5F);
    printf("   - 숫자 뒤에 f나 F를 붙임\n\n");
    
    // 4. long double형 상수 (long double type constant)
    printf("4. long double형 상수 (long double type constant):\n");
    printf("   3.14l = %Lf\n", 3.14l);
    printf("   3.14E-3L = %Lf\n", 3.14E-3L);
    printf("   2.5L = %Lf\n", 2.5L);
    printf("   - 숫자 뒤에 l이나 L을 붙임\n\n");
    
    // 5. 다양한 실수형 상수 예시
    printf("5. 다양한 실수형 상수 예시:\n");
    printf("   정수 부분만: %f\n", 123.);
    printf("   소수 부분만: %f\n", .456);
    printf("   음수 실수: %f\n", -3.14);
    printf("   양수 지수: %f\n", 1.5e+2);
    printf("   음수 지수: %f\n", 2.0e-3);
}

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    // 정수형 상수 설명
    explain_integer_constants();
    
    // 실수형 상수 설명
    explain_floating_constants();
    
    return 0;
}
