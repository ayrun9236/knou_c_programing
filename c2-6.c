#include <stdio.h>
#include <windows.h>

int main() {
    // 콘솔 인코딩을 UTF-8로 설정
    SetConsoleOutputCP(CP_UTF8);
    
    enum day1 { SUN, MON, TUE, WED, THU, FRI, SAT } d1;
    enum day2 { sun = 2, mon, tue, wed, thu, fri, sat } d2;
    
    d1 = WED;
    d2 = wed;
    
    printf("열거형 d1 저장된 값은 %d 입니다. \n", d1);
    printf("열거형 d2 저장된 값은 %d 입니다. \n", d2);
    
    return 0;
}
