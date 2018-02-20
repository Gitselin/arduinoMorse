void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  stringToMorse("helloworld");
  delay(3000);
}

static void stringToMorse(const char *string){
  size_t len = strlen(string);
  for (int i = 0; i < len; i++){
    const char c = string[i];
    switch(c){
      case 'a':
        blink(true,1);
        blink(false,1);
        break;
      case 'b':
        blink(false,1);
        blink(true, 3);
        break;
      case 'c':
        blink(false,1);
        blink(true,1);
        blink(false,1);
        blink(true,1);
        break;
      case 'd':
        blink(false,1);
        blink(true,2);
        break;
      case 'e':
        blink(true,1);
        break;
      case 'f':
        blink(true,2);
        blink(false,1);
        blink(true,1);
        break;
      case 'g':
        blink(false,2);
        blink(true,1);
        break;
      case 'h':
        blink(true,4);
        break;
      case 'i':
        blink(true,2);
        break;
      case 'j':
        blink(true,1);
        blink(false,3);
        break;
      case 'k':
        blink(false,1);
        blink(true,1);
        blink(false,1);
        break;
      case 'l':
        blink(true,1);
        blink(false,1);
        blink(true,2);
        break;
      case 'm':
        blink(false,2);
        break;
      case 'n':
        blink(false,1);
        blink(true,1);
        break;
      case 'o':
        blink(false,3);
        break;
      case 'p':
        blink(true,1);
        blink(false,2);
        blink(true,1);
        break;
      case 'q':
        blink(false,2);
        blink(true,1);
        blink(false,1);
        break;
      case 'r':
        blink(true,1);
        blink(false,1);
        blink(true,1);
        break;
      case 's':
        blink(true,3);
        break;
      case 't':
        blink(false,1);
        break;
      case 'u':
        blink(true,2);
        blink(false,1);
        break;
      case 'v':
        blink(true,3);
        blink(false,1);
        break;
      case 'w':
        blink(true,1);
        blink(false,2);
        break;
      case 'x':
        blink(false,1);
        blink(true,2);
        blink(false,1);
        break;
      case 'y':
        blink(false,1);
        blink(true,1);
        blink(false,2);
        break;
      case 'z':
        blink(false,2);
        blink(true,2);
        break;
      case ' ':
        delay(3000);
        break;     
    }

    delay(2000);
    
  }
}

static void blink(bool fast, int amount){
  int time = 500;
  if(fast){
    time = 100;
  }

  for(int i = 0; i < amount; i++){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(time);
    digitalWrite(LED_BUILTIN, LOW);
    delay(time);
  }
}


