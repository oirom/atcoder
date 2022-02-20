#include <stdio.h>
#include <string.h>

int main( void )
{
  int h, w;
  scanf( "%d %d", &h, &w );

  int a[h][w];
  for ( int i=0;i<h;i++ )
  {
    for ( int j=0;j<w;j++ )
    {
      scanf( "%d", &a[i][j] );
    }
  }

  for ( int i=0;i<w;i++ )
  {
    for ( int j=0;j<h;j++ )
    {
      printf( "%d ", a[j][i] );
    }
      printf( "\n" );
  }
  
  return 0;
}