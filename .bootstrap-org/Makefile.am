SUBDIRS = src . test examples

ACLOCAL_AMFLAGS=-I m4

# Extra files to distribute
EXTRA_DIST = autogen.sh $(DX_CONFIG) doc/html

# Arrange that the package configuration information
# is installed together with the library.
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = package.pc