#include "pitches.h"

#define BUZZER_PIN 3


int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

const int songspeed = 1.5;
//Pirate SONG
int notes[] = {
  
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, 0, 
   NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 0,
   NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, 0,
   
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_D5, NOTE_E5, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, 0,
   NOTE_C5, NOTE_A4, NOTE_B4, 0,

   NOTE_A4, NOTE_A4, 
   //Repeat of first part
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,

   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_C5, NOTE_D5, NOTE_B4, NOTE_B4, 0,
   NOTE_A4, NOTE_G4, NOTE_A4, 0,
   
   NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_D5, NOTE_D5, 0, 
   NOTE_D5, NOTE_E5, NOTE_F5, NOTE_F5, 0,
   NOTE_E5, NOTE_D5, NOTE_E5, NOTE_A4, 0,
   
   NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, 0, 
   NOTE_D5, NOTE_E5, NOTE_A4, 0, 
   NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, 0,
   NOTE_C5, NOTE_A4, NOTE_B4, 0,
   //End of Repeat

   NOTE_E5, 0, 0, NOTE_F5, 0, 0,
   NOTE_E5, NOTE_E5, 0, NOTE_G5, 0, NOTE_E5, NOTE_D5, 0, 0,
   NOTE_D5, 0, 0, NOTE_C5, 0, 0,
   NOTE_B4, NOTE_C5, 0, NOTE_B4, 0, NOTE_A4,

   NOTE_E5, 0, 0, NOTE_F5, 0, 0,
   NOTE_E5, NOTE_E5, 0, NOTE_G5, 0, NOTE_E5, NOTE_D5, 0, 0,
   NOTE_D5, 0, 0, NOTE_C5, 0, 0,
   NOTE_B4, NOTE_C5, 0, NOTE_B4, 0, NOTE_A4
   
};

int duration[] = 
{
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125, 
  250, 125, 250, 125, 
  125, 125, 250, 125, 125,
  125, 125, 375, 375,

  250, 125,
  //Rpeat of First Part
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 375, 125, 
  
  125, 125, 250, 125, 125, 
  125, 125, 250, 125, 125,
  125, 125, 250, 125, 125,
  125, 125, 125, 250, 125,

  125, 125, 250, 125, 125, 
  250, 125, 250, 125, 
  125, 125, 250, 125, 125,
  125, 125, 375, 375,
  
  //End of Repeat
  
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500,

  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 125, 125, 125, 375,
  250, 125, 375, 250, 125, 375,
  125, 125, 125, 125, 125, 500
  
};


int draw;
int currentL = 1;

const int gameSpeed = 500;

int ledSeq[9] = {0, 0 ,0 ,0 ,0 ,0 ,0 ,0, 0};

int butSeq[9] = {0, 0 ,0 ,0 ,0 ,0 ,0 ,0, 0};

const int RED = 4;
const int GREEN = 8;
const int BLUE = 12;

const int BUT1 = 2;
const int BUT2 = 7;
const int BUT3 = 11;

int ledState1 = 0;
int ledState2 = 0;
int ledState3 = 0;

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

int obuttonState1 = 0;
int obuttonState2 = 0;
int obuttonState3 = 0;

void setup() {

  Serial.begin(19200);

  
  
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  pinMode(BUT1  , INPUT);
  pinMode(BUT2, INPUT);
  pinMode(BUT3, INPUT);
  randomSeed(analogRead(9));

  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(BUZZER_PIN);
  }

  delay(200);
  
  draw = random(1, 4);
  ledSeq[currentL-1]= draw;
  play(currentL);

  
  
}
int i = 1;

void nextLevel(){

  delay(gameSpeed);
  currentL += 1;
  draw = random(1, 4);
  ledSeq[currentL-1]= draw;
  play(currentL);
  
  }
void loop() {
  Serial.print(ledSeq[0]);
  /*
  buttonState1 = digitalRead(BUT1);
  buttonState2 = digitalRead(BUT2);
  buttonState3 = digitalRead(BUT3);


  if ((buttonState1 == HIGH)&& (obuttonState1 == LOW)){
    ledState1 = 1 - ledState1;
    }
  obuttonState1 = buttonState1;
  delay(10);
  
  if ((buttonState2 == HIGH)&& (obuttonState2 == LOW)){
    ledState2 = 1 - ledState2;
    }
  obuttonState2 = buttonState2;
  delay(10);
 
  if ((buttonState3 == HIGH)&& (obuttonState3 == LOW)){
    ledState3 = 1 - ledState3;
    }
  obuttonState3 = buttonState3;
  delay(10);
  
  if (ledState1 == HIGH) {
    digitalWrite(RED, HIGH);
  } else {
    digitalWrite(RED, LOW);
  }
  if (ledState2 == HIGH) {
    digitalWrite(GREEN, HIGH);
  } else {
    digitalWrite(GREEN, LOW);
  }
  if (ledState3 == HIGH) {
    digitalWrite(BLUE, HIGH);
  } else {
    digitalWrite(BLUE, LOW);
  }
  */
}

