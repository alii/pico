#include <stdio.h>
#include <stdlib.h>

#include "pico/stdlib.h"
#include "delay.h"

int main() {
	stdio_init_all();

	const uint LED_PIN = 25;

	time_t t;
	srand((unsigned) time(&t));

	gpio_init(LED_PIN);
	gpio_set_dir(LED_PIN, GPIO_OUT);

	while (true) {
		sleep_ms(get_delay());
		gpio_put(LED_PIN, 1);
		sleep_ms(get_delay());
		gpio_put(LED_PIN, 0);
	}

	return 0;
}
