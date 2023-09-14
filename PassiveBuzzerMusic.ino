// Modified from code found at Techatronic.com by Robson Couto, 2019
// More of his songs available at https://github.com/robsoncouto/arduino-songs

#define NOTE_B0 31  
#define NOTE_C1 33  
#define NOTE_CS1 35  
#define NOTE_D1 37  
#define NOTE_DS1 39  
#define NOTE_E1 41  
#define NOTE_F1 44  
#define NOTE_FS1 46  
#define NOTE_G1 49  
#define NOTE_GS1 52  
#define NOTE_A1 55  
#define NOTE_AS1 58  
#define NOTE_B1 62  
#define NOTE_C2 65  
#define NOTE_CS2 69  
#define NOTE_D2 73  
#define NOTE_DS2 78  
#define NOTE_E2 82  
#define NOTE_F2 87  
#define NOTE_FS2 93  
#define NOTE_G2 98  
#define NOTE_GS2 104  
#define NOTE_A2 110  
#define NOTE_AS2 117  
#define NOTE_B2 123  
#define NOTE_C3 131  
#define NOTE_CS3 139  
#define NOTE_D3 147  
#define NOTE_DS3 156  
#define NOTE_E3 165  
#define NOTE_F3 175  
#define NOTE_FS3 185  
#define NOTE_G3 196  
#define NOTE_GS3 208  
#define NOTE_A3 220  
#define NOTE_AS3 233  
#define NOTE_B3 247  
#define NOTE_C4 262  
#define NOTE_CS4 277  
#define NOTE_D4 294  
#define NOTE_DS4 311  
#define NOTE_E4 330  
#define NOTE_F4 349  
#define NOTE_FS4 370  
#define NOTE_G4 392  
#define NOTE_GS4 415  
#define NOTE_A4 440  
#define NOTE_AS4 466  
#define NOTE_B4 494  
#define NOTE_C5 523  
#define NOTE_CS5 554  
#define NOTE_D5 587  
#define NOTE_DS5 622  
#define NOTE_E5 659  
#define NOTE_F5 698  
#define NOTE_FS5 740  
#define NOTE_G5 784  
#define NOTE_GS5 831  
#define NOTE_A5 880  
#define NOTE_AS5 932  
#define NOTE_B5 988  
#define NOTE_C6 1047  
#define NOTE_CS6 1109  
#define NOTE_D6 1175  
#define NOTE_DS6 1245  
#define NOTE_E6 1319  
#define NOTE_F6 1397  
#define NOTE_FS6 1480  
#define NOTE_G6 1568  
#define NOTE_GS6 1661  
#define NOTE_A6 1760  
#define NOTE_AS6 1865  
#define NOTE_B6 1976  
#define NOTE_C7 2093  
#define NOTE_CS7 2217  
#define NOTE_D7 2349  
#define NOTE_DS7 2489  
#define NOTE_E7 2637  
#define NOTE_F7 2794  
#define NOTE_FS7 2960  
#define NOTE_G7 3136  
#define NOTE_GS7 3322  
#define NOTE_A7 3520  
#define NOTE_AS7 3729  
#define NOTE_B7 3951  
#define NOTE_C8 4186  
#define NOTE_CS8 4435  
#define NOTE_D8 4699  
#define NOTE_DS8 4978  
#define REST 0  

 // change tempo to make the song slower or faster  
 int tempo1 = 140;  
 int tempo2 = 180;  
 int tempo3 = 140;  

 int buzzer = A0;  


 int melody1[] = {  
  // Score available at https://musescore.com/user/8221/scores/26906  
  NOTE_C4,4, NOTE_C4,8,   
  NOTE_D4,-4, NOTE_C4,-4, NOTE_F4,-4,  
  NOTE_E4,-2, NOTE_C4,4, NOTE_C4,8,   
  NOTE_D4,-4, NOTE_C4,-4, NOTE_G4,-4,  
  NOTE_F4,-2, NOTE_C4,4, NOTE_C4,8,  
  NOTE_C5,-4, NOTE_A4,-4, NOTE_F4,-4,   
  NOTE_E4,-4, NOTE_D4,-4, NOTE_AS4,4, NOTE_AS4,8,  
  NOTE_A4,-4, NOTE_F4,-4, NOTE_G4,-4,  
  NOTE_F4,-2,  
 };  
 int melody2[] = {  
  // Score available at https://musescore.com/user/29944637/scores/5266155  
  NOTE_E5, 8, NOTE_D5, 8, NOTE_FS4, 4, NOTE_GS4, 4,   
  NOTE_CS5, 8, NOTE_B4, 8, NOTE_D4, 4, NOTE_E4, 4,   
  NOTE_B4, 8, NOTE_A4, 8, NOTE_CS4, 4, NOTE_E4, 4,  
  NOTE_A4, 2,   
 };  
 int melody3[] = {  
  // Score available at https://musescore.com/user/6208766/scores/1497501  
  NOTE_C5,4, //1  
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,  
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,  
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,  
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,  
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,  
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,  
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,  
  NOTE_F5,4, NOTE_F5,4, NOTE_F5,4, 
  NOTE_E5,2, NOTE_E5,4,  
  NOTE_F5,4, NOTE_E5,4, NOTE_D5,4,  
  NOTE_C5,2, NOTE_A5,4,  
  NOTE_AS5,4, NOTE_A5,4, NOTE_G5,4,  
  NOTE_C6,4, NOTE_C5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,   
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,  
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,  
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,  
  NOTE_F5,4, NOTE_F5,4, NOTE_F5,4,  
  NOTE_E5,2, NOTE_E5,4,  
  NOTE_F5,4, NOTE_E5,4, NOTE_D5,4,  
  NOTE_C5,2, NOTE_A5,4, 
  NOTE_AS5,4, NOTE_A5,4, NOTE_G5,4,  
  NOTE_C6,4, NOTE_C5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,   
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,  
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,   
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, NOTE_C5,4,  
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,  
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,  
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,  
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,  
  NOTE_F5,2, REST,4  
 };  

 int notes1 = sizeof(melody1) / sizeof(melody1[0]) / 2;  
 int notes2 = sizeof(melody2) / sizeof(melody2[0]) / 2;  
 int notes3 = sizeof(melody3) / sizeof(melody3[0]) / 2;  

 int wholenote1 = (60000 * 4) / tempo1;  
 int wholenote2 = (60000 * 4) / tempo2;  
 int wholenote3 = (60000 * 4) / tempo3;  

 int divider = 0, noteDuration = 0;  

