/* 
 * WCD9320 Taiko Audio Mod Controls(TAMOD)
 * 
 * 	Author: Cezar Rey Templonuevo <zeroblade1984@gmail.com>
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

extern struct snd_soc_codec *wcd9320_codec;

extern bool hp_digigain_con;
extern bool hp_toggle;
extern u32 hp_digigain;

/* Register defaults */
#define TAIKO_A_CDC_RXX_VOL_MASK		0x7F
#define TAIKO_A_CDC_RX_VOL_CTL_B2_CTL_DEF	0x00

int taiko_write(struct snd_soc_codec *codec, unsigned int reg,
			unsigned int value);
