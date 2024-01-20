//
// Copyright (c) 2021 Thomas Meschke
//
// MIT License
// https://opensource.org/licenses/mit-license.php
//

// LED pin definition from top left to bottom right
// according to the schematic
byte LEDS[][2] = {
    { PB0, PB3 },
    { PB0, PB2 },
    { PB0, PB1 },
    { PB1, PB3 },
    { PB1, PB2 },
    { PB1, PB0 },
    { PB2, PB3 },
    { PB2, PB1 },
    { PB2, PB0 },
    { PB3, PB2 },
    { PB3, PB1 },
    { PB3, PB0 },
};

void bar(int index) {
    for (int i = 0; i < index; i++) {
        pinMode(PB0, INPUT);
        pinMode(PB1, INPUT);
        pinMode(PB2, INPUT);
        pinMode(PB3, INPUT);
        pinMode(LEDS[i][0], OUTPUT);
        pinMode(LEDS[i][1], OUTPUT);
        digitalWrite(LEDS[i][0], LOW);
        digitalWrite(LEDS[i][1], HIGH);
    }
}

void dot(int index) {
    pinMode(PB0, INPUT);
    pinMode(PB1, INPUT);
    pinMode(PB2, INPUT);
    pinMode(PB3, INPUT);
    pinMode(LEDS[index - 1][0], OUTPUT);
    pinMode(LEDS[index - 1][1], OUTPUT);
    digitalWrite(LEDS[index - 1][0], LOW);
    digitalWrite(LEDS[index - 1][1], HIGH);
}

void setup() {}

void loop() {
    // turn on LED 1 to 6
    // bar(6)

    // turn on LED 6 only
    // dot(6);
}
