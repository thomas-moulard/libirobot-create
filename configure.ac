# Don't expend macros beginning by ILAB_.
m4_pattern_forbid([^ILAB_])
AC_PREREQ([2.59])

## --------------------- ##
## Package configuration ##
## --------------------- ##
AC_INIT([iRobot Create library], [0.1], [thomas.moulard@gmail.com],
             [libirobot-create])

# Auxiliary files.
AC_CONFIG_AUX_DIR([build-aux])

# Automake.
AM_INIT_AUTOMAKE([1.9.6 dist-bzip2 -Wall nostdinc])

## ------------- ##
## C++ compiler  ##
## ------------- ##

# Search for a C++ compiler.
AC_LANG([C++])
AC_PROG_CXX

# Speed-up compilation.
if test "$GXX" = yes; then
  CXXFLAGS="$CXXFLAGS -pipe"
fi

# Customize warnings.
ILAB_CXX_WARNINGS([[-Wall],
                   [-Werror],
                   [-Wcast-align],
                   [-Wcast-qual],
                   [-Wformat],
                   [-Wmissing-prototypes],
                   [-Wstrict-prototypes],
                   [-Wwrite-strings],
                   [-Wbad-function-cast],
                   [-Wmissing-declarations],
                   [-Wnested-externs]])

## ------------------- ##
## Additionnal tools.  ##
## ------------------- ##

# Search for Libtool.
AC_PROG_LIBTOOL

# Search for libserial.
# http://libserial.sourceforge.net
AC_CHECK_LIB([serial], [main])

## ------------ ##
## Test-suite.  ##
## ------------ ##

AC_CONFIG_TESTDIR([tests])
AM_MISSING_PROG([AUTOM4TE], [autom4te])


## -------------- ##
## Write output.  ##
## -------------- ##

# Create config.h
AC_CONFIG_HEADERS([config.h])

# Create Makefiles.
AC_CONFIG_FILES([
  Makefile
   packages/Makefile
    packages/debian/Makefile
    packages/ebuild/Makefile
    packages/rpm/Makefile
   src/Makefile
   doc/Makefile
   tests/Makefile
    tests/atlocal
    tests/package.m4
])

# Write files.
AC_OUTPUT
