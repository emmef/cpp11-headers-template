dnl Process this file with autoconf to produce a configure script.
dnl Project: __projectName__
dnl Description:
dnl   __description__
dnl Copyright (C) __copyRightHolder__ __copyRightYear__
dnl See COPYING for license information
dnl Source: __sourceRepository__

AC_PREREQ(2.59)
AC_INIT(__projectName__, 0.1.001)

AC_CANONICAL_SYSTEM
AM_INIT_AUTOMAKE()

AC_PROG_CXX

dnl If you want to disable static linking: here is how
dnl AC_DISABLE_STATIC

AC_PROG_LIBTOOL
AC_CONFIG_MACRO_DIR([m4])

dnl This library uses C++11 features
AX_CXX_COMPILE_STDCXX_11(noext,mandatory)

dnl Enable or disable unit tests (unittests). Default is DISABLED.
dnl The command line option --enable-unittests or --disableunittests takes precedence
dnl If the argument is there: that is used. The arguments can take values, but these 
dnl can only be "yes" or "no" (or the configuration fails). 
dnl Next, the environment variable __constantsPrefix___ENABLE_UNIT_TESTS is checked. If it is used.
dnl The variable can take the values "yes" and "no" or it is ignored (with a warning)
dnl If the value was not set via the command line or the environment, 
dnl no unit tests will be built.

AC_ARG_ENABLE(unittests,
  AS_HELP_STRING([--enable-unittests], [Enable unit tests]),
  [ case "${enableval}" in
    yes|no ) 
      __constantsPrefix___ENABLE_UNIT_TESTS="${enableval}"
      ;;
    *)
      __constantsPrefix___ENABLE_UNIT_TESTS="no"
      AC_MSG_ERROR(bad value ${enableval} for --enable-unittests) 
      ;;
     esac],
  [ case "x${__constantsPrefix___ENABLE_UNIT_TESTS}" in
    xyes| xno )  
      ;;
    x )
      __constantsPrefix___ENABLE_UNIT_TESTS="no"
      ;;
    *) 
      __constantsPrefix___ENABLE_UNIT_TESTS="no"
      AC_MSG_WARN(bad value ${__constantsPrefix___ENABLE_UNIT_TESTS} for environment variable __constantsPrefix___ENABLE_UNIT_TESTS)
    esac]
)

if test "x$__constantsPrefix___ENABLE_UNIT_TESTS" = "xyes"
then
  PKG_CHECK_MODULES([UNITTESTCPP],[cppunit])
  AC_SUBST(UNITTESTCPP_CFLAGS)
  AC_SUBST(UNITTESTCPP_LIBS)
  AC_MSG_NOTICE([Enabled unittests])
else
  AC_MSG_NOTICE([Disabled unittests])
fi

dnl Example signal processors 
AC_ARG_ENABLE(examples,
  AS_HELP_STRING([--enable-examples], [Enable examples]),
  [ case "${enableval}" in
    yes|no ) 
      __constantsPrefix___ENABLE_EXAMPLES="${enableval}"
      ;;
    *)
      __constantsPrefix___ENABLE_EXAMPLES="no"
      AC_MSG_ERROR(bad value ${enableval} for --enable-examples) 
      ;;
     esac],
  [ case "x${__constantsPrefix___ENABLE_EXAMPLES}" in
    xyes| xno )  
      ;;
    x )
      __constantsPrefix___ENABLE_EXAMPLES="no"
      ;;
    *) 
      __constantsPrefix___ENABLE_EXAMPLES="no"
      AC_MSG_WARN(bad value ${__constantsPrefix___ENABLE_EXAMPLES} for environment variable __constantsPrefix___ENABLE_EXAMPLES)
    esac]
)

if test "${enableval}" = "yes"
then
  AC_MSG_NOTICE([Enabled examples])
else
  AC_MSG_NOTICE([Disabled examples])
fi


CXXFLAGS="${CXXFLAGS} -Wall"
AC_SUBST(CXXFLAGS)

dnl Create a make time conditional that can enable or disable the 
dnl unit tests. This can not be determined at autoconf/automake time, 
dnl as the value of the conditional is only determined at 
dnl ./configure time.
AM_CONDITIONAL(HAVE_UNITTESTS, test x$__constantsPrefix___ENABLE_UNIT_TESTS = xyes)
AM_CONDITIONAL(HAVE_EXAMPLES, test x$__constantsPrefix___ENABLE_EXAMPLES = xyes)

AC_CONFIG_FILES(Makefile src/Makefile test/Makefile examples/Makefile package.pc)

AC_OUTPUT

