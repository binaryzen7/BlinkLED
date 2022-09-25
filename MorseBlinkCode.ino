void setup() 
{
// The following programme code is to blink an in-built LED in Morse Code in my name written in English as 'GAURAV'.
pinMode(LED_BUILTIN, OUTPUT);
}

//Here, we define two void functions in order to specify it for the Morse Code blinking of the LED in the Arduino Nano 33 iOT.

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);   // Turns the LED on, voltage level is HIGH
  delay(1000);                       // LED will glow here for 1 second
  digitalWrite(LED_BUILTIN, LOW);    // Turns the LED off, voltage level is LOW
}
 void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);   // Turns the LED on, voltage level is HIGH
  delay(3000);                       // LED will glow here for 3 seconds
  digitalWrite(LED_BUILTIN, LOW);    // Turns the LED off, voltage level is LOW 
}
void loop()
{
/*
If we consider the spacing that is seen while anything is written in Morse Code, it is experienced that the ratio of the spaces between the words and the letters is 1:3,
The same ratio is expressed while declaring variables below.
Meaning, The space between parts of the same letter is one unit.
The space between letters is three units.
*/
int LetterSpaceTime = 500; // The Time duration between dot and dashes or vice versa of same letter is 0.5 seconds.
int WordSpaceTime = 1500; // The Time duration between two letters is 1.5 seconds.


// For the letter 'G'
dash();
delay(LetterSpaceTime);
dash();
delay(LetterSpaceTime);
dot();
delay(WordSpaceTime);

// For the letter 'A'
dot();
delay(LetterSpaceTime);
dash();
delay(WordSpaceTime);

// For the letter 'U'
dot();
delay(LetterSpaceTime);
dot();
delay(LetterSpaceTime);
dash();
delay(WordSpaceTime);

// For the letter 'R'
dot();
delay(LetterSpaceTime);
dash();
delay(LetterSpaceTime);
dot();
delay(WordSpaceTime);

// For the letter 'A'
dot();
delay(LetterSpaceTime);
dash();
delay(WordSpaceTime);

// For the letter 'V'
dot();
delay(LetterSpaceTime);
dot();
delay(LetterSpaceTime);
dot();
delay(LetterSpaceTime);
dash();
delay(WordSpaceTime);

}