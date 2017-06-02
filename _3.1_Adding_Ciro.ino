int myValue = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  Serial.print("myValue = ");
  Serial.println(myValue);
  
  myValue = 1+2;
  Serial.print("Add: ");
  Serial.println(myValue);
  
  myValue = 3-2;
  Serial.print("Substract: ");
  Serial.println(myValue);
  
  myValue = 3*2;
  Serial.print("Multiplying: ");
  Serial.println(myValue);
  
  myValue = 3/2;
  Serial.print("Dividing: ");
  Serial.println(myValue);
  
  myValue = 3%2;
  Serial.print("Residuo: ");
  Serial.println(myValue);

  int px = 4;
  Serial.print("Pow: ");
  int aux = pow(px, 3);
  Serial.println(aux);

  Serial.print("Square root of 9:");
  Serial.println(sqrt(9));

  Serial.print("Random number between 1 - 90: ");
  Serial.println(random(1, 90));
}

void loop() {
  // put your main code here, to run repeatedly:
}
