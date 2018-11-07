/* ========================================================================
 * Copyright 1988-2006 University of Washington
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * ========================================================================
 */

/*
 * Program:	Operating-system dependent routines -- DOS (PC-NFS) version
 *
 * Author:	Mike Seibel from Novell version by Mark Crispin
 *
 * Date:	11 May 1989
 * Last Edited:	30 August 2006
 */

#define INADEQUATE_MEMORY

#include <tklib.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys\types.h>
#include <io.h>

#define gethostid clock

#include "env_dos.h"
#include "fs.h"
#include "ftl.h"
#include "nl.h"
#include "tcp.h"