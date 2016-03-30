/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2013 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * JavaScript Flash IO functions
 * ----------------------------------------------------------------------------
 */
#include "jsvar.h"

JsVar *jswrap_flash_getPage(int addr);
JsVar *jswrap_flash_getFree();
void jswrap_flash_erasePage(JsVar *addr);
void jswrap_flash_write(JsVar *data, int addr);
JsVar *jswrap_flash_read(int length, int addr);

/// Save contents of JsVars into Flash. If bootCode is specified, save bootup code too.
void jsfSaveToFlash(bool saveState, JsVar *bootCode);
/// Load the RAM image from flash (this is the actual interpreter state)
void jsfLoadStateFromFlash();
/// Load bootup code from flash (this is textual JS code). return true if it exists
bool jsfLoadBootCodeFromFlash();
/// Returns true if flash contains something useful
bool jsfFlashContainsCode();
