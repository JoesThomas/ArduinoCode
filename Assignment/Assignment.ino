#define ledPinR 5
#define ledPinY 9
#define Potentiometer A0
#define ledPinB 11
#define irtrans A1
#define irreceive 2

int sensorValue = 0;

char acea[] = "+", aceb[] = "!!+", acec[] = "!+&", aced[] = "!+" , acee[] = "!", acef[] = "!+!", aceg[] = "++", aceh[] = "!++", acei[] = "!!";
char acej[] = "+!!", acek[] = "!&", acel[] = "!!&", acem[] = "+!", acen[] = "+&", aceo[] = "&+", acep[] = "&!", aceq[] = "+++", acer[] = "!&+";
char aces[] = "++!" , acet[] = "&" , aceu[] = "&&" , acev[] = "!&!" , acew[] = "+!&" , acex[] = "+&!" , acey[] = "!&&" , acez[] = "++&";

char ace1[] = "&!!+", ace2[] = "&!!&", ace3[] = "&!+!", ace4[] = "&!++", ace5[] = "&!+&", ace6[] = "&!&!", ace7[] = "&!&+", ace8[] = "&!&&", ace9[] = "&+!!", ace0[] = "&!!!";

char acestop[] = "&!!", acecomma[] = "&!+", aceapostrophe[] = "&+!", acequest[] = "&++", aceexclam[] = "&+&", aceplus[] = "&&+", aceminus[] = "&&!", acemultiply[] = "&&&";


char aceslash[] = "&!&", aceequal[] = "&+++&", acespacword[] = " ", acespacchar[] = "_";

String Input() {
  while (!Serial.available()) {

  }
  return Serial.readString();
}

String ascii2ace (String s) {

  String output = "";
  for (int i = 0; i < s.length(); i++) {
    output += char2ace(s[i]);
    if (s[i] != ' ' && s[i + 1] != ' ' && i < s.length() - 1) {
      output += '_';
    }
  }
  return output;
}

char * char2ace(char c) {

  c = tolower(c);

  switch (c) {

    case ('a'):
      return acea;

    case ('b'):
      return aceb;

    case ('c'):
      return acec;

    case ('d'):
      return aced;

    case ('e'):
      return acee;

    case ('f'):
      return acef;

    case ('g'):
      return aceg;

    case ('h'):
      return aceh;

    case ('i'):
      return acei;

    case ('j'):
      return acej;

    case ('k'):
      return acek;

    case ('l'):
      return acel;

    case ('m'):
      return acem;

    case ('n'):
      return acen;

    case ('o'):
      return aceo;

    case ('p'):
      return acep;

    case ('q'):
      return aceq;

    case ('r'):
      return acer;

    case ('s'):
      return aces;

    case ('t'):
      return acet;

    case ('u'):
      return aceu;

    case ('v'):
      return acev;

    case ('w'):
      return acew;

    case ('x'):
      return acex;

    case ('y'):
      return acey;

    case ('z'):
      return acez;

    case ('1'):
      return ace1;

    case ('2'):
      return ace2;

    case ('3'):
      return ace3;

    case ('4'):
      return ace4;

    case ('5'):
      return ace5;

    case ('6'):
      return ace6;

    case ('7'):
      return ace7;

    case ('8'):
      return ace8;

    case ('9'):
      return ace9;

    case ('0'):
      return ace0;

    case ('.'):
      return acestop;

    case (','):
      return acecomma;

    case ('\''):
      return aceapostrophe;

    case ('?'):
      return acequest;

    case ('!'):
      return aceexclam;

    case ('+'):
      return aceplus;

    case ('-'):
      return aceminus;

    case ('*'):
      return acemultiply;

    case ('/'):
      return aceslash;

    case ('='):
      return aceequal;

    case (' '):
      return acespacword;

    case ('_'):
      return acespacchar;
  }
}

