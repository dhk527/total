CROSS=          # arm-gcc linux-gcc rtl-gcc 등 여러 chipset마다 다른 gcc프로그램으이 있으니 
CC=$(CROSS)gcc  # 크로스 컴파일러 gcc가 아닐 수도 있으니 
EXE=test        # target (실행파일)

C_SRC = $(wildcard *.c)#OBJS=main.o sum.o sum2.o # OBJS ( 컴파일할 파일들? - 늘어남 r귀찮아서 C_SRC, OBJS를 만든거다. )
#C_SRC = main.c sum.c sum2.c  위의 C_SRC를 
#OBJS = main.o sum.o sum2.o  아래 OBJS로 바꾼다.
OBJS = $(C_SRC:.c=.o)

CFLAGS=-I./include $(DEFINES) # 얘는 다른 변수랑 다르게 특별한 키워드가 있으니 함부러 바꾸면 안된다. 다른 것은 바꿔도됨 ㅇㅇ CC, EXE, OBJ 이런건 다 바꿔도됨 ㅇㅇ
DEFINES=-DDEBUG 
# CFLAGS에 원하는 chip을 사용하고 싶을 떄 ㅇㅇ ifdef else endif 등을 사용하여서 쓴다. 
LDEFLGS=-lpthread #thread를 추가 해보기 쓰레드 추가가 라이브러리 추가, 그리고 붙히는거임 ㅇㅇ

all : $(EXE)
	echo completed!!!


$(EXE) : $(OBJS) # EXE 실행파일 $@ : OBJS 의존성파일,컴파일파일들 $^라고 표현
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) 
# $(CC)는 Qt 원하는 chip 컴파일러 프로그램이고 $(CFLAGS) 원하는 경로가서 헤더 찾기+define으로 원하는 칩셋으로 define(ifdef endif) -o $@(실행파일) $^(의존성파일 OBJS) $(LDFAGS) 라이브러리 쓰레드 파일이라는데	

all : main.o sum.o sum2.o # 재료들을 검색해본다.

# main.o : main.c  # 의존성을 찾는 거임 main.o가 main.c 소스파일을 찾는 코드임
#	gcc -c -o main.o main.c # -c만해도 -o가 자동으로 만들어짐 ㅇㅇ

#sum.o : sum.c
#	gcc -c sum.c

#sum2.o : sum2.c
#	gcc -c sum2.c

clean : 
	rm *.o
	rm test 

good :
	echo good
	
