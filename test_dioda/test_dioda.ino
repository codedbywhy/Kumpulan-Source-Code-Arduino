//program pembacaan nilai tegangan hasil dari sensor photodioda

void setup(void)
{

 //deklarasi untuk setting komunikasi serial pada baudrate 9600

 Serial.begin(9600);

}

void loop(void)
{

 int pinRead0 = analogRead(A0);
//pembacaan nilai ADC pada pin A0

 float pVolt0 = pinRead0 / 1024.0 * 5.0;    // konversi nilai ADC yang dibaca ke Volt

 Serial.print(pVolt0);    //menulis nilai konversi Volt melalui komunikasi serial

 Serial.println();

 delay(100);
 // menunggu selama 100 mili detik

}
