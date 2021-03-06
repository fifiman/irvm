/* This file is part of IRVM.

Copyright (C) 2014 Pablo de Oliveira

IRVM is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

IRVM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with IRVM.  If not, see <http://www.gnu.org/licenses/>. */

#include "irvm.h"

/* ERROR module is in charge of error reporting */

/* report an error at location LOC and exits with status EXIT_CODE */
void errl (struct location *loc, int exit_code, const char *format, ...);

/* report a warning at location LOC */
void warnl (struct location *loc, const char *format, ...);
