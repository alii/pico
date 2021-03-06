#include <time.h>
#include <stdlib.h>
#include <time.h>

#include "pico/stdlib.h"
#include "util.h"

const uint16_t DELAYS[] = {100, 250, 300, 350, 400, 500, 750, 300};
const int SIZE = ARR_LENGTH(DELAYS);

uint16_t get_delay() {
	return DELAYS[rand() % SIZE];
}
