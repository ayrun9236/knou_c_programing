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

// 문자형 상수 설명 함수
void explain_character_constants() {
    printf("\n=== 문자형 상수 예시 ===\n\n");
    
    // 1. 일반 문자 상수
    printf("1. 일반 문자 상수:\n");
    printf("   'A' = %c (ASCII: %d)\n", 'A', 'A');
    printf("   'a' = %c (ASCII: %d)\n", 'a', 'a');
    printf("   '5' = %c (ASCII: %d)\n", '5', '5');
    printf("   ' ' = '%c' (공백, ASCII: %d)\n", ' ', ' ');
    printf("   - 작은따옴표로 감싸서 표현\n\n");
    
    // 2. 이스케이프 문자 상수
    printf("2. 이스케이프 문자 상수:\n");
    printf("   \\a = 경고음(alert) 출력\n");
    printf("   \\b = 백스페이스(back space) - '%c' (보이지 않음)\n", '\b');
    printf("   \\f = 새 페이지(form feed) - '%c' (보이지 않음)\n", '\f');
    printf("   \\n = 줄 바꿈(new line)\n");
    printf("   \\r = 커서를 행의 시작으로 이동(carriage return)\n");
    printf("   \\t = 수평 탭(horizontal tab) - '%c' (보이지 않음)\n", '\t');
    printf("   \\0 = null 문자 (ASCII: %d)\n", '\0');
    printf("   - 백슬래시(\\\\)로 시작하는 특수 문자\n\n");
    
    // 3. 8진수 ASCII 코드로 문자 표현
    printf("3. 8진수 ASCII 코드로 문자 표현:\n");
    printf("   \\101 = %c (A의 8진수 표현)\n", '\101');
    printf("   \\141 = %c (a의 8진수 표현)\n", '\141');
    printf("   \\060 = %c (0의 8진수 표현)\n", '\060');
    printf("   - \\\\뒤에 3자리 8진수 사용\n\n");
    
    // 4. 16진수 ASCII 코드로 문자 표현
    printf("4. 16진수 ASCII 코드로 문자 표현:\n");
    printf("   \\x41 = %c (A의 16진수 표현)\n", '\x41');
    printf("   \\x61 = %c (a의 16진수 표현)\n", '\x61');
    printf("   \\x30 = %c (0의 16진수 표현)\n", '\x30');
    printf("   - \\\\x뒤에 16진수 사용\n\n");
    
    // 5. 실제 이스케이프 문자 동작 시연
    printf("5. 이스케이프 문자 동작 시연:\n");
    printf("   줄 바꿈: Hello\\nWorld\n");
    printf("   탭 사용: Name\\tAge\\tCity\n");
    printf("   탭 사용: John\\t25\\tSeoul\n");
    printf("   백스페이스: Hello\\bWorld (\\b는 백스페이스)\n");
    printf("   캐리지 리턴: Hello\\rWorld (\\r은 줄 시작으로)\n");
    printf("   경고음: \\a (소리로 확인)\n");
    printf("   - 실제 동작은 실행 시 확인 가능\n\n");
    
    // 6. 문자와 숫자의 관계
    printf("6. 문자와 숫자의 관계:\n");
    printf("   'A' + 1 = %c (B)\n", 'A' + 1);
    printf("   'a' - 'A' = %d (대소문자 차이)\n", 'a' - 'A');
    printf("   '5' - '0' = %d (문자 5를 숫자 5로 변환)\n", '5' - '0');
    printf("   - 문자는 ASCII 코드값으로 연산 가능\n\n");
    
    // 7. 특수 문자들
    printf("7. 특수 문자들:\n");
    printf("   작은따옴표: \\' = %c\n", '\'');
    printf("   큰따옴표: \\\" = %c\n", '\"');
    printf("   백슬래시: \\\\ = %c\n", '\\');
    printf("   - 특수 문자를 출력하려면 이스케이프 필요\n");
}

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    // 정수형 상수 설명
    explain_integer_constants();
    
    // 실수형 상수 설명
    explain_floating_constants();
    
    // 문자형 상수 설명
    explain_character_constants();
    
    return 0;
}
