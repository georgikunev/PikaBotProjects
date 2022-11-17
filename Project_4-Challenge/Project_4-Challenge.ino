#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, NOTE_C4, NOTE_B3,
  0, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, NOTE_D4, NOTE_C4,
  0, NOTE_G3, NOTE_G3, NOTE_G4, NOTE_E4, NOTE_C4, NOTE_B3, NOTE_A3, //Happy Birthday song
  0, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_D4, NOTE_C4

};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 6, 3, 3, 3, 2, 5, 4, 6, 3, 3, 3, 2, 5, 4, 6, 3, 3, 3, 3, 2, 5, 4, 6, 3, 3, 3, 2
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 28; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(28);
  }
}

void loop() {
}
