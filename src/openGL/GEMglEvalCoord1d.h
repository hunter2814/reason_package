 /* ------------------------------------------------------------------
  * GEM - Graphics Environment for Multimedia
  *
  *  Copyright (c) 2002 IOhannes m zmoelnig. forum::f�r::uml�ute. IEM
  *	zmoelnig@iem.kug.ac.at
  *  For information on usage and redistribution, and for a DISCLAIMER
  *  OF ALL WARRANTIES, see the file, "GEM.LICENSE.TERMS"
  *
  *  this file has been generated...
  * ------------------------------------------------------------------
  */

#ifndef INCLUDE_GEM_GLEVALCOORD1D_H_
#define INCLUDE_GEM_GLEVALCOORD1D_H_

#include "GemGLBase.h"

/*
 CLASS
	GEMglEvalCoord1d
 KEYWORDS
	openGL	0
 DESCRIPTION
	wrapper for the openGL-function
	"glEvalCoord1d( GLdouble u)"
 */

class GEM_EXTERN GEMglEvalCoord1d : public GemGLBase
{
	CPPEXTERN_HEADER(GEMglEvalCoord1d, GemGLBase)

	public:
	  // Constructor
	  GEMglEvalCoord1d (t_float);	// CON

	protected:
	  // Destructor
	  virtual ~GEMglEvalCoord1d ();
          // check extensions
          virtual bool isRunnable(void);

	  // Do the rendering
	  virtual void	render (GemState *state);

	// variables
	  GLdouble	u;		// VAR
	  virtual void	uMess(t_float);	// FUN


	private:

	// we need some inlets
	  t_inlet *m_inlet[1];

	// static member functions
	  static void	 uMessCallback (void*, t_floatarg);
};
#endif // for header file