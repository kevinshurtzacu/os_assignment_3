#ifndef _yy_defines_h_
#define _yy_defines_h_

#define USB_DRIVER 257
#define DEV_PREFIX 258
#define BINARY 259
#define INTERFACE_CLASS 260
#define INTERFACE_SUB_CLASS 261
#define EQUALS 262
#define DEV_TYPE 263
#define BLOCK_DEV 264
#define CHAR_DEV 265
#define UPSCRIPT 266
#define DOWNSCRIPT 267
#define SEMICOLON 268
#define BRACKET_OPEN 269
#define BRACKET_CLOSE 270
#define STRING 271
#define ID 272
#define INTERFACE_PROTOCOL 273
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
       char *string;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
