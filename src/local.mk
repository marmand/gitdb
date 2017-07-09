lib_LTLIBRARIES = libsqldiff.la
libsqldiff_la_SOURCES = %reldir%/sqldiff.cc

bin_PROGRAMS= hello
hello_SOURCES = %reldir%/main.cc
hello_LDADD = ${BOOST_PROGRAM_OPTIONS_LIB}
