
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
#include <ctype.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>  //define getcwd
#include <time.h>


int main( int argc, char *argv[])
{
    printf( "\n" );
    printf("****************************\n");
    printf("** 2017, NG GAMES       **\n" );
    printf("****************************\n");
    printf( "\n" );
    char cwd[PATH_MAX];
    char cmdi[PATH_MAX];

    strncpy( cmdi, "  " , PATH_MAX );
    strncat( cmdi , " dosbox -c \" mount c: . \" -c \" c: \"  " , PATH_MAX - strlen(cmdi) - 1);
    printf( "<PATH: %s>\n" , getcwd( cwd, PATH_MAX ));
    printf( "<CMD: %s>\n" , cmdi );
    printf( "<Running %s>\n", cmdi );
    system( cmdi );

    return 0;
}



