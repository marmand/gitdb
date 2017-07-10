lib_LTLIBRARIES = libsqldiff.la
libsqldiff_la_SOURCES = %reldir%/sqldiff.cc
libsqldiff_la_LDFLAGS = -version-info 0:0:0

bin_PROGRAMS= hello
hello_SOURCES = %reldir%/main.cc
hello_LDADD = ${BOOST_PROGRAM_OPTIONS_LIB}
