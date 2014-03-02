/*
 * This file is part of MPlayer.
 *
 * MPlayer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * MPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with MPlayer; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPLAYER_PARSER_MPCMD_H
#define MPLAYER_PARSER_MPCMD_H

#include "playtree.h"
#include "m_config.h"

play_tree_t *m_config_parse_mp_command_line(m_config_t *config, int argc,
                                            char **argv);
int m_config_preparse_command_line(m_config_t *config, int argc, char **argv,
                                   int *verbose);

#endif /* MPLAYER_PARSER_MPCMD_H */
