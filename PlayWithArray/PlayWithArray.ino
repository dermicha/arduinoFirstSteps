
int disp[5][5] = {
  {1,2,3,4,5},
  {1,2,3,4,5},
  {1,2,3,4,5},
  {1,2,3,4,5},
  {1,2,3,4,5}
};

bool transp = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int x=0; x<5; x++) {
    for(int y=0; y<5; y++) {
      if(transp)
        Serial.print(disp[y][x], DEC);
      else
        Serial.print(disp[x][y], DEC);
      if(y < 4) 
        Serial.print(":");
    }
    Serial.println("");
  }
  
  transp = !transp;
  
  delay(2000);
}

