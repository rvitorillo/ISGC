#include "csystem.h"

int csystem(char cformat[],...)
{
  va_list ap;
  char commandstring[1026];

  va_start(ap,cformat);
  vsnprintf(commandstring,1025,cformat,ap);
  va_end(ap);
  return system(commandstring);
}

int psystem(char cformat[],...)
{
  va_list ap;
  char commandstring[1026];

  va_start(ap,cformat);
  vsnprintf(commandstring,1025,cformat,ap);
  va_end(ap);
  return printf("%s\n",commandstring);
}


/* use popen to start a command that is attached to the current process by a pipe */

FILE *rpopen(char cformat[],...)
{
  va_list ap;
  char commandstring[1026];

  va_start(ap,cformat);
  vsnprintf(commandstring,1025,cformat,ap);
  va_end(ap);
  return popen(commandstring,"r");
}

FILE *wpopen(char cformat[],...)
{
  va_list ap;
  char commandstring[1026];

  va_start(ap,cformat);
  vsnprintf(commandstring,1025,cformat,ap);
  va_end(ap);
  return popen(commandstring,"w");
}



  /* get a temporary file name */
  /* hand it off to the command */
  /* run command */
  /* open temp file */
  /* read data into buffer */
  /* close and delete temp file */
  /* return */
/*
int rsystem(char buffer[],int bufsize,char cformat[],...)
{
  va_list ap;
  char commandstring[1026];
  FILE *fp;


  va_start(ap,cformat);
  vsnprintf(commandstring,1025,cformat,ap);
  va_end(ap);
 
  return fopen(fname,"r");
}
*/
