/*****************************************************************************/
/* interface.c                                                               */
/*****************************************************************************/

#include <string.h>
#include <stdlib.h>
#include "interface.h"
#include "globals.h"
#include "dlists.h"

status string_double_append ( double_list *p_L, char *buffer ){

  char *line ;
  
  line = ( char * ) malloc( sizeof( char ) * ( strlen( buffer ) + 1 ) ) ;

  if ( line == NULL ) return ERROR ;

  if( double_append( p_L, ( generic_ptr ) line ) == ERROR ) return ERROR ;
  
  strcpy( line, buffer ) ;
  
  return OK ;
  
  }
