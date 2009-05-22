/*
 * libcsync -- a library to sync a directory with another
 *
 * Copyright (c) 2008      by Andreas Schneider <mail@cynapses.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _CSYNC_CONFIG_H
#define _CSYNC_CONFIG_H

/**
 * @internal
 *
 * @brief Load the csync configuration.
 *
 * @param  ctx          The csync context to use.
 *
 * @param  config       The path to the config file.
 *
 * @return 0 on success, < 0 on error.
 */
int csync_config_load(CSYNC *ctx, const char *config);

#endif /* _CSYNC_X_H */
/* vim: set ft=c.doxygen ts=8 sw=2 et cindent: */
