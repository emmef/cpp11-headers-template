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

# We always want unit tests to be written, which is arranged here.
PKG_CHECK_MODULES([UNITTESTCPP],[cppunit])
AC_SUBST(UNITTESTCPP_CFLAGS)
AC_SUBST(UNITTESTCPP_LIBS)

CXXFLAGS="${CXXFLAGS} -Wall"

AC_SUBST(CXXFLAGS)

AC_CONFIG_FILES(Makefile test/Makefile package.pc)

AC_OUTPUT

