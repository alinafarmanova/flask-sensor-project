const int dry = 595; // this is the max value for dryness that the sensor reads (dependent on the sensor)
const int wet = 239; // this is the max value for wetness that the sensor reads (dependent on the sensor)

void setup() // this initiates the code 
{
   Serial.begin(9600); // 9600 bd is the speed of communication 
}
 
 void loop() 
 {
   int sensorVal = analogRead(A0); // AO is the Arduino port from which the value is communicated
 
   int percentageHumididy = map(sensorVal, wet, dry, 100, 0); // converting the sensor values to % of wetness of the soil
 
   Serial.print(percentageHumididy);
   Serial.println("%");
   
   delay(1000); // data displays every 1000 ms or 1 s
 }
