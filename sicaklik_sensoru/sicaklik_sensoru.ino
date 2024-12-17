
#define sensor A5
void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(8888);
}
float sensor_degeri;
float sensor_gerilim_degeri;
float sicaklik;
void loop()
{
  sensor_degeri=analogRead(sensor);
  sensor_gerilim_degeri=sensor_degeri*5./1023.0;
  sicaklik=(sensor_gerilim_degeri-0.5)*100;
  Serial.print("sicaklik degeri:");
  Serial.println(sicaklik);
  delay(1000);
  
}