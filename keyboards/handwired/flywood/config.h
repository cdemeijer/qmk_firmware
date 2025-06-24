/*
Copyright 2020 C. de Meijer

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

/* key matrix pins */
#define MATRIX_ROW_PINS { B6, B5, B4, B3, B2, B1 }
#define MATRIX_COL_PINS { F0, F1, F2, F3, F4, F5, F6, C6, C5, C4, C3, C2, C1, C0, D0, D1, D2}
//#define UNUSED_PINS { A0, A1, A2, A3, A4, A5, A6, A7, B0, B7, E0, E1, E2, E3, E4, E5, E6, E7, F7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
