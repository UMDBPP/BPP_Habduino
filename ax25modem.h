/* University of Maryland Balloon Payload Program HABDuino Tracker       */
/* http://nearspace.umd.edu; http://ssl.umd.edu                          */
/* Copyright (c) 2017 University of Maryland Space Systems Laboratory    */
/*                                                                       */
/* See readme for details (http://github.com/UMDBPP/BPP_HABDUINO/).      */
/*                                                                       */
/* Modified clone of HABDuio project code; released under GNU GPL v3.    */
/* See HABDuino Project/Project Swift copyright notice below.            */


/* From Project Swift - High altitude balloon flight software            */
/*=======================================================================*/
/* Copyright 2010-2012 Philip Heron <phil@sanslogic.co.uk>               */
/*                     Nigel Smart <nigel@projectswift.co.uk>            */
/*                                                                       */
/* This program is free software: you can redistribute it and/or modify  */
/* it under the terms of the GNU General Public License as published by  */
/* the Free Software Foundation, either version 3 of the License, or     */
/* (at your option) any later version.                                   */
/*                                                                       */
/* This program is distributed in the hope that it will be useful,       */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of        */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         */
/* GNU General Public License for more details.                          */
/*                                                                       */
/* You should have received a copy of the GNU General Public License     */
/* along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#define APRS // Define to enable to APRS; comment out to disable. SSL/BPP leave enabled.

#ifndef __AX25MODEM_H
#define __AX25MODEM_H
#define APRS_TX_INTERVAL 1  // APRS TX Interval in minutes
#define APRS_CALLSIGN "W3EAX" // SSL/BPP DO NOT CHANGE
#define APRS_SSID (13) // SSL/BPP Change this number to change the dash number on a call sign; e.g. for W3EAX-17, change to 17

extern void ax25_init(void);
extern void ax25_frame(char *scallsign, char sssid, char *dcallsign, char dssid,
	char *path1, char ttl1, char *path2, char ttl2, char *data, ...);
extern char *ax25_base91enc(char *s, uint8_t n, uint32_t v);

#endif

