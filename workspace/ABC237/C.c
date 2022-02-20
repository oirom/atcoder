#include <stdio.h>
#include <string.h>

int main( void )
{
  char str[1000001];
  gets( str );
  char * p = strchr( str, '\n' );
  if ( p != NULL ) { *p = '\0'; }
  puts( str );

  
  return 0;
}