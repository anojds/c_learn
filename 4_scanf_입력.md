# scanf()

문자를 출력할땐 printf 함수를 쓰지만 입력을 받을땐 scanf함수를 쓴다

```c
// scanf("입력 받을 형태", 입력받을 공간의 주소)

#include <stdio.h>

int main(void) {

    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    printf("입력된 정수: %d", num);
}
```

# scanf("%d", &num)

```
         ^            ^
    10진수 형태로   변수 num에
    입력을 받아서    저장해라
```
<br>

> 변수 num 옆에 붙은 **&** 는?<br>
> 포인터와 관련된 거지만 일단은 **&num** 은 num 변수를 가리킨다라는 뜻을 가지고 있다

<br>
리포지토리 code > bmi.c 를 참고