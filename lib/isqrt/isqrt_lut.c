static const char RCSID[]="@(#)$Id: isqrt_lut.c,v 1.1 2002/07/18 22:11:15 rkowen Exp $";
static const char AUTHOR[]="@(#)isqrt 1.0 1998/11/26 R.K.Owen,Ph.D.";
/* isqrt.c -
 * finds the the integer sqrt of the given integer.
 * returns 0 if a user error (such as the argument is non-positive)
 */
/** ** Copyright *********************************************************** **
 ** 									     **
 ** Copyright 2001 by R.K.Owen,Ph.D.		                      	     **
 ** last known email: librko@kooz.sj.ca.us				     **
 **                   rk@owen.sj.ca.us					     **
 ** see LICENSE.LGPL, which must be provided, for details		     **
 ** 									     **
 ** ************************************************************************ **/

/* a look-up table lut[i] = 256*sqrt(i/256) */
unsigned char isqrt_lut[256] = {
    0,   16,   22,   27,   32,   35,   39,   42,
   45,   48,   50,   53,   55,   57,   59,   61,
   64,   65,   67,   69,   71,   73,   75,   76,
   78,   80,   81,   83,   84,   86,   87,   89,
   90,   91,   93,   94,   96,   97,   98,   99,
  101,  102,  103,  104,  106,  107,  108,  109,
  110,  112,  113,  114,  115,  116,  117,  118,
  119,  120,  121,  122,  123,  124,  125,  126,
  128,  128,  129,  130,  131,  132,  133,  134,
  135,  136,  137,  138,  139,  140,  141,  142,
  143,  144,  144,  145,  146,  147,  148,  149,
  150,  150,  151,  152,  153,  154,  155,  155,
  156,  157,  158,  159,  160,  160,  161,  162,
  163,  163,  164,  165,  166,  167,  167,  168,
  169,  170,  170,  171,  172,  173,  173,  174,
  175,  176,  176,  177,  178,  178,  179,  180,
  181,  181,  182,  183,  183,  184,  185,  185,
  186,  187,  187,  188,  189,  189,  190,  191,
  192,  192,  193,  193,  194,  195,  195,  196,
  197,  197,  198,  199,  199,  200,  201,  201,
  202,  203,  203,  204,  204,  205,  206,  206,
  207,  208,  208,  209,  209,  210,  211,  211,
  212,  212,  213,  214,  214,  215,  215,  216,
  217,  217,  218,  218,  219,  219,  220,  221,
  221,  222,  222,  223,  224,  224,  225,  225,
  226,  226,  227,  227,  228,  229,  229,  230,
  230,  231,  231,  232,  232,  233,  234,  234,
  235,  235,  236,  236,  237,  237,  238,  238,
  239,  240,  240,  241,  241,  242,  242,  243,
  243,  244,  244,  245,  245,  246,  246,  247,
  247,  248,  248,  249,  249,  250,  250,  251,
  251,  252,  252,  253,  253,  254,  254,  255};
