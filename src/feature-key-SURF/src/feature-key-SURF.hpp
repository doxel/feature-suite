/*
 * feature suite - Feature detection suite
 *
 * Copyright (c) 2013-2015 FOXEL SA - http://foxel.ch
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

    /*! \file   feature-key-SURF.hpp
     *  \author Nils Hamel <n.hamel@foxel.ch>
     *  
     *  Software main header (single function software)
     */

    /*! \mainpage feature-key-SURF
     *
     *  \section feature-suite
     *  \section _ Features detection suite
     *  
     *  The feature-suite provides tools in the context of automatic image 
     *  matching. The suite is separated into small softwares that solve a
     *  specific part of the problem. It is designed so in order to perform 
     *  research using each software as a brick of the overall solver.
     *
     *  \section Documentation
     *
     *  A detailed documentation can be generated through doxygen. A more general
     *  documentation can be consulted at https://github.com/FoxelSA/feature-suite/wiki.
     *
     *  \section Copyright
     * 
     *  Copyright (c) 2013-2015 FOXEL SA - http://foxel.ch \n
     *  This program is part of the FOXEL project <http://foxel.ch>.
     *  
     *  Please read the COPYRIGHT.md file for more information.
     *
     *  \section License
     *
     *  This program is licensed under the terms of the GNU Affero General Public
     *  License v3 (GNU AGPL), with two additional terms. The content is licensed
     *  under the terms of the Creative Commons Attribution-ShareAlike 4.0
     *  International (CC BY-SA) license.
     *
     *  You must read <http://foxel.ch/license> for more information about our
     *  Licensing terms and our Usage and Attribution guidelines.
     */

/* 
    Header - Include guard
 */

    # ifndef __FS_KEY_SURF__
    # define __FS_KEY_SURF__

/* 
    Header - Includes
 */

    # include <iostream>
    # include <fstream>
    # include <common-all.hpp>
    # include <opencv2/opencv.hpp>
    # include <opencv2/highgui/highgui_c.h>
    # include <opencv2/nonfree/features2d.hpp>

/* 
    Header - Preprocessor definitions
 */

    /* Standard help */
    # define FS_HELP "Usage summary :\n\n"                 \
    "\tfeature-key-SURF [Arguments] [Parameters] ...\n\n"  \
    "Short arguments and parameters summary :\n\n"         \
    "\t-i\tInput image\n"                                  \
    "\t-o\tOutput keypoints file\n"                        \
    "\t-t\tSURF extended\n"                                \
    "\t-u\tSURF upright\n"                                 \
    "\t-l\tSURF nOctaveLayers\n"                           \
    "\t-a\tSURF nOctaves\n"                                \
    "\t-s\tSURF hessianThreshold\n"                        \
    "\t-x\tHorizontal edges size\n"                        \
    "\t-y\tVertical edges size\n\n"                        \
    "feature-key-SURF - feature-suite\n"                   \
    "Copyright (c) 2013-2015 FOXEL SA - http://foxel.ch\n"

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

    /*! \brief Software main function (single function software)
     *  
     *  The main function frame follows : parameters are initialized and read.
     *  The input image is imported in grayscale mode. The implementation of 
     *  OpenCV SURF is then called to generate the keypoints list. The list is 
     *  then exported in the output file.
     *  
     *  \param argc Standard main parameter
     *  \param argv Standard main parameter
     */

    int main ( int argc, char ** argv );

/*
    Header - Include guard
 */

    # endif

