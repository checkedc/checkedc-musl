#include "libc.h"

#undef environ
char **__environ = 0;
weak_alias(__environ, _environ);
weak_alias(__environ, environ);
