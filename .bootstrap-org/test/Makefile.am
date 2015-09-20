AM_CFLAGS=-Wall
bin_PROGRAMS=

noinst_PROGRAMS=
if HAVE_UNITTESTS
  LDADD=$(UNITTESTCPP_LIBS)
  AM_CXXFLAGS=-I$(top_srcdir)/include $(UNITTESTCPP_CFLAGS) -Wall
  
  noinst_PROGRAMS += testsuite

  testsuite_SOURCES=

endif
