byte btn;
byte pins[7]={13, 12, 11, 10, 9, 8, 7};
byte show[16][7]={
  {0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 1, 1, 1, 1},
  {0, 0, 1, 0, 0, 1, 0},
  {0, 0, 0, 0, 1, 1, 0},
  {1, 0, 0, 1, 1, 0, 0},
  {0, 1, 0, 0, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0},
  {0, 0, 0, 1, 0, 0, 0},
  {1, 1, 0, 0, 0, 0, 0},
  {0, 1, 1, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {0, 1, 1, 1, 0, 0, 0},
};

void setup()
{
  pinMode(3, INPUT_PULLUP);
  for (byte i = 0; i < 7; ++i) {
   pinMode(pins[i], OUTPUT); 
  }
}

void loop()
{
   btn = digitalRead(3);
  if(btn == HIGH){   
digitalWrite(3, HIGH);
 
  }
  else{
       
    
    
     for(byte i = 0; i < 16; i++){
    for(byte j = 0; j < 7; j++){
      digitalWrite(pins[j], show[i][j]);
    }
    delay(1000);
  } 
  }
}
