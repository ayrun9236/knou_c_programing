#include <stdio.h>
#include <windows.h>

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    int i, sum;  // 변수 i, sum 선언
    // 주의: sum 변수가 초기화되지 않아 예상치 못한 결과가 나올 수 있습니다.
    
    for(i = 1; i <= 10; i++)  // 변수 i를 1로 초기화하고 사용
        sum = sum + i;  // 변수 sum을 초기화하지 않고 사용 (문제 발생 가능)
    
    printf("1부터 10까지의 합 = %d \n", sum);
    
    // 올바른 방법을 보여주는 추가 코드
    printf("\n=== 올바른 방법 ===\n");
    int correct_sum = 0;  // 올바르게 초기화
    for(i = 1; i <= 10; i++)
        correct_sum = correct_sum + i;
    
    printf("올바르게 초기화한 경우: 1부터 10까지의 합 = %d \n", correct_sum);
    
    return 0;
}
