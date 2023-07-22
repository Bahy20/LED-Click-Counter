int yellow = 8 ;
int blue = 9 ;
int red = 10 ;
int counter = 0 ;
int reading = 0 ; 
void setup() {
pinMode ( yellow , OUTPUT ) ;
pinMode ( blue , OUTPUT ) ;
pinMode ( red , OUTPUT) ;
pinMode ( 12 , INPUT ) ;
}

void loop() {
reading = digitalRead(12) ;
if (reading == HIGH )
{
  counter++ ;
  if ( counter ==1){
    digitalWrite( yellow , HIGH );
  }
  else if ( counter == 2) {
    digitalWrite( blue , HIGH ) ;
  }
  else if (counter ==3 ) {
    digitalWrite (red , HIGH );
  }
  else {
    digitalWrite( yellow , LOW) ; digitalWrite( blue , LOW) ; digitalWrite( red , LOW) ; counter = 0 ;
  }
   delay (350) ;
}

}
