/*
 * File Name --> STD_TYPES.h
 * Author	 --> Ahmed Mohamed Abd-Elfattah
 * Version	 --> 1.0.0
 * Layer	 -->
 * Github    --> github.com/AhmedAbd-ElFattah
 * Linkedin  --> https://www.linkedin.com/in/ahmed-mohamed-abd-elfattah-39705b238/
 */

#ifndef LIB_STD_TYPES_H_
#define LIB_STD_TYPES_H_




/*
==================================================
  Start Section --> File Includes
==================================================
*/

/*
==================================================
  End   Section --> File Includes
==================================================
*/


/*
==================================================
  Start Section --> Macro Declaration
==================================================
*/
#ifndef NULL
#define NULL	((void *)0)
#endif

#define STD_MAX_DELAY 0xFFFFFFFF

/*
==================================================
  End   Section --> Macro Declaration
==================================================
*/


/*
==================================================
  Start Section --> Macro Functions Declaration
==================================================
*/

/*
==================================================
  End   Section --> Macro Functions Declaration
==================================================
*/


/*
==================================================
  Start Section --> Data Type Declaration
==================================================
*/
typedef unsigned char 			u8;
typedef unsigned short int 		u16;
typedef unsigned long int 		u32;

typedef signed char 			s8;
typedef signed short int 		s16;
typedef signed long int 		s32;

typedef float					f32;
typedef double					f64;

typedef enum{
	STD_LOW,
	STD_HIGH
}Bool;

typedef enum{
	STD_ERROR,
	STD_OK
}Status;
/*
==================================================
  End   Section --> Data Type Declaration
==================================================
*/


/*
==================================================
  Start Section --> Function Declaration
==================================================
*/

/*
==================================================
  End   Section --> Function Declaration
==================================================
*/
#endif /* LIB_STD_TYPES_H_ */
