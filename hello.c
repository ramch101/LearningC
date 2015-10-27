# include <stdio.h>
int main ( int argc, char **argv) {
// C++-comment: global constant character array containing a string
static const char * string = "a string" ;
// argv is an array of strings of the command line arguments
// argv[0] is the name of the program itself; argv[1] is the first argument
char *program = argv[ 0 ];
/* C-comment:
* %s : placeholder of type string
*/
printf ( "This is %s, running in the program %s!\n" , string , program);
return 0 ;
}
