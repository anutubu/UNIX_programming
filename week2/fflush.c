#include <stdio.h>
int fflush(FILE *stream);

Regardless of the current buffering mode, at any time, we can force the data in a
stdio  output  stream  to  be  written  (i.e.,  flushed  to  a  kernel  buffer  via  write())  using
the  fflush()  library  function.

The output that we ask to display does'nt goes to the display immediately it goes to the buffer an when buffer gets filled out it will dump everything at once in efficiency consideration.

But if we use \n it will go ahead and flush the buffer write then

But if we don't use \n we can use fflush(stdout);

Two main reasons:

Force a message occur immediately
If we are wrriting a file and we want to output to go into the file immediately we can use fflush() .

