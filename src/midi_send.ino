#include <MIDI.h>

 // Created and binds the MIDI interface to the default hardware Serial port
 MIDI_CREATE_DEFAULT_INSTANCE();

 void setup()
 {
     MIDI.begin(MIDI_CHANNEL_OMNI);  // Listen to all incoming messages
 }

 void loop()
 {
     // Send note 42 with velocity 127 on channel 1
     MIDI.sendNoteOn(42, 127, 1);

     // Read incoming messages
     delay(100);

     MIDI.sendNoteOff(42, 127, 1);

     delay(100);

     MIDI.sendProgramChange(12,1);

     delay(100);
 }
