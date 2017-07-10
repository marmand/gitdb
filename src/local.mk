bin_PROGRAMS += hello
hello_SOURCES = %reldir%/main.cc
hello_LDADD = ${BOOST_PROGRAM_OPTIONS_LIB}
