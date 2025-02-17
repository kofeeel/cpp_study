/*주제: 제어문과 반복문 활용  (난이도: 초급)

문제: 1부터 입력받은 정수까지의 합을 구하는 프로그램을 작성하세요.

요구사항: 

사용자로부터 정수를 입력받습니다.
for 반복문을 사용하여 1부터 입력받은 정수까지의 합을 계산합니다.
계산된 합을 출력합니다.

예시:

정수를 입력하세요: 5
1부터 5까지의 합은 15입니다.

추가 과제 (선택 사항):

while 반복문을 사용하는 버전도 작성해 보세요.
1부터 입력받은 정수까지의 짝수의 합과 홀수의 합을 각각 구하는 프로그램을 작성해 보세요. */

#include <iostream>

using namespace std;

//for문
/*int main(){
    int a = 0;
    int sum = 0;
    cout << "정수를 입력하세요: \n";
    cin >> a;

    for(int i = 1; i <= a; i++){
        sum += i;
    }
    
    cout << "1부터 " << a << "까지의 합은 " << sum << "입니다" ;
    return 0;
} */
//while문
int main(){
    int b;
    
    cout << "정수를 입력하세요: \n";
    cin >> b;

    //입력값 검증
    if(b <= 0){
        cout << "잘못된 입력입니다. 1이상의 정수를 입력하세요\n";
        return 0; 
    }

    int num = 1;
    int sum = 0; 

    while(num <= b){
        sum += num;
        num++;
    }
    cout << "1부터 " << b << "까지의 합은 " << sum << "입니다" ;
    return 0;
}