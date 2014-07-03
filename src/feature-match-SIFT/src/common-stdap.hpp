/*
 * common-stdap - Standard argument and parameter handler
 *
 * Copyright (c) 2013-2014 FOXEL SA - http://foxel.ch
 * Please read <http://foxel.ch/license> for more information.
 *
 *
 * Author(s):
 *
 *      Nils Hamel <n.hamel@foxel.ch>
 *
 *
 * This file is part of the FOXEL project <http://foxel.ch>.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * Additional Terms:
 *
 *      You are required to preserve legal notices and author attributions in
 *      that material or in the Appropriate Legal Notices displayed by works
 *      containing it.
 *
 *      You are required to attribute the work as explained in the "Usage and
 *      Attribution" section of <http://foxel.ch/license>.
 */


/* 
    Header - Include guard
 */

    # ifndef __COMMON_STDAP__
    # define __COMMON_STDAP__

/* 
    Header - Includes
 */

    # include <cstdlib>
    # include <cstring>

/* 
    Header - Preprocessor definitions
 */

    /* Define standard types */
    # define __STDA_NULL 0
    # define __STDP_STRING      1
    # define __STDP_CHAR        2
    # define __STDP_SHORT       3
    # define __STDP_INT         4
    # define __STDP_LONG        5
    # define __STDP_LLONG       6
    # define __STDP_UCHAR       7
    # define __STDP_USHORT      8
    # define __STDP_UINT        9
    # define __STDP_ULONG      10
    # define __STDP_ULLONG     11
    # define __STDP_FLOAT      12
    # define __STDP_DOUBLE     13

/* 
    Header - Preprocessor macros
 */

/* 
    Header - Typedefs
 */

/* 
    Header - Structures
 */

/* 
    Header - Function prototypes
 */

    int  stda ( int argc, char ** argv, const char * const ltag, const char * const stag );
    void stdp ( int argi, char ** argv, void * param, int type );

/*
    Header - Include guard
 */

    # endif

