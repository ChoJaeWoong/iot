int sw = 0;     //변수 지정
int x = 0;
int cnt = 0;
int button = 4;
int led = 2;
void setup()    
{
  pinMode(button, INPUT);   //BUTTON(핀4번)을 입력으로 지정
  pinMode(led, OUTPUT);     //LED(핀2번)을 출력으로 지정
  Serial.begin(9600);       //시리얼모니터 보드레이트 9600 설정
  Serial.println("41615084 조재웅"); //시리얼 모니터에 41615084 조재웅 출력
}

void loop()
{
  sw = digitalRead(button); //SW는 BUTTON으로 들어온 디지털 값을 받아 읽는다.
  if (sw == HIGH) {
    while (digitalRead(button) == HIGH) {
      delay(5); // Wait for 5 millisecond(s)
                            //만약 SW가 BUTTON 값을 HIGH를 읽었다면
                            //BUTTON의 값이 HIGH동안 유지한다.
    }
    if (x == HIGH) {
      x = LOW;
    cnt+=1;
    Serial.println(cnt);
                            //만약 X의 값이 HIGH라면 X의 값을 LOW로 바꿔주고
                            //변수 CNT의 값에 +1을 해준다.
                            //그리고 그 값을 시리얼 모니터에 출력한다.
 
    } else {
      x = HIGH;
    cnt+=1;
    Serial.println(cnt);
                            //만약 X의 값이 LOW라면 X의 값을 HIGH로 바꿔주고
                            //변수 CNT의 값에 +1을 해준다.
                            //그리고 그 값을 시리얼 모니터에 출력한다.
 
      
    }
  }
  if (x == HIGH) {
    digitalWrite(led, HIGH);
      } else {
    digitalWrite(led, LOW);
      }
  delay(1); // Wait for 1 millisecond(s)
}
                            //만약 X의 값이 HIGH라면 LED(PIN2번)에 HIGH 값을 준다.
                            //만약 X의 값이 HIGH가 아니라면 LED(PIN2번)에 LOW 값을 준다.
