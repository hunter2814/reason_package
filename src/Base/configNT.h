/* configuration for Windows 
 * 
 * most of these settings require special libraries to be linked against
 * so you might have to edit Project->Settings too
 */


#define FTGL


#define __FILM__NEW

#define HAVE_DIRECTSHOW

#define HAVE_QUICKTIME



/*
 * here comes some generic configuration based on the information above.
 * probably you don't want to edit this
 */

#ifdef FTGL
# define FTGL_LIBRARY_STATIC
#endif
