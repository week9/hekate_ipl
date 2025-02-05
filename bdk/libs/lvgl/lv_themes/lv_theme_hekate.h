/*
 * Copyright (c) 2018-2019 CTCaer
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LV_THEME_HEKATE_H
#define LV_THEME_HEKATE_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#ifdef LV_CONF_INCLUDE_SIMPLE
#include "lv_conf.h"
#else
#include "../../lv_conf.h"
#endif

#if USE_LV_THEME_HEKATE

/*********************
 *      DEFINES
 *********************/
#define COLOR_HOS_BG_BASE_DEFAULT 0x1B1B1B
#define COLOR_HOS_BG_BASE_BLACK   0x000000

#define COLOR_HOS_BG_DARKER    0x1B1B1B
#define COLOR_HOS_BG_DARK      0x222222
#define COLOR_HOS_BG           0x2D2D2D
#define COLOR_HOS_BG_LIGHT     0x3D3D3D
#define COLOR_HOS_LIGHT_BORDER 0x4D4D4D

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

extern uint32_t theme_bg_color;

/**
 * Initialize the material theme
 * @param hue [0..360] hue value from HSV color space to define the theme's base color
 * @param font pointer to a font (NULL to use the default)
 * @return pointer to the initialized theme
 */
lv_theme_t * lv_theme_hekate_init(uint32_t bg_color, uint16_t hue, lv_font_t *font);

/**
 * Get a pointer to the theme
 * @return pointer to the theme
 */
lv_theme_t * lv_theme_get_hekate(void);

/**********************
 *      MACROS
 **********************/

#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_THEME_MATERIAL_H*/
