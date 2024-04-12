/*
    KeyboardPico.h

    Modified by HisashiKato

    Modified by Earle F. Philhower, III <earlephilhower@yahoo.com>
    Main Arduino Library Copyright (c) 2015, Arduino LLC
    Original code (pre-library): Copyright (c) 2011, Peter Barrett

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#if !defined(ARDUINO_ARCH_RP2040) && defined(ARDUINO_ARCH_MBED)
#error KeyboardPico can only be used with Arduino Pico/RP2040.
#endif

#ifndef KEYBOARDPICO_h
#define KEYBOARDPICO_h

#include "HID_Keyboard_Pico.h"

class Keyboard_ : public HID_Keyboard_Pico {
protected:
    virtual void sendReport(KeyReport* keys) override;
    virtual void sendConsumerReport(uint16_t key) override;

public:
    Keyboard_(void);
};
extern Keyboard_ Keyboard;

#endif
