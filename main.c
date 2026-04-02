#include <stdio.h>
#include "pico/stdlib.h"

#define LED_PIN         PICO_DEFAULT_LED_PIN
#define BLINK_MS        500u
#define GREET_MS        2000u

int main(void) {
    stdio_init_all();

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    bool led_on = false;
    uint32_t last_blink  = 0;
    uint32_t last_greet  = 0;

    while (true) {
        uint32_t now = to_ms_since_boot(get_absolute_time());

        if (now - last_blink >= BLINK_MS) {
            led_on = !led_on;
            gpio_put(LED_PIN, led_on);
            last_blink = now;
        }

        if (now - last_greet >= GREET_MS) {
            printf("Hello from the Pico!\n");
            last_greet = now;
        }
    }

    return 0;
}
