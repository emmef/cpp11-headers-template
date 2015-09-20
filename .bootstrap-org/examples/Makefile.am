AM_CFLAGS=-Wall
AM_CXXFLAGS=-Wall

if HAVE_EXAMPLES
  bin_PROGRAMS=examples

  examples_SOURCES=
  	
  examples_CXXFLAGS=-I$(top_srcdir)/include

  # examples headers
  
  examplesHeaderSubDir=examples
  examplesHeaderPathdir=$(pkgincludedir)/$(examplesHeaderSubDir)
  examplesHeaderPath_HEADERS = $(top_srcdir)/include/saaspl/$(examplesHeaderSubDir)/*.h*
else
  bin_PROGRAMS=
endif
