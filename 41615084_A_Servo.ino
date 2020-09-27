#include <Servo.h>      //서보모터 헤더파일

int loc = 0;      //변수 loc , sw, x 지정
int sw = 0;       
int x = 0;    

Servo servo_3;    //서보 객체 선언

void setup()
{
  servo_3.attach(3);  //서보 모터 핀3번으로 지정

  pinMode(4, INPUT);  //디지털 신호 핀4번 값 입력
  Serial.begin(9600); //시리얼 출력 보드레이트 9600

}

void loop()
{
  loc = 30;             //변수 loc 30으로 지정
  servo_3.write(loc);   //loc 값으로 서보모터 위치 이동
  sw = digitalRead(4);  //변수 sw는 디지털 핀4번을 읽는다.
  if (sw == HIGH) {
    while (digitalRead(4) == HIGH) {
      delay(10); // 10밀리초 만큼 딜레이
                 //만약 SW가 BUTTON 값을 HIGH를 읽었다면
                 //BUTTON의 값이 HIGH동안 유지한다.
    }
    if (x == HIGH) {
      x = LOW;
                //만약 X의 값이 HIGH라면 X의 값을 LOW로 바꿔준다.
    } else {
      x = HIGH;
                //만약 X의 값이 HIGH라면 X의 값을 LOW로 바꿔준다.
    }
  }
  if (x == HIGH) {
    for (loc = 30; loc <= 150; loc += 1) {
      servo_3.write(loc);
      Serial.print("location : ");
      Serial.println(loc);
      delay(20); 
                 //x가 HIGH 값이 들어오면 위치를 30에서 150까지 1씩 증가한다.
                 //loc 값으로 서보모터를 움직인다.
                 //loc 값을 location : 의 값으로 시리얼 모니터에 출력한다.
    }
    delay(2000); // 2초간 딜레이
    for (loc = 150; loc >= 30; loc -= 1) {
      servo_3.write(loc);
      Serial.print("location : ");
      Serial.println(loc);
      delay(20); 
                 //x가 HIGH 값이 들어오면 위치를 150에서 30까지 1씩 감소한다.
                 //loc 값으로 서보모터를 움직인다.
                 //loc 값을 location : 의 값으로 시리얼 모니터에 출력한다.
      x = LOW;  //변수 x LOW값으로 지정
    }
  }
}
