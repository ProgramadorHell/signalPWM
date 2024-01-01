//Señal pwm para servomotes
const int pinPWM1 = 9; // Definir el pin PWM (pines 3, 5, 6, 9, 10 y 11 son PWM)
const int pinPWM2 = 3;
const int pinPWM3 = 5;
int brillo = 0; // Variable para controlar el brillo del LED

void setup() {
  pinMode(pinPWM1, OUTPUT); // Configurar el pin PWM como salida
}

void loop() {
  for (brillo = 0; brillo <= 255; brillo += 5) { // Aumentar brillo gradualmente
    analogWrite(pinPWM1, brillo); // Establecer el brillo del LED
    //delay(50); // Esperar un breve tiempo
    analogWrite(pinPWM2, brillo); // Establecer el brillo del LED
    //delay(50); // Esperar un breve tiempo
    analogWrite(pinPWM3, brillo); // Establecer el brillo del LED
    delay(50); // Esperar un breve tiempo
  }
  for (brillo = 255; brillo >= 0; brillo -= 5) { // Disminuir brillo gradualmente
    analogWrite(pinPWM1, brillo); // Establecer el brillo del LED
   // delay(50); // Esperar un breve tiempo
    analogWrite(pinPWM2, brillo); // Establecer el brillo del LED
    //delay(50); // Esperar un breve tiempo
    analogWrite(pinPWM3, brillo); // Establecer el brillo del LED
    delay(50); // Esperar un breve tiempo
  }
}