void recordButtonSeq(){
  int p = 1;
  while (p <= currentL){
    buttonState1 = digitalRead(BUT1);
    buttonState2 = digitalRead(BUT2);
    buttonState3 = digitalRead(BUT3);


    if ((buttonState1 == HIGH)&& (obuttonState1 == LOW)){
      butSeq[p-1] = 1;
      p += 1;
      }
    obuttonState1 = buttonState1;
    delay(10);
    
    if ((buttonState2 == HIGH)&& (obuttonState2 == LOW)){
      butSeq[p-1] = 2;
      p += 1;
      }
    obuttonState2 = buttonState2;
    delay(10);
   
    if ((buttonState3 == HIGH)&& (obuttonState3 == LOW)){
      butSeq[p-1] = 3;
      p += 1;
      }
    obuttonState3 = buttonState3;
    delay(10);
    
    
    }
    checkButtonSeq();
  }

void checkButtonSeq() {
   int check = 0;
   for (int i = 0; i < 9; i++) {
        if (ledSeq[i] == butSeq[i]) {
            check = 1;
            continue;
            
        }
        else if (ledSeq[i] != butSeq[i]) {

            check = 0;
            break;
            // stop at that wrong input
        }
  }


  if (check==0) {

    for (int i = 0; i < 4; i++){
      tone(BUZZER_PIN, melody[0], 1000 / noteDurations[0]);

            // to distinguish the notes, set a minimum time between them.
            // the note's duration + 30% seems to work well:
            
            delay(300);
            // stop the tone playing:
            noTone(BUZZER_PIN);

            delay(50);
            digitalWrite(RED, HIGH);
            digitalWrite(GREEN, HIGH);
            digitalWrite(BLUE, HIGH);
            
      }
      delay (200);
      digitalWrite(RED, LOW);
      digitalWrite(GREEN, LOW);
      digitalWrite(BLUE, LOW);
      while (1){
              continue;
              }
   
            
    }
  else if (check == 1) {
            
            Serial.print("Voila, You passed level: " + currentL-1);
            tone(BUZZER_PIN, melody[1], 1000 / noteDurations[1]);

            // to distinguish the notes, set a minimum time between them.
            // the note's duration + 30% seems to work well:
            
            delay(300);
            // stop the tone playing:
            noTone(BUZZER_PIN);

            delay(50);
            
            tone(BUZZER_PIN, melody[0], 1000 / noteDurations[0]);

            // to distinguish the notes, set a minimum time between them.
            // the note's duration + 30% seems to work well:
            
            delay(200);
            // stop the tone playing:
            noTone(BUZZER_PIN);

            if (currentL == 9) {

            delay(200);
            for (int i=0;i<203;i++)
            {
            if (i%3==0) {
              digitalWrite(RED, HIGH);
              digitalWrite(GREEN, LOW);
              digitalWrite(BLUE, LOW);
              }
            if (i%3==1) {
              digitalWrite(RED, LOW);
              digitalWrite(GREEN, HIGH);
              digitalWrite(BLUE, LOW);
              
              }
            if (i%3==2) {
              digitalWrite(RED, LOW);
              digitalWrite(GREEN, LOW);
              digitalWrite(BLUE, HIGH);
              }
            
            
            int wait = duration[i] * songspeed;
            tone(BUZZER_PIN,notes[i],wait);
            delay(wait);
            }
            
            digitalWrite(RED, LOW);
            digitalWrite(GREEN, LOW);
            digitalWrite(BLUE, LOW);
            
            while  (1) {
              continue;
              }
    
    }
            
            nextLevel();
    }

   
    
}
void play(int level){

  int t = 1;
  while(t <= level){
    
    playLED(ledSeq[t-1]);

    t++;
    }
  delay(10);
  recordButtonSeq(); 
}
void playLED(int k) {
    if (k==1){
      digitalWrite(RED, HIGH);
      delay(gameSpeed);
      digitalWrite(RED, LOW);
      delay(gameSpeed);
      }
      if (k==2){
      digitalWrite(GREEN, HIGH);
      delay(gameSpeed);
      digitalWrite(GREEN, LOW);
      delay(gameSpeed);
      }
      if (k==3){
      digitalWrite(BLUE, HIGH);
      delay(gameSpeed);
      digitalWrite(BLUE, LOW);
      delay(gameSpeed);
      }
    
  }
