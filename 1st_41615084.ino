int counter; //카운터 1 변수 지정

int counter2;//카운터 함수 2 변수 2지정

int counter3;//카운터 함수 3 변수 지정

void setup()
{
  pinMode(13, OUTPUT);  //pin번호 13번 led지정 및 출력값 설정
}

void loop()
{
  for (counter = 0; counter < 3; ++counter) {     //카운터1 함수가 0이고 3미만이 될때까지 반복
    digitalWrite(13, HIGH);                       //pin번호 13번 출력값 on
    delay(200); // Wait for 200 millisecond(s)
    digitalWrite(13, LOW);                        //pin번호 13번 출력값 off
    delay(100); // Wait for 100 millisecond(s)
    delay(300); // Wait for 300 millisecond(s)
  }
  for (counter2 = 0; counter2 < 3; ++counter2) {  //카운터2 함수가 0이고 3미만이 될때까지 반복
    digitalWrite(13, HIGH);                       //pin번호 13번 출력값 on
    delay(600); // Wait for 600 millisecond(s)
    digitalWrite(13, LOW);                        //pin번호 13번 출력값 off
    delay(100); // Wait for 100 millisecond(s)
    delay(300); // Wait for 300 millisecond(s)
  }
  for (counter3 = 0; counter3 < 3; ++counter3) {  //카운터3 함수가 0이고 3미만이 될때까지 반복
    digitalWrite(13, HIGH);                       //pin번호 13번 출력값 on
    delay(200); // Wait for 200 millisecond(s)
    digitalWrite(13, LOW);                        //pin번호 13번 출력값 off
    delay(100); // Wait for 100 millisecond(s)
    delay(300); // Wait for 300 millisecond(s)
  }
}
