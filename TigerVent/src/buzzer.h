#ifndef buzzer_h
#define buzzer_h

using byte = unsigned char;

class Buzzer {

  public:
    Buzzer(byte pin);
    
    void alarmHigh();
    void alarmIncreasing();
    void alarmDecreasing();
    void alarmStop();

  private:
    byte _pin;

};


#endif