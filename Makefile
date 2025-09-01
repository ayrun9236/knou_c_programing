CC = C:\msys64\mingw64\bin\gcc.exe
CFLAGS = -Wall -Wextra -std=c99

# 기본 타겟
all: hello

# hello 프로그램 컴파일
hello: hello.c
	$(CC) $(CFLAGS) -o hello.exe hello.c

# 실행
run: hello
	.\hello.exe

# 정리
clean:
	del hello.exe

.PHONY: all run clean
