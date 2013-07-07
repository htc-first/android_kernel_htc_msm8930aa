/* budget-ci-old.h - Keytable for budget_ci_old Remote Controller
 *
 * keymap imported from ir-keymaps.c
 *
 * Copyright (c) 2010 by Mauro Carvalho Chehab <mchehab@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include <media/rc-map.h>
#include <linux/module.h>


static struct rc_map_table budget_ci_old[] = {
	{ 0x00, KEY_0 },
	{ 0x01, KEY_1 },
	{ 0x02, KEY_2 },
	{ 0x03, KEY_3 },
	{ 0x04, KEY_4 },
	{ 0x05, KEY_5 },
	{ 0x06, KEY_6 },
	{ 0x07, KEY_7 },
	{ 0x08, KEY_8 },
	{ 0x09, KEY_9 },
	{ 0x0a, KEY_ENTER },
	{ 0x0b, KEY_RED },
	{ 0x0c, KEY_POWER },		
	{ 0x0d, KEY_MUTE },
	{ 0x0f, KEY_A },		
	{ 0x10, KEY_VOLUMEUP },
	{ 0x11, KEY_VOLUMEDOWN },
	{ 0x14, KEY_B },
	{ 0x1c, KEY_UP },
	{ 0x1d, KEY_DOWN },
	{ 0x1e, KEY_OPTION },		
	{ 0x1f, KEY_BREAK },
	{ 0x20, KEY_CHANNELUP },
	{ 0x21, KEY_CHANNELDOWN },
	{ 0x22, KEY_PREVIOUS },		
	{ 0x24, KEY_RESTART },
	{ 0x25, KEY_OK },
	{ 0x26, KEY_CYCLEWINDOWS },	
	{ 0x28, KEY_ENTER },		
	{ 0x29, KEY_PAUSE },
	{ 0x2b, KEY_RIGHT },
	{ 0x2c, KEY_LEFT },
	{ 0x2e, KEY_MENU },		
	{ 0x30, KEY_SLOW },
	{ 0x31, KEY_PREVIOUS },		
	{ 0x32, KEY_REWIND },
	{ 0x34, KEY_FASTFORWARD },
	{ 0x35, KEY_PLAY },
	{ 0x36, KEY_STOP },
	{ 0x37, KEY_RECORD },
	{ 0x38, KEY_TUNER },		
	{ 0x3a, KEY_C },
	{ 0x3c, KEY_EXIT },
	{ 0x3d, KEY_POWER2 },
	{ 0x3e, KEY_TUNER },
};

static struct rc_map_list budget_ci_old_map = {
	.map = {
		.scan    = budget_ci_old,
		.size    = ARRAY_SIZE(budget_ci_old),
		.rc_type = RC_TYPE_UNKNOWN,	
		.name    = RC_MAP_BUDGET_CI_OLD,
	}
};

static int __init init_rc_map_budget_ci_old(void)
{
	return rc_map_register(&budget_ci_old_map);
}

static void __exit exit_rc_map_budget_ci_old(void)
{
	rc_map_unregister(&budget_ci_old_map);
}

module_init(init_rc_map_budget_ci_old)
module_exit(exit_rc_map_budget_ci_old)

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