void setup() {  
  Serial.begin(9600);  
  Serial.println("Welcome to the Arduino Music Player");  
  Serial.println("Press a to play HAPPY BIRTHDAY TUNE");  
  Serial.println("Press b to play NOKIA TUNE");  
  Serial.println("Press c to play Merry CHRISTMAS TUNE");  
}

void loop(){  
  if( Serial.available() > 0){  
    int value= Serial.read();  
    switch (value){  
      case 'a':
        Serial.println("PLAYING HAPPY BIRTHDAY TUNE");  
        for (int thisNote = 0; thisNote < notes1 * 2; thisNote = thisNote + 2) {  
          divider = melody1[thisNote + 1];  
          if (divider > 0) {  
            noteDuration = (wholenote1) / divider;  
          }
          else if (divider < 0) {  
            noteDuration = (wholenote1) / abs(divider);  
            noteDuration *= 1.5;
          }  
          tone(buzzer, melody1[thisNote], noteDuration * 0.9);  
          delay(noteDuration);  
          noTone(buzzer);  
        }  
      break;  
    case 'b':  
      Serial.println("PLAYING NOKIA TUNE");    
      for (int thisNote = 0; thisNote < notes2 * 2; thisNote = thisNote + 2) {  
        divider = melody2[thisNote + 1];  
        if (divider > 0) {  
          noteDuration = (wholenote2) / divider;  
        }
        else if (divider < 0) {  
          noteDuration = (wholenote2) / abs(divider);  
          noteDuration *= 1.5;
        }  

        tone(buzzer, melody2[thisNote], noteDuration * 0.9);  
        delay(noteDuration);  
        noTone(buzzer);  
      }  
    break;  
    case 'c':  
      Serial.println("PLAYING MERRY CHRISTMAS TUNE");  
      for (int thisNote = 0; thisNote < notes3 * 2; thisNote = thisNote + 2) {  
        divider = melody3[thisNote + 1];  
        if (divider > 0) {  
          noteDuration = (wholenote3) / divider;  
        }
        else if (divider < 0) {  
          noteDuration = (wholenote3) / abs(divider);  
          noteDuration *= 1.5;
        }  
        tone(buzzer, melody3[thisNote], noteDuration * 0.9);  
        delay(noteDuration);  
        noTone(buzzer);  
      }  
    break;  
    }
  }  
}  
