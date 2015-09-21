AM_CFLAGS=-Wall
AM_CXXFLAGS=-Wall

noinst_PROGRAMS = sanitychecks
sanitychecks_SOURCES = \
	Main.cpp
# __AUTO_ADD_SOURCES__HERE__
# Do not remove or move previous line as it will break the
# automatic adding of source files.
	
sanitychecks_CXXFLAGS=-I$(top_srcdir)/include

# Make sure that the header files get distributes when the 
# library is installed.
# main headers
pkginclude_HEADERS = $(top_srcdir)/include/__headerSubDir__/*.h*