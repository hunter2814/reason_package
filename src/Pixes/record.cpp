////////////////////////////////////////////////////////
//
// GEM - Graphics Environment for Multimedia
//
// zmoelnig@iem.kug.ac.at
//
// Implementation file 
//
//    Copyright (c) 1997-1999 Mark Danks.
//    Copyright (c) G�nther Geiger.
//    Copyright (c) 2001-2002 IOhannes m zmoelnig. forum::f�r::uml�ute. IEM
//    For information on usage and redistribution, and for a DISCLAIMER OF ALL
//    WARRANTIES, see the file, "GEM.LICENSE.TERMS" in this distribution.
//
/////////////////////////////////////////////////////////

#include "Pixes/record.h"
#include <stdlib.h>

/////////////////////////////////////////////////////////
//
// record
//
/////////////////////////////////////////////////////////
// Constructor
//
/////////////////////////////////////////////////////////

record :: record(int x, int y, int width, int height):
  m_currentFrame(0),
  m_xoff(x), m_yoff(y), m_width(width), m_height(height)
{}

/////////////////////////////////////////////////////////
// Destructor
//
/////////////////////////////////////////////////////////
record :: ~record()
{
  close();
}

void record :: close(void)
{}

/////////////////////////////////////////////////////////
// open a file !
//
/////////////////////////////////////////////////////////
bool record :: open(char *filename)
{
  return false;
}

///////////////////////////////
// set the size (do we need this?)
bool record :: size(int w, int h) {
  return false;
}

///////////////////////////////
// set the x/y-offset (do we need this?)
bool record :: position(int w, int h) {
  return false;
}



/////////////////////////////////////////////////////////
// set the codec
//
/////////////////////////////////////////////////////////
bool record :: dialog()
{
  return false;
}

/////////////////////////////////////////////////////////
// get number of codecs
//
/////////////////////////////////////////////////////////
int record :: getNumCodecs()
{
  return 0;
}
char*record :: getCodecName(int i)
{
  return NULL;
}
char*record :: getCodecDescription(int i)
{
  return NULL;
}
/////////////////////////////////////////////////////////
// set codec by number
//
/////////////////////////////////////////////////////////
bool record :: setCodec(int num)
{
  return false;
}
/////////////////////////////////////////////////////////
// set codec by name
//
/////////////////////////////////////////////////////////
bool record :: setCodec(char*name)
{
  return false;
}
