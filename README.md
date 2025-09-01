# C 프로그래밍 - Hello World

이 프로젝트는 C 언어로 작성된 간단한 "Hello World" 프로그램입니다.

## 파일 구조

- `hello.c` - 메인 C 소스 코드
- `Makefile` - 컴파일을 위한 Makefile

## 컴파일 및 실행 방법

### 방법 1: GCC 사용 (권장)

1. GCC가 설치되어 있는지 확인:
   ```bash
   gcc --version
   ```

2. 컴파일:
   ```bash
   gcc hello.c -o hello
   ```

3. 실행:
   ```bash
   ./hello
   ```

### 방법 2: Makefile 사용

1. 컴파일:
   ```bash
   make
   ```

2. 실행:
   ```bash
   make run
   ```

### 방법 3: Visual Studio 사용

1. Visual Studio Developer Command Prompt 열기
2. 컴파일:
   ```bash
   cl hello.c
   ```
3. 실행:
   ```bash
   hello.exe
   ```

## GCC 설치 방법

### Windows에서 GCC 설치:

1. **MinGW-w64 설치** (권장):
   - [MinGW-w64 다운로드](https://www.mingw-w64.org/downloads/)
   - 또는 [MSYS2](https://www.msys2.org/) 사용

2. **Chocolatey 사용**:
   ```powershell
   choco install mingw
   ```

3. **Scoop 사용**:
   ```powershell
   scoop install gcc
   ```

## 예상 출력

프로그램을 실행하면 다음과 같은 출력이 나타납니다:
```
Hello World!
```

## 코드 설명

```c
#include <stdio.h>  // 표준 입출력 함수를 사용하기 위한 헤더

int main() {        // 프로그램의 진입점
    printf("Hello World!\n");  // 화면에 텍스트 출력
    return 0;       // 프로그램 정상 종료
}
```