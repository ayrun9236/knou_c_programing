#include <stdio.h>
#include <limits.h>  // 정수자료형 최솟값, 최댓값 표현
#include <windows.h>

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    // 각 자료형의 최솟값과 최댓값을 저장할 변수들
    char ch1 = CHAR_MIN;        // char 최솟값
    char ch2 = CHAR_MAX;        // char 최댓값
    short sh1 = SHRT_MIN;       // short 최솟값
    short sh2 = SHRT_MAX;       // short 최댓값
    int in1 = INT_MIN;          // int 최솟값
    int in2 = INT_MAX;          // int 최댓값
    long lo1 = LONG_MIN;        // long 최솟값
    long lo2 = LONG_MAX;        // long 최댓값
    long long ll1 = LLONG_MIN;  // long long 최솟값
    long long ll2 = LLONG_MAX;  // long long 최댓값
    
    // 각 자료형의 범위 출력
    printf("char 자료형 범위: %d ~ %d\n", ch1, ch2);
    printf("short 자료형 범위: %d ~ %d\n", sh1, sh2);
    printf("int 자료형 범위: %d ~ %d\n", in1, in2);
    printf("long 자료형 범위: %ld ~ %ld\n", lo1, lo2);
    printf("long long 자료형 범위: %lld ~ %lld\n", ll1, ll2);
    
    // 추가 정보: 각 자료형의 크기
    printf("\n=== 각 자료형의 크기 ===\n");
    printf("char 크기: %zu 바이트\n", sizeof(char));
    printf("short 크기: %zu 바이트\n", sizeof(short));
    printf("int 크기: %zu 바이트\n", sizeof(int));
    printf("long 크기: %zu 바이트\n", sizeof(long));
    printf("long long 크기: %zu 바이트\n", sizeof(long long));
    
    // unsigned 자료형의 최댓값도 출력
    printf("\n=== unsigned 자료형 범위 ===\n");
    printf("unsigned char 범위: 0 ~ %u\n", UCHAR_MAX);
    printf("unsigned short 범위: 0 ~ %u\n", USHRT_MAX);
    printf("unsigned int 범위: 0 ~ %u\n", UINT_MAX);
    printf("unsigned long 범위: 0 ~ %lu\n", ULONG_MAX);
    printf("unsigned long long 범위: 0 ~ %llu\n", ULLONG_MAX);
    
    return 0;
}
