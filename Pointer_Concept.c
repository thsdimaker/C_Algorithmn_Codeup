* * pointer에 대한 이해 * * 

변수
    ㄴ 포인터 : 주소 값 저장을 위한 공간

    ex)
    int main(){

        int num = 7;
        int* pnum = &num;

        printf("%d\n", num);
        printf("%d", pnum);

        return 0;

    }
        

        < 결과 출력 >

        7        // printf("%d\n", num);
        6422036  //printf("%d", pnum);

        < 결과 해석 >
        
        포인터는 변수에 일종인데 메모리 직접 접근을 위하여
        변수를 설정하기 위해 포인터라는 개념을 도입한 것이다.
        변수라는 개념을 알면 포인터는 자동적으로 따라 올 것.

        100번의 자료보다 한 번 해보고 이해하는것이 빠르다.
        포인터의 개념을 이해하는데 너무 오랜 시간이 걸렸는데
        지금 생각하면 왜 이렇게 오래걸렸을까 라는 생각이 든다.

        글보다는 그림, 책 보다는 직접 해보는 실행

        < 정 리 >

        포인터 : 메모리 주소 값 저장하기 위한 변수



