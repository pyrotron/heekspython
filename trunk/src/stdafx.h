// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#ifdef WIN32
#pragma warning(disable : 4996)
#endif


#define HAVE_ACOSH
#define HAVE_ASINH
#define HAVE_ATANH
#define HAVE_LOG1P

#include <list>
#include <vector>
#include <map>
#include <set>

#include <wx/wx.h>

#include <wx/stdpaths.h>
#include <wx/dynlib.h>
#include <wx/aui/aui.h>

extern "C" {
#include <GL/gl.h>
#include <GL/glu.h>
}

#include "HeeksPython.h"
#include "interface/strconv.h"



// TODO: reference additional headers your program requires here

