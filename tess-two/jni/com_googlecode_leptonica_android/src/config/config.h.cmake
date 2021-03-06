
#undef AC_APPLE_UNIVERSAL_BUILD

/* Define to 1 if you have giflib. */
#undef HAVE_LIBGIF

/* Define to 1 if you have jpeg. */
#undef HAVE_LIBJPEG

/* Define to 1 if you have libpng. */
#undef HAVE_LIBPNG

/* Define to 1 if you have libtiff. */
#undef HAVE_LIBTIFF

/* Define to 1 if you have libwebp. */
#undef HAVE_LIBWEBP

/* Define to 1 if you have zlib. */
#undef HAVE_LIBZ

#cmakedefine HAVE_DLFCN_H
#cmakedefine HAVE_INTTYPES_H
#cmakedefine HAVE_MEMORY_H
#cmakedefine HAVE_STDINT_H
#cmakedefine HAVE_STDLIB_H
#cmakedefine HAVE_STRINGS_H
#cmakedefine HAVE_STRING_H
#cmakedefine HAVE_SYS_STAT_H
#cmakedefine HAVE_SYS_TYPES_H
#cmakedefine HAVE_UNISTD_H


#define STDC_HEADERS

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif
