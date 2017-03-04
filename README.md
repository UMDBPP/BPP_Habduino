The Balloon Payload Progam uses HABduino radio modules for tracking.
These modules operate on the 2 m and 70 cm amatuer (HAM) bands. We use only the 2 m (144.390 MHz) APRS signals.
To change the callsign on a module, amend two and only two lines in the sketch, both identified with the tag "SSL/BPP" in the comments. The first line is in the top of the main sketch, where the char array callsign is defined. Change this value to to the full callsign of the module, including the dash number (e.g., "W3EAX-20"). The second line is in ax25modem.h. This file controls configuration parameters for the APRS transceiver, which is a non-default option on the HABduinos. Change the definition of APRS_SSID to the dash number of the callsign. For example, if the callsign is W3EAX-20, the SSID should be 20. Do not change the value of APRS_CALLSIGN from W3EAX unless you intend to fly the module under an entirely different callsing. If you do change the callsign, DO NOT include the dash number in APRS_CALLSIGN. If you need to change the callsign to AB0CDE-4, APRS_CALLSIGN should be "AB0CDE" and APRS_SSID should be 4.
If APRS does not seem to be transmitting, verify that the line "#define APRS" appears in ax25modem.h.