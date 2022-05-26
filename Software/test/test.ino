#define pin_A0 8
#define pin_A1 9
#define pin_A2 10

#define pin_EN 11
#define pin_ADC 7

int buffer_ = 0;

int data_array[8];

void write_data(char number);

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_A0, OUTPUT);
  pinMode(pin_A1, OUTPUT);
  pinMode(pin_A2, OUTPUT);
  pinMode(pin_EN, OUTPUT);
  pinMode(pin_ADC, INPUT);
  digitalWrite(pin_EN, LOW);
  Serial.begin(9600);
  Serial.println("########");
}

void loop() {
  // put your main code here, to run repeatedly:
  char count = 0;
  for(int i = 0; i < 8; i++){
    write_data(count);
    delay(10);
    buffer_ = analogRead(pin_ADC);
    Serial.println(buffer_);
    Serial.println((int) count);
    //Serial.println("##");
    delay(10);
    count++;
  }
  Serial.println("########");
  delay(1000);
}

void write_data(char number){
  digitalWrite(pin_A0, number & 1);
  digitalWrite(pin_A1, (number & 2) >> 1);
  digitalWrite(pin_A2, (number & 4) >> 2);
  //Serial.println(number & 1);
  //Serial.println((number & 2) >> 1);
  //Serial.println((number & 4) >> 2);
}
