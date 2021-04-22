char signl = 0;                //Variable for storing received data

void setup() {
  
Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
pinMode(8, OUTPUT);        //Sets digital pin 13 as output pin
digitalWrite(8,HIGH);
  }
void loop(){
  
if(Serial.available() > 0)  // Send data only when you receive data:

{  
signl = Serial.read();      //Read the incoming data and store it into variable data
Serial.print(signl);        //Print Value inside data in Serial monitor
Serial.print("\n");        //New line 

if(signl == '1')            //Checks whether value of data is equal to 1 
digitalWrite(8, LOW);     // change HIGH Low with your relay type
  

else if(signl == '0')       //Checks whether value of data is equal to 0
digitalWrite(8 ,HIGH);   //If value is 0 then LED turns OFF
}                            

  }
