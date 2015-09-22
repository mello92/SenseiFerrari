/*
* Copyright (c) 2015, Haikal Izzuddin *haikalizz* <haikal@webhaikal.com>
*
* Charger Control driver for smb1360-charger-fg
*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __CHARGER_CONTROL_H__

#define __CHARGER_CONTROL_H__

extern int custom_current;
extern int master_switch;

int check_switch_validity(int input_switch);
int check_current_limits(int input_current);
#endif
