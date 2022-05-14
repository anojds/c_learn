# printf 출력 함수

printf 함수는 함수 호출시 인자로 전달되는 문자를 콘솔에 출력한다

```c

#include <stdio.h>

int main(void) {
    printf("홍길동"); // '홍길동' 이 출력됨
}
```

> **printf 함수는 제가 만들지 않았는데 왜 함수가 있는걸까요?**
> 
> print처럼 기본적으로 c에서 제공하는 함수들을 **표준함수**라고 한다
> 
> 그리고 표준함수들을 모아놓은걸 표준 라이브러리라고 한다.

# \n 줄바꿈 문자

\n은 글자중 삽입하며에 줄바꿈을 해주는 아이이다

```c
#include <stdio.h>

int main(void) {
    printf("hello\n world");
}
```

> 'hello
> 
> world'가 출력 된다

<br>
리포지토리 source > 홍길동_printf.c 을 참고