String ace2char(String text) {
  if(text == ""){
    return "";
  }
  else if (text == acea) {
    return "a";
  }
  else if (text == aceb) {
    return "b";
  }
  else if (text == acec) {
    return "c";
  }
  else if (text == aced) {
    return "d";
  }
  else if (text == acee) {
    return "e";
  }
  else if (text == acef) {
    return "f";
  }
  else if (text == aceg) {
    return "g";
  }
  else if (text == aceh) {
    return "h";
  }
  else if (text == acei) {
    return "i";
  }
  else if (text == acej) {
    return "j";
  }
  else if (text == acek) {
    return "k";
  }
  else if (text == acel) {
    return "l";
  }
  else if (text == acem) {
    return "m";
  }
  else if (text == acen) {
    return "n";
  }
  else if (text == aceo) {
    return "o";
  }
  else if (text == acep) {
    return "p";
  }
  else if (text == aceq) {
    return "q";
  }
  else if (text == acer) {
    return "r";
  }
  else if (text == aces) {
    return "s";
  }
  else if (text == acet) {
    return "t";
  }
  else if (text == aceu) {
    return "u";
  }
  else if (text == acev) {
    return "v";
  }
  else if (text == acew) {
    return "w";
  }
  else if (text == acex) {
    return "x";
  }
  else if (text == acey) {
    return "y";
  }
  else if (text == acez) {
    return "z";
  }
  else if (text == ace1) {
    return "1";
  }
  else if (text == ace2) {
    return "2";
  }
  else if (text == ace3) {
    return "3";
  }
  else if (text == ace4) {
    return "4";
  }
  else if (text == ace5) {
    return "5";
  }
  else if (text == ace6) {
    return "6";
  }
  else if (text == ace7) {
    return "7";
  }
  else if (text == ace8) {
    return "8";
  }
  else if (text == ace9) {
    return "9";
  }
  else if (text == ace0) {
    return "0";
  }
  else if (text == acestop) {
    return ".";
  }
  else if (text == acecomma) {
    return ",";
  }
  else if (text == aceapostrophe) {
    return "'";
  }
  else if (text == acequest) {
    return "?";
  }
  else if (text == aceexclam) {
    return "!";
  }
  else if (text == aceplus) {
    return "+";
  }
  else if (text == aceminus) {
    return "-";
  }
  else if (text == acemultiply) {
    return "*";
  }
  else if (text == aceslash) {
    return "/";
  }
  else if (text == aceequal) {
    return "=";
  }
  else if (text == acespacchar) {
    return "";
  }
  else if (text == acespacword) {
    return " ";
  }
}

String ace2string(String ace) {
  String A = "";
  String B = "";

  for (int i = 0; i < ace.length(); i++) {
    if (ace[i] == '+' || ace[i] == '!' || ace[i] == '&') {
      A += ace[i];
    } else if (ace[i] == '_') {
      B += ace2char(A);
      A = "";
    } else if (ace[i] == ' ') {
      B += ace2char(A);
      B += " ";
      A = "";
    }
  }
  B += ace2char(A);

  return B;
}

int potent() {
  int val = analogRead(0);
  val = map(val, 20, 500, 20, 125);
  return val;
}

void sendDigital(int pin, String message) {
  for (int i = 0; i < message.length(); i++) {
    int pot = potent();
    int exclamation = pot;
    int plus = pot * 2;
    int andsymbol = pot * 4;
    int disbetsigs = pot;
    int underscore = pot * 3;
    int space = pot * 5;
    if (message[i] == '!') {
      digitalWrite(pin, HIGH);
      delay(exclamation);
      digitalWrite(pin, LOW);
      delay(disbetsigs);
    }

    if (message[i] == '+') {
      digitalWrite(pin, HIGH);
      delay(plus);
      digitalWrite(pin, LOW);
      delay(disbetsigs);
    }

    if (message[i] == '&') {
      digitalWrite(pin, HIGH);
      delay(andsymbol);
      digitalWrite(pin, LOW);
      delay(disbetsigs);
    }

    if (message[i] == '_') {
      digitalWrite(pin, LOW);
      delay(underscore);
    }

    else if (message[i] == ' ') {
      digitalWrite(pin, LOW);
      delay(space);
    }
  }
}

bool choose(String a) {
  if (a[1] == '+' || a[1] == '&' || a[1] == '!') {
  return true;
}
  else;
  return false;
}

void checkace(String message){
  if (message == "!!_!&+_&_+&!") {
    tone(irtrans, 38, 1500);
    noTone(irtrans);
  }
  if (message == "!!_!&+_!&+_+&!") {
    digitalRead(irreceive);
    while(irreceive == HIGH); {
    Serial.println("HIGH"); 
    }
    while(irreceive == LOW); {
    Serial.println("LOW"); 
    }
  }
//  if (message == "&!_!&!") {
//   sendDigital(ledPinY, Potentiometer);
  }
   
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPinR, OUTPUT);

}



void loop() {
  // put your main code here, to run repeatedly:
  String message = Input();
  if (choose(message) == true) {
    String text = ace2string(message);
    Serial.println(text);
    sendDigital(ledPinB, message);
    checkace(message);
  } else if (choose(message) == false) {
    String morse = ascii2ace(message);
    Serial.println(morse);
    sendDigital(ledPinR, morse);
  }
}
