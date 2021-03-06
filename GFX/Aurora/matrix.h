// By Marc MERLIN <marc_soft@merlins.org>
// License: Apache v2.0
//

#ifndef matrix_h
#define matrix_h

#include "neomatrix_config.h"
#include "Drawable.h"

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

const int MATRIX_CENTER_X = MATRIX_WIDTH / 2;
const int MATRIX_CENTER_Y = MATRIX_HEIGHT / 2;

const byte MATRIX_CENTRE_X = MATRIX_CENTER_X - 1;
const byte MATRIX_CENTRE_Y = MATRIX_CENTER_Y - 1;

#define mmin(a,b) (a<b)?(a):(b)
#define mmax(a,b) (a>b)?(a):(b)

#include "Effects.h"
Effects effects;

#endif
