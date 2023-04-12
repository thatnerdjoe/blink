#include <Arduino.h>

#ifdef WROOM32
    const byte LED_BUILTIN = 2; 
#endif

void setup() {
    // put your setup code here, to run once:
    pinMode(LED_BUILTIN, OUTPUT);
}  

void loop() {
    // put your main code here, to run repeatedly:
    uint32_t default_delay_ms {5000};
    uint32_t short_delay_ms {100};

    for(int i=0;i<2;++i){
        digitalWrite(LED_BUILTIN, HIGH);
        delay(short_delay_ms);
        digitalWrite(LED_BUILTIN, LOW);
        delay(short_delay_ms);
    }

    delay(default_delay_ms);

}