//******************************************************************************
///
/// @file povms/configpovms.h
///
/// This header file defines all types that can be configured by platform
/// specific code for parser layer use. It further allows insertion of platform
/// specific function prototypes making use of those types.
///
/// @copyright
/// @parblock
///
/// Persistence of Vision Ray Tracer ('POV-Ray') version 3.7.
/// Copyright 1991-2015 Persistence of Vision Raytracer Pty. Ltd.
///
/// POV-Ray is free software: you can redistribute it and/or modify
/// it under the terms of the GNU Affero General Public License as
/// published by the Free Software Foundation, either version 3 of the
/// License, or (at your option) any later version.
///
/// POV-Ray is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU Affero General Public License for more details.
///
/// You should have received a copy of the GNU Affero General Public License
/// along with this program.  If not, see <http://www.gnu.org/licenses/>.
///
/// ----------------------------------------------------------------------------
///
/// POV-Ray is based on the popular DKB raytracer version 2.12.
/// DKBTrace was originally written by David K. Buck.
/// DKBTrace Ver 2.0-2.12 were written by David K. Buck & Aaron A. Collins.
///
/// @endparblock
///
//*******************************************************************************

#ifndef POVMS_CONFIGPOVMS_H
#define POVMS_CONFIGPOVMS_H

#ifdef POVMS_DISCONNECTED
    #include "cnfpovms.h"
#else
    #if !defined(__cplusplus)
        // When compiling as part of the POV-Ray project, povms.c must be compiled as a C++ file,
        // due to potential C++-isms in the base/configbase.h header included via this file.
        #error povms.c must be compiled as a C++ file when used as part of the POV-Ray project.
    #endif
    #include "base/configbase.h"
#endif

#endif // POVMS_CONFIGPOVMS_H
