#include <Arduino.h>
#include <Adafruit_TLC5947.h>

class RPM_Meter {
public:
  RPM_Meter(Adafruit_TLC5947 *tlcIN, uint16_t led1, uint16_t led2, uint16_t led3, uint16_t led4, uint16_t led5, uint16_t led6, uint16_t led7
    , uint16_t led8, uint16_t led9, uint16_t led10);

  boolean begin(void);

  void set(uint16_t rpm);
  void warning();
  void test();


private:
  uint16_t *leds;
  Adafruit_TLC5947 *tlc;
  uint16_t prevState;
};