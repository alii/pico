#include <time.h>
#include <stdlib.h>
#include "pico/stdlib.h"

const uint16_t DELAYS[] = {100, 250, 300, 350, 400, 500, 750, 300};
const int SIZE = sizeof(DELAYS) / sizeof(DELAYS[0]);

/**
 * Gets a random delay to be used as an interval between LED flashes
 */
uint16_t get_delay() {
  return DELAYS[rand() % SIZE];
}
