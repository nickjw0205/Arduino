
#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN    9
#define SS_PIN    10
MFRC522 mfrc522(SS_PIN, RST_PIN); // 모듈의 인스턴스 생성

void setup() {
  Serial.begin(9600);   // 시리얼 모니터 통신속도 설정
  while (!Serial);    // 통신이 테스트
  SPI.begin();      // SPI 준비
  mfrc522.PCD_Init();   // RFID모듈 준비
  ShowReaderDetails();  // 모듈의 정보 표시
  Serial.println(F("Scan PICC to see UID, type, and data blocks..."));
}
/*
UID를 읽어온다. 카드와 카드키 뿐만 아니라 핸드폰, 교통카드도 읽어온다
*/
void loop() {
  
  if ( ! mfrc522.PICC_IsNewCardPresent()) { //새 카드를 찾는 함수호출
    return;
  }
        
  if ( ! mfrc522.PICC_ReadCardSerial()) {  //카드의 정보를 읽어오는 함수호출
    return;
  }
        
        mfrc522.PICC_DumpToSerial(&(mfrc522.uid));  //mfrc522.uid에 들어있는 카드 ID를 시리얼 모니터에 뿌린다
        delay(500);
}

void ShowReaderDetails() {
  // 모듈의 소프트웨어 버전을 확인합니다.
  byte v = mfrc522.PCD_ReadRegister(mfrc522.VersionReg);
  Serial.print(F("MFRC522 Software Version: 0x"));
  Serial.print(v, HEX);
  if (v == 0x91)
    Serial.print(F(" = v1.0"));
  else if (v == 0x92)
    Serial.print(F(" = v2.0"));
  else
    Serial.print(F(" (unknown)"));
  Serial.println("");
  // 반환되는 값이 0x00 또는 0xFF일경우 통신이 정상적이지 않을 수 있습니다.
  if ((v == 0x00) || (v == 0xFF)) {
    Serial.println(F("WARNING: Communication failure, is the MFRC522 properly connected?"));
  }
}
