/*
 * AMLOGIC Audio/Video streaming port driver.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the named License,
 * or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Author:  Tim Yao <timyao@amlogic.com>
 *
 */

#ifndef VH264_4K2K_MC_H
#define VH264_4K2K_MC_H

extern const u32 vh264_4k2k_mc[0x1000];
extern const u32 vh264_4k2k_header_mc[0x400];
extern const u32 vh264_4k2k_mmco_mc[0x800];
extern const u32 vh264_4k2k_slice_mc[0x1000];

extern const u32 vh264_4k2k_mc_single[0x1000];
extern const u32 vh264_4k2k_header_mc_single[0x400];
extern const u32 vh264_4k2k_mmco_mc_single[0x800];
extern const u32 vh264_4k2k_slice_mc_single[0x1000];

#endif
