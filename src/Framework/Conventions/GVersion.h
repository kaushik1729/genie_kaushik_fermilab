#ifndef _GVERSION_H_ 
#define _GVERSION_H_ 
/* 
 * Version information automatically generated by the GENIE installer 
 * 
 * These macros can be used in the following way (as the ones at ROOT's RVersion.h): 
 * #if __GENIE_RELEASE_CODE__ >= GRELCODE(2,4,11) 
 * #include <newheader.h>
 * #else
 * #include <oldheader.h>
 * #endif
*/ 

#define GRELCODE(a,b,c) (((a) << 16) + ((b) << 8) + (c)) 

#define __GENIE_RELEASE__      "3.0.6"
#define __GENIE_RELEASE_CODE__ GRELCODE(3,0,6) 

#define __GENIE_GIT_REVISION__ "b1c78c537be2fd89d28c1cc9d3d08f9df744392b" 

#endif

