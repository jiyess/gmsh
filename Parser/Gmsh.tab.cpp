/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse gmsh_yyparse
#define yylex   gmsh_yylex
#define yyerror gmsh_yyerror
#define yylval  gmsh_yylval
#define yychar  gmsh_yychar
#define yydebug gmsh_yydebug
#define yynerrs gmsh_yynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tDOUBLE = 258,
     tSTRING = 259,
     tBIGSTR = 260,
     tEND = 261,
     tAFFECT = 262,
     tDOTS = 263,
     tSCOPE = 264,
     tPi = 265,
     tMPI_Rank = 266,
     tMPI_Size = 267,
     tEuclidian = 268,
     tCoordinates = 269,
     tTestLevel = 270,
     tExp = 271,
     tLog = 272,
     tLog10 = 273,
     tSqrt = 274,
     tSin = 275,
     tAsin = 276,
     tCos = 277,
     tAcos = 278,
     tTan = 279,
     tRand = 280,
     tAtan = 281,
     tAtan2 = 282,
     tSinh = 283,
     tCosh = 284,
     tTanh = 285,
     tFabs = 286,
     tAbs = 287,
     tFloor = 288,
     tCeil = 289,
     tRound = 290,
     tMin = 291,
     tMax = 292,
     tFmod = 293,
     tModulo = 294,
     tHypot = 295,
     tList = 296,
     tLinSpace = 297,
     tLogSpace = 298,
     tListFromFile = 299,
     tCatenary = 300,
     tPrintf = 301,
     tError = 302,
     tWarning = 303,
     tStr = 304,
     tSprintf = 305,
     tStrCat = 306,
     tStrPrefix = 307,
     tStrRelative = 308,
     tStrReplace = 309,
     tAbsolutePath = 310,
     tDirName = 311,
     tStrSub = 312,
     tStrLen = 313,
     tFind = 314,
     tStrFind = 315,
     tStrCmp = 316,
     tStrChoice = 317,
     tUpperCase = 318,
     tLowerCase = 319,
     tLowerCaseIn = 320,
     tTextAttributes = 321,
     tBoundingBox = 322,
     tDraw = 323,
     tSetChanged = 324,
     tToday = 325,
     tFixRelativePath = 326,
     tCurrentDirectory = 327,
     tCurrentFileName = 328,
     tSyncModel = 329,
     tNewModel = 330,
     tMass = 331,
     tCenterOfMass = 332,
     tMatrixOfInertia = 333,
     tOnelabAction = 334,
     tOnelabRun = 335,
     tCodeName = 336,
     tCpu = 337,
     tMemory = 338,
     tTotalMemory = 339,
     tCreateTopology = 340,
     tCreateGeometry = 341,
     tClassifySurfaces = 342,
     tRenumberMeshNodes = 343,
     tRenumberMeshElements = 344,
     tDistanceFunction = 345,
     tDefineConstant = 346,
     tUndefineConstant = 347,
     tDefineNumber = 348,
     tDefineStruct = 349,
     tNameStruct = 350,
     tDimNameSpace = 351,
     tAppend = 352,
     tDefineString = 353,
     tSetNumber = 354,
     tSetTag = 355,
     tSetString = 356,
     tPoint = 357,
     tCircle = 358,
     tEllipse = 359,
     tCurve = 360,
     tSphere = 361,
     tPolarSphere = 362,
     tSurface = 363,
     tSpline = 364,
     tVolume = 365,
     tBox = 366,
     tCylinder = 367,
     tCone = 368,
     tTorus = 369,
     tEllipsoid = 370,
     tQuadric = 371,
     tShapeFromFile = 372,
     tRectangle = 373,
     tDisk = 374,
     tWire = 375,
     tGeoEntity = 376,
     tCharacteristic = 377,
     tLength = 378,
     tParametric = 379,
     tElliptic = 380,
     tRefineMesh = 381,
     tRecombineMesh = 382,
     tAdaptMesh = 383,
     tRelocateMesh = 384,
     tReorientMesh = 385,
     tSetFactory = 386,
     tThruSections = 387,
     tWedge = 388,
     tFillet = 389,
     tChamfer = 390,
     tPlane = 391,
     tRuled = 392,
     tTransfinite = 393,
     tPhysical = 394,
     tCompound = 395,
     tPeriodic = 396,
     tParent = 397,
     tUsing = 398,
     tPlugin = 399,
     tDegenerated = 400,
     tRecursive = 401,
     tSewing = 402,
     tRotate = 403,
     tTranslate = 404,
     tSymmetry = 405,
     tDilate = 406,
     tExtrude = 407,
     tLevelset = 408,
     tAffine = 409,
     tBooleanUnion = 410,
     tBooleanIntersection = 411,
     tBooleanDifference = 412,
     tBooleanSection = 413,
     tBooleanFragments = 414,
     tThickSolid = 415,
     tRecombine = 416,
     tSmoother = 417,
     tSplit = 418,
     tDelete = 419,
     tCoherence = 420,
     tIntersect = 421,
     tMeshAlgorithm = 422,
     tReverseMesh = 423,
     tMeshSize = 424,
     tMeshSizeFromBoundary = 425,
     tLayers = 426,
     tScaleLast = 427,
     tHole = 428,
     tAlias = 429,
     tAliasWithOptions = 430,
     tCopyOptions = 431,
     tQuadTriAddVerts = 432,
     tQuadTriNoNewVerts = 433,
     tRecombLaterals = 434,
     tTransfQuadTri = 435,
     tText2D = 436,
     tText3D = 437,
     tInterpolationScheme = 438,
     tTime = 439,
     tCombine = 440,
     tBSpline = 441,
     tBezier = 442,
     tNurbs = 443,
     tNurbsOrder = 444,
     tNurbsKnots = 445,
     tColor = 446,
     tColorTable = 447,
     tFor = 448,
     tIn = 449,
     tEndFor = 450,
     tIf = 451,
     tElseIf = 452,
     tElse = 453,
     tEndIf = 454,
     tExit = 455,
     tAbort = 456,
     tField = 457,
     tReturn = 458,
     tCall = 459,
     tSlide = 460,
     tMacro = 461,
     tShow = 462,
     tHide = 463,
     tGetValue = 464,
     tGetStringValue = 465,
     tGetEnv = 466,
     tGetString = 467,
     tGetNumber = 468,
     tUnique = 469,
     tSetMaxTag = 470,
     tHomology = 471,
     tCohomology = 472,
     tBetti = 473,
     tExists = 474,
     tFileExists = 475,
     tGetForced = 476,
     tGetForcedStr = 477,
     tGMSH_MAJOR_VERSION = 478,
     tGMSH_MINOR_VERSION = 479,
     tGMSH_PATCH_VERSION = 480,
     tGmshExecutableName = 481,
     tSetPartition = 482,
     tNameToString = 483,
     tStringToName = 484,
     tUnsplitWindow = 485,
     tAFFECTDIVIDE = 486,
     tAFFECTTIMES = 487,
     tAFFECTMINUS = 488,
     tAFFECTPLUS = 489,
     tOR = 490,
     tAND = 491,
     tNOTEQUAL = 492,
     tEQUAL = 493,
     tGREATERGREATER = 494,
     tLESSLESS = 495,
     tGREATEROREQUAL = 496,
     tLESSOREQUAL = 497,
     UNARYPREC = 498,
     tMINUSMINUS = 499,
     tPLUSPLUS = 500
   };
#endif
/* Tokens.  */
#define tDOUBLE 258
#define tSTRING 259
#define tBIGSTR 260
#define tEND 261
#define tAFFECT 262
#define tDOTS 263
#define tSCOPE 264
#define tPi 265
#define tMPI_Rank 266
#define tMPI_Size 267
#define tEuclidian 268
#define tCoordinates 269
#define tTestLevel 270
#define tExp 271
#define tLog 272
#define tLog10 273
#define tSqrt 274
#define tSin 275
#define tAsin 276
#define tCos 277
#define tAcos 278
#define tTan 279
#define tRand 280
#define tAtan 281
#define tAtan2 282
#define tSinh 283
#define tCosh 284
#define tTanh 285
#define tFabs 286
#define tAbs 287
#define tFloor 288
#define tCeil 289
#define tRound 290
#define tMin 291
#define tMax 292
#define tFmod 293
#define tModulo 294
#define tHypot 295
#define tList 296
#define tLinSpace 297
#define tLogSpace 298
#define tListFromFile 299
#define tCatenary 300
#define tPrintf 301
#define tError 302
#define tWarning 303
#define tStr 304
#define tSprintf 305
#define tStrCat 306
#define tStrPrefix 307
#define tStrRelative 308
#define tStrReplace 309
#define tAbsolutePath 310
#define tDirName 311
#define tStrSub 312
#define tStrLen 313
#define tFind 314
#define tStrFind 315
#define tStrCmp 316
#define tStrChoice 317
#define tUpperCase 318
#define tLowerCase 319
#define tLowerCaseIn 320
#define tTextAttributes 321
#define tBoundingBox 322
#define tDraw 323
#define tSetChanged 324
#define tToday 325
#define tFixRelativePath 326
#define tCurrentDirectory 327
#define tCurrentFileName 328
#define tSyncModel 329
#define tNewModel 330
#define tMass 331
#define tCenterOfMass 332
#define tMatrixOfInertia 333
#define tOnelabAction 334
#define tOnelabRun 335
#define tCodeName 336
#define tCpu 337
#define tMemory 338
#define tTotalMemory 339
#define tCreateTopology 340
#define tCreateGeometry 341
#define tClassifySurfaces 342
#define tRenumberMeshNodes 343
#define tRenumberMeshElements 344
#define tDistanceFunction 345
#define tDefineConstant 346
#define tUndefineConstant 347
#define tDefineNumber 348
#define tDefineStruct 349
#define tNameStruct 350
#define tDimNameSpace 351
#define tAppend 352
#define tDefineString 353
#define tSetNumber 354
#define tSetTag 355
#define tSetString 356
#define tPoint 357
#define tCircle 358
#define tEllipse 359
#define tCurve 360
#define tSphere 361
#define tPolarSphere 362
#define tSurface 363
#define tSpline 364
#define tVolume 365
#define tBox 366
#define tCylinder 367
#define tCone 368
#define tTorus 369
#define tEllipsoid 370
#define tQuadric 371
#define tShapeFromFile 372
#define tRectangle 373
#define tDisk 374
#define tWire 375
#define tGeoEntity 376
#define tCharacteristic 377
#define tLength 378
#define tParametric 379
#define tElliptic 380
#define tRefineMesh 381
#define tRecombineMesh 382
#define tAdaptMesh 383
#define tRelocateMesh 384
#define tReorientMesh 385
#define tSetFactory 386
#define tThruSections 387
#define tWedge 388
#define tFillet 389
#define tChamfer 390
#define tPlane 391
#define tRuled 392
#define tTransfinite 393
#define tPhysical 394
#define tCompound 395
#define tPeriodic 396
#define tParent 397
#define tUsing 398
#define tPlugin 399
#define tDegenerated 400
#define tRecursive 401
#define tSewing 402
#define tRotate 403
#define tTranslate 404
#define tSymmetry 405
#define tDilate 406
#define tExtrude 407
#define tLevelset 408
#define tAffine 409
#define tBooleanUnion 410
#define tBooleanIntersection 411
#define tBooleanDifference 412
#define tBooleanSection 413
#define tBooleanFragments 414
#define tThickSolid 415
#define tRecombine 416
#define tSmoother 417
#define tSplit 418
#define tDelete 419
#define tCoherence 420
#define tIntersect 421
#define tMeshAlgorithm 422
#define tReverseMesh 423
#define tMeshSize 424
#define tMeshSizeFromBoundary 425
#define tLayers 426
#define tScaleLast 427
#define tHole 428
#define tAlias 429
#define tAliasWithOptions 430
#define tCopyOptions 431
#define tQuadTriAddVerts 432
#define tQuadTriNoNewVerts 433
#define tRecombLaterals 434
#define tTransfQuadTri 435
#define tText2D 436
#define tText3D 437
#define tInterpolationScheme 438
#define tTime 439
#define tCombine 440
#define tBSpline 441
#define tBezier 442
#define tNurbs 443
#define tNurbsOrder 444
#define tNurbsKnots 445
#define tColor 446
#define tColorTable 447
#define tFor 448
#define tIn 449
#define tEndFor 450
#define tIf 451
#define tElseIf 452
#define tElse 453
#define tEndIf 454
#define tExit 455
#define tAbort 456
#define tField 457
#define tReturn 458
#define tCall 459
#define tSlide 460
#define tMacro 461
#define tShow 462
#define tHide 463
#define tGetValue 464
#define tGetStringValue 465
#define tGetEnv 466
#define tGetString 467
#define tGetNumber 468
#define tUnique 469
#define tSetMaxTag 470
#define tHomology 471
#define tCohomology 472
#define tBetti 473
#define tExists 474
#define tFileExists 475
#define tGetForced 476
#define tGetForcedStr 477
#define tGMSH_MAJOR_VERSION 478
#define tGMSH_MINOR_VERSION 479
#define tGMSH_PATCH_VERSION 480
#define tGmshExecutableName 481
#define tSetPartition 482
#define tNameToString 483
#define tStringToName 484
#define tUnsplitWindow 485
#define tAFFECTDIVIDE 486
#define tAFFECTTIMES 487
#define tAFFECTMINUS 488
#define tAFFECTPLUS 489
#define tOR 490
#define tAND 491
#define tNOTEQUAL 492
#define tEQUAL 493
#define tGREATERGREATER 494
#define tLESSLESS 495
#define tGREATEROREQUAL 496
#define tLESSOREQUAL 497
#define UNARYPREC 498
#define tMINUSMINUS 499
#define tPLUSPLUS 500




/* Copy the first part of user declarations.  */
#line 1 "Gmsh.y"

// Gmsh - Copyright (C) 1997-2021 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/gmsh/gmsh/issues.

#include <sstream>
#include <map>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include "GmshConfig.h"
#include "GmshMessage.h"
#include "fullMatrix.h"
#include "MallocUtils.h"
#include "ListUtils.h"
#include "TreeUtils.h"
#include "StringUtils.h"
#include "Numeric.h"
#include "Context.h"
#include "GModel.h"
#include "GModelIO_GEO.h"
#include "GModelIO_OCC.h"
#include "GeoDefines.h"
#include "ExtrudeParams.h"
#include "Options.h"
#include "Parser.h"
#include "OpenFile.h"
#include "CommandLine.h"
#include "FunctionManager.h"
#include "ColorTable.h"
#include "OS.h"
#include "CreateFile.h"
#include "gmshSurface.h"
#include "gmshLevelset.h"
#include "fullMatrix.h"

#if defined(HAVE_MESH)
#include "Field.h"
#include "BackgroundMesh.h"
#include "HighOrder.h"
#endif

#if defined(HAVE_POST)
#include "PView.h"
#include "PViewDataList.h"
#endif

#if defined(HAVE_PLUGINS)
#include "PluginManager.h"
#endif

#if defined(HAVE_OPENGL)
#include "drawContext.h"
#endif

#if defined(HAVE_FLTK)
#include "FlGui.h"
#endif

#if defined(HAVE_POPPLER)
#include "gmshPopplerWrapper.h"
#endif

#define MAX_RECUR_TESTS 100
#define MAX_RECUR_LOOPS 100

// global parser variables
std::string gmsh_yyname;
int gmsh_yyerrorstate = 0;
int gmsh_yyviewindex = 0;
std::map<std::string, gmsh_yysymbol> gmsh_yysymbols;
std::map<std::string, std::vector<std::string> > gmsh_yystringsymbols;
std::string gmsh_yyfactory;
NameSpaces gmsh_yynamespaces;

// static parser variables (accessible only in this file)
#if defined(HAVE_POST)
static PViewDataList *ViewData = 0;
#endif
static std::vector<double> ViewCoord;
static std::vector<double> *ViewValueList = 0;
static int *ViewNumList = 0;
static ExtrudeParams extr;
static gmshSurface *myGmshSurface = 0;
static int statusImbricatedTests[MAX_RECUR_TESTS];
static int ImbricatedLoop = 0, ImbricatedTest = 0;
static fpos_t yyposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int yylinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static std::string LoopControlVariablesNameTab[MAX_RECUR_LOOPS];
static std::string struct_name, struct_namespace;
static int dim_entity;

static std::map<std::string, std::vector<double> > floatOptions;
static std::map<std::string, std::vector<std::string> > charOptions;
static int flag_Enum, member_ValMax;

void init_options(int member_ValMax_ = 0)
{
  floatOptions.clear(); charOptions.clear();
  flag_Enum = 0; member_ValMax = member_ValMax_;
}

// parser functions defined at the end of this file
void yyerror(const char *s);
void yymsg(int level, const char *fmt, ...);
char *strsave(char *ptr);
void skip(const char *skip, const char *until);
void skipTest(const char *skip, const char *until,
              const char *until2, int l_until2_sub, int *type_until2);
void assignVariable(const std::string &name, int index, int assignType,
                    double value);
void assignVariables(const std::string &name, List_T *indices, int assignType,
                     List_T *values);
void incrementVariable(const std::string &name, int index, double value);
int printListOfDouble(char *format, List_T *list, char *buffer);
fullMatrix<double> ListOfListOfDouble2Matrix(List_T *list);
void ListOfDouble2Vector(List_T *list, std::vector<int> &v);
void ListOfDouble2Vector(List_T *list, std::vector<double> &v);
void ListOfShapes2VectorOfPairs(List_T *list, std::vector<std::pair<int, int> > &v);
void VectorOfPairs2ListOfShapes(const std::vector<std::pair<int, int> > &v, List_T *list);
void addPeriodicEdge(int, int, const std::vector<double>&);
void addPeriodicFace(int, int, const std::map<int, int>&);
void addPeriodicFace(int, int, const std::vector<double>&);
void computeAffineTransformation(SPoint3&, SPoint3&, double, SPoint3&,
                                 std::vector<double>&);
void addEmbedded(int dim, std::vector<int> tags, int dim2, int tag2);
void removeEmbedded(const std::vector<std::pair<int, int> > &dimTags, int dim);
void getAllElementaryTags(int dim, List_T *in);
void getAllPhysicalTags(int dim, List_T *in);
void getElementaryTagsForPhysicalGroups(int dim, List_T *in, List_T *out);
void getElementaryTagsInBoundingBox(int dim, double x1, double y1, double z1,
                                    double x2, double y2, double z2, List_T *out);
void getParentTags(int dim, List_T *in, List_T *out);
void getBoundingBox(int dim, List_T *in, List_T *out);
void setVisibility(int dim, int visible, bool recursive);
void setVisibility(const std::vector<std::pair<int, int> > &dimTags, int visible,
                   bool recursive);
void setColor(const std::vector<std::pair<int, int> > &dimTags, unsigned int val,
              bool recursive);

double treat_Struct_FullName_Float
  (char* c1, char* c2, int type_var = 1, int index = 0,
   double val_default = 0., int type_treat = 0);
double treat_Struct_FullName_dot_tSTRING_Float
  (char* c1, char* c2, char* c3, int index = 0,
   double val_default = 0., int type_treat = 0);
List_T * treat_Struct_FullName_dot_tSTRING_ListOfFloat
  (char* c1, char* c2, char* c3);
int treat_Struct_FullName_dot_tSTRING_Float_getDim
  (char* c1, char* c2, char* c3);
char* treat_Struct_FullName_String
  (char* c1, char* c2, int type_var = 1, int index = 0,
   char* val_default = nullptr, int type_treat = 0);
char* treat_Struct_FullName_dot_tSTRING_String
  (char* c1, char* c2, char* c3, int index = 0,
   char* val_default = nullptr, int type_treat = 0);
List_T * treat_Struct_FullName_dot_tSTRING_ListOfString
  (char* c1, char* c2, char* c3);

struct doubleXstring{
  double d;
  char *s;
};



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 169 "Gmsh.y"
{
  char *c;
  int i;
  unsigned int u;
  double d;
  double v[5];
  Shape s;
  List_T *l;
  struct TwoChar c2;
}
/* Line 193 of yacc.c.  */
#line 773 "Gmsh.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 786 "Gmsh.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   17560

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  268
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  638
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2280

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   500

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   253,     2,   265,     2,   250,   252,     2,
     258,   259,   248,   246,   267,   247,   264,   249,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     240,     2,   241,   235,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   260,     2,   261,   257,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   262,   251,   263,   266,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     236,   237,   238,   239,   242,   243,   244,   245,   254,   255,
     256
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    12,    14,    16,    18,
      24,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    46,    48,    50,    52,    54,    56,    58,    60,    66,
      72,    78,    86,    94,   102,   110,   120,   127,   134,   141,
     150,   151,   154,   157,   160,   163,   166,   169,   171,   175,
     177,   181,   182,   183,   194,   196,   200,   201,   215,   217,
     221,   222,   238,   247,   262,   263,   270,   272,   274,   276,
     278,   280,   282,   284,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   308,   314,   317,   325,   333,   338,   342,
     349,   359,   367,   374,   382,   389,   394,   403,   413,   423,
     430,   440,   447,   457,   463,   472,   481,   493,   500,   510,
     516,   524,   534,   544,   556,   564,   574,   584,   585,   587,
     588,   592,   598,   599,   609,   610,   622,   628,   629,   639,
     640,   644,   648,   654,   660,   661,   664,   665,   667,   669,
     673,   676,   679,   682,   684,   689,   692,   695,   696,   699,
     701,   705,   708,   711,   714,   717,   720,   722,   724,   728,
     729,   735,   741,   747,   748,   751,   752,   755,   763,   771,
     779,   790,   801,   810,   819,   827,   835,   847,   855,   864,
     873,   882,   892,   901,   910,   914,   919,   930,   938,   946,
     954,   962,   970,   978,   986,   994,  1002,  1010,  1020,  1028,
    1036,  1045,  1054,  1067,  1068,  1078,  1080,  1082,  1084,  1086,
    1091,  1093,  1095,  1097,  1102,  1104,  1106,  1111,  1113,  1115,
    1117,  1122,  1128,  1140,  1146,  1156,  1166,  1174,  1179,  1189,
    1200,  1210,  1212,  1214,  1215,  1218,  1225,  1233,  1241,  1248,
    1256,  1265,  1276,  1291,  1308,  1321,  1336,  1351,  1366,  1381,
    1390,  1399,  1406,  1411,  1417,  1423,  1430,  1437,  1441,  1446,
    1450,  1456,  1463,  1469,  1474,  1478,  1483,  1487,  1492,  1498,
    1503,  1509,  1513,  1519,  1527,  1535,  1539,  1542,  1550,  1554,
    1557,  1560,  1563,  1566,  1569,  1585,  1588,  1591,  1599,  1602,
    1612,  1624,  1627,  1632,  1635,  1638,  1641,  1644,  1661,  1673,
    1680,  1689,  1698,  1709,  1711,  1714,  1717,  1719,  1723,  1727,
    1732,  1737,  1739,  1741,  1747,  1759,  1773,  1774,  1782,  1783,
    1797,  1798,  1814,  1815,  1822,  1832,  1835,  1839,  1850,  1864,
    1866,  1869,  1875,  1883,  1886,  1889,  1893,  1896,  1900,  1903,
    1907,  1917,  1924,  1926,  1928,  1930,  1932,  1934,  1935,  1938,
    1942,  1946,  1951,  1961,  1966,  1981,  1982,  1986,  1987,  1989,
    1990,  1993,  1994,  1997,  1998,  2001,  2007,  2014,  2022,  2029,
    2035,  2039,  2048,  2055,  2064,  2073,  2079,  2084,  2091,  2103,
    2115,  2134,  2153,  2166,  2179,  2192,  2203,  2208,  2213,  2218,
    2223,  2228,  2235,  2238,  2242,  2249,  2251,  2253,  2255,  2258,
    2264,  2272,  2283,  2285,  2289,  2292,  2295,  2298,  2302,  2306,
    2310,  2314,  2318,  2322,  2326,  2330,  2334,  2338,  2342,  2346,
    2350,  2354,  2358,  2362,  2366,  2370,  2376,  2381,  2386,  2391,
    2396,  2401,  2406,  2411,  2416,  2421,  2426,  2433,  2438,  2443,
    2448,  2453,  2458,  2463,  2468,  2473,  2480,  2487,  2494,  2499,
    2506,  2513,  2515,  2517,  2519,  2521,  2523,  2525,  2527,  2529,
    2531,  2533,  2535,  2536,  2543,  2545,  2550,  2557,  2559,  2564,
    2569,  2574,  2581,  2587,  2595,  2604,  2615,  2620,  2625,  2632,
    2637,  2641,  2644,  2650,  2656,  2660,  2666,  2673,  2682,  2689,
    2698,  2705,  2710,  2718,  2725,  2732,  2739,  2744,  2751,  2756,
    2757,  2760,  2761,  2764,  2765,  2773,  2775,  2779,  2781,  2784,
    2785,  2789,  2791,  2794,  2797,  2801,  2805,  2817,  2827,  2835,
    2843,  2845,  2849,  2851,  2853,  2856,  2860,  2865,  2871,  2873,
    2877,  2879,  2882,  2886,  2890,  2896,  2901,  2906,  2909,  2914,
    2917,  2921,  2925,  2930,  2936,  2942,  2948,  2954,  2956,  2958,
    2960,  2964,  2970,  2978,  2983,  2988,  2993,  3000,  3007,  3016,
    3025,  3030,  3045,  3050,  3055,  3057,  3059,  3063,  3067,  3077,
    3085,  3087,  3093,  3097,  3104,  3106,  3110,  3112,  3114,  3119,
    3124,  3128,  3134,  3141,  3150,  3157,  3162,  3168,  3170,  3175,
    3177,  3179,  3181,  3183,  3188,  3195,  3200,  3207,  3213,  3221,
    3226,  3231,  3236,  3245,  3250,  3255,  3260,  3265,  3274,  3283,
    3290,  3295,  3302,  3307,  3309,  3311,  3316,  3321,  3322,  3329,
    3334,  3337,  3342,  3347,  3349,  3351,  3355,  3357,  3359,  3363,
    3367,  3371,  3377,  3385,  3391,  3397,  3406,  3408,  3410
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     269,     0,    -1,   270,    -1,     1,     6,    -1,    -1,   270,
     271,    -1,   273,    -1,   274,    -1,   295,    -1,   131,   258,
     371,   259,     6,    -1,   314,    -1,   320,    -1,   324,    -1,
     325,    -1,   326,    -1,   327,    -1,   331,    -1,   340,    -1,
     341,    -1,   347,    -1,   348,    -1,   330,    -1,   329,    -1,
     328,    -1,   323,    -1,   350,    -1,   241,    -1,   242,    -1,
      46,   258,   371,   259,     6,    -1,    48,   258,   371,   259,
       6,    -1,    47,   258,   371,   259,     6,    -1,    46,   258,
     371,   259,   272,   371,     6,    -1,    46,   258,   371,   267,
     367,   259,     6,    -1,    48,   258,   371,   267,   367,   259,
       6,    -1,    47,   258,   371,   267,   367,   259,     6,    -1,
      46,   258,   371,   267,   367,   259,   272,   371,     6,    -1,
     381,   371,   262,   275,   263,     6,    -1,   174,     4,   260,
     351,   261,     6,    -1,   175,     4,   260,   351,   261,     6,
      -1,   176,     4,   260,   351,   267,   351,   261,     6,    -1,
      -1,   275,   278,    -1,   275,   282,    -1,   275,   285,    -1,
     275,   287,    -1,   275,   288,    -1,   275,   330,    -1,   351,
      -1,   276,   267,   351,    -1,   351,    -1,   277,   267,   351,
      -1,    -1,    -1,     4,   279,   258,   276,   259,   280,   262,
     277,   263,     6,    -1,   371,    -1,   281,   267,   371,    -1,
      -1,   181,   258,   351,   267,   351,   267,   351,   259,   283,
     262,   281,   263,     6,    -1,   371,    -1,   284,   267,   371,
      -1,    -1,   182,   258,   351,   267,   351,   267,   351,   267,
     351,   259,   286,   262,   284,   263,     6,    -1,   183,   262,
     363,   263,   262,   363,   263,     6,    -1,   183,   262,   363,
     263,   262,   363,   263,   262,   363,   263,   262,   363,   263,
       6,    -1,    -1,   184,   289,   262,   277,   263,     6,    -1,
       7,    -1,   234,    -1,   233,    -1,   232,    -1,   231,    -1,
     256,    -1,   255,    -1,   258,    -1,   260,    -1,   259,    -1,
     261,    -1,     4,    -1,    36,    -1,    37,    -1,   111,    -1,
     112,    -1,    91,   260,   297,   261,     6,    -1,    92,   260,
     301,   261,     6,    -1,   356,     6,    -1,    99,   292,   372,
     267,   351,   293,     6,    -1,   101,   292,   381,   267,   372,
     293,     6,    -1,   381,   290,   364,     6,    -1,   381,   291,
       6,    -1,   381,   292,   293,   290,   364,     6,    -1,   381,
     292,   262,   367,   263,   293,   290,   364,     6,    -1,   381,
     260,   351,   261,   290,   351,     6,    -1,   381,   260,   351,
     261,   291,     6,    -1,   381,   258,   351,   259,   290,   351,
       6,    -1,   381,   258,   351,   259,   291,     6,    -1,   381,
       7,   372,     6,    -1,   381,   292,   293,     7,    49,   292,
     293,     6,    -1,   381,   292,   293,     7,    49,   292,   376,
     293,     6,    -1,   381,   292,   293,   234,    49,   292,   376,
     293,     6,    -1,   381,   264,   294,     7,   372,     6,    -1,
     381,   260,   351,   261,   264,   294,     7,   372,     6,    -1,
     381,   264,   294,   290,   351,     6,    -1,   381,   260,   351,
     261,   264,   294,   290,   351,     6,    -1,   381,   264,   294,
     291,     6,    -1,   381,   260,   351,   261,   264,   294,   291,
       6,    -1,   381,   264,   191,   264,   294,     7,   368,     6,
      -1,   381,   260,   351,   261,   264,   191,   264,   294,     7,
     368,     6,    -1,   381,   264,   192,     7,   369,     6,    -1,
     381,   260,   351,   261,   264,   192,     7,   369,     6,    -1,
     381,   202,     7,   364,     6,    -1,   202,   260,   351,   261,
       7,   294,     6,    -1,   202,   260,   351,   261,   264,   294,
       7,   351,     6,    -1,   202,   260,   351,   261,   264,   294,
       7,   372,     6,    -1,   202,   260,   351,   261,   264,   294,
       7,   262,   367,   263,     6,    -1,   202,   260,   351,   261,
     264,   294,     6,    -1,   144,   258,     4,   259,   264,   294,
       7,   351,     6,    -1,   144,   258,     4,   259,   264,   294,
       7,   372,     6,    -1,    -1,   267,    -1,    -1,   297,   296,
     381,    -1,   297,   296,   381,     7,   351,    -1,    -1,   297,
     296,   381,     7,   262,   364,   298,   303,   263,    -1,    -1,
     297,   296,   381,   292,   293,     7,   262,   364,   299,   303,
     263,    -1,   297,   296,   381,     7,   372,    -1,    -1,   297,
     296,   381,     7,   262,   372,   300,   307,   263,    -1,    -1,
     301,   296,   371,    -1,   351,     7,   372,    -1,   302,   267,
     351,     7,   372,    -1,   366,     7,   381,   258,   259,    -1,
      -1,   267,   305,    -1,    -1,   305,    -1,   306,    -1,   305,
     267,   306,    -1,     4,   364,    -1,    36,   351,    -1,    37,
     351,    -1,     4,    -1,     4,   262,   302,   263,    -1,     4,
     372,    -1,     4,   375,    -1,    -1,   267,   308,    -1,   309,
      -1,   308,   267,   309,    -1,     4,   351,    -1,     4,   372,
      -1,   206,   372,    -1,     4,   377,    -1,     4,   375,    -1,
     351,    -1,   372,    -1,   372,   267,   351,    -1,    -1,   194,
     106,   262,   351,   263,    -1,   143,   102,   262,   367,   263,
      -1,   143,   121,   262,   367,   263,    -1,    -1,   136,   361,
      -1,    -1,   143,   147,    -1,   102,   258,   351,   259,     7,
     361,     6,    -1,   105,   258,   351,   259,     7,   364,     6,
      -1,   109,   258,   351,   259,     7,   364,     6,    -1,   140,
     109,   258,   351,   259,     7,   364,   143,   351,     6,    -1,
     140,   186,   258,   351,   259,     7,   364,   143,   351,     6,
      -1,   103,   258,   351,   259,     7,   364,   312,     6,    -1,
     104,   258,   351,   259,     7,   364,   312,     6,    -1,   186,
     258,   351,   259,     7,   364,     6,    -1,   187,   258,   351,
     259,     7,   364,     6,    -1,   188,   258,   351,   259,     7,
     364,   190,   364,   189,   351,     6,    -1,   120,   258,   351,
     259,     7,   364,     6,    -1,   105,     4,   258,   351,   259,
       7,   364,     6,    -1,   136,   108,   258,   351,   259,     7,
     364,     6,    -1,   108,   258,   351,   259,     7,   364,   311,
       6,    -1,   137,   108,   258,   351,   259,     7,   364,   311,
       6,    -1,   186,   108,   258,   351,   259,     7,   364,     6,
      -1,   187,   108,   258,   351,   259,     7,   364,     6,    -1,
      13,    14,     6,    -1,    14,   108,   351,     6,    -1,   124,
     108,   258,   351,   259,     7,     5,     5,     5,     6,    -1,
     106,   258,   351,   259,     7,   364,     6,    -1,   107,   258,
     351,   259,     7,   364,     6,    -1,   111,   258,   351,   259,
       7,   364,     6,    -1,   114,   258,   351,   259,     7,   364,
       6,    -1,   118,   258,   351,   259,     7,   364,     6,    -1,
     119,   258,   351,   259,     7,   364,     6,    -1,   112,   258,
     351,   259,     7,   364,     6,    -1,   113,   258,   351,   259,
       7,   364,     6,    -1,   133,   258,   351,   259,     7,   364,
       6,    -1,   160,   258,   351,   259,     7,   364,     6,    -1,
     108,     4,   258,   351,   259,     7,   364,   313,     6,    -1,
     110,   258,   351,   259,     7,   364,     6,    -1,   132,   258,
     351,   259,     7,   364,     6,    -1,   137,   132,   258,   351,
     259,     7,   364,     6,    -1,   140,   317,   258,   351,   259,
       7,   364,     6,    -1,   140,   317,   258,   351,   259,     7,
     364,     4,   262,   363,   263,     6,    -1,    -1,   139,   316,
     315,   258,   310,   259,   290,   364,     6,    -1,   102,    -1,
     105,    -1,   108,    -1,   110,    -1,   121,   262,   351,   263,
      -1,   105,    -1,   108,    -1,   110,    -1,   121,   262,   351,
     263,    -1,   105,    -1,   108,    -1,   121,   262,   351,   263,
      -1,   102,    -1,   105,    -1,   108,    -1,   121,   262,   351,
     263,    -1,   149,   361,   262,   321,   263,    -1,   148,   262,
     361,   267,   361,   267,   351,   263,   262,   321,   263,    -1,
     150,   361,   262,   321,   263,    -1,   151,   262,   361,   267,
     351,   263,   262,   321,   263,    -1,   151,   262,   361,   267,
     361,   263,   262,   321,   263,    -1,   154,   262,   367,   263,
     262,   321,   263,    -1,     4,   262,   321,   263,    -1,   166,
     105,   262,   367,   263,   108,   262,   351,   263,    -1,   163,
     105,   262,   351,   263,   102,   262,   367,   263,     6,    -1,
     163,   105,   258,   351,   259,   262,   367,   263,     6,    -1,
     322,    -1,   320,    -1,    -1,   322,   314,    -1,   322,   316,
     262,   367,   263,     6,    -1,   322,   139,   316,   262,   367,
     263,     6,    -1,   322,   142,   316,   262,   367,   263,     6,
      -1,   322,   316,   262,     8,   263,     6,    -1,   322,   139,
     316,   262,     8,   263,     6,    -1,   153,   136,   258,   351,
     259,     7,   364,     6,    -1,   153,   102,   258,   351,   259,
       7,   262,   363,   263,     6,    -1,   153,   136,   258,   351,
     259,     7,   262,   361,   267,   361,   267,   367,   263,     6,
      -1,   153,   136,   258,   351,   259,     7,   262,   361,   267,
     361,   267,   361,   267,   367,   263,     6,    -1,   153,   106,
     258,   351,   259,     7,   262,   361,   267,   367,   263,     6,
      -1,   153,   112,   258,   351,   259,     7,   262,   361,   267,
     361,   267,   367,   263,     6,    -1,   153,   113,   258,   351,
     259,     7,   262,   361,   267,   361,   267,   367,   263,     6,
      -1,   153,   115,   258,   351,   259,     7,   262,   361,   267,
     361,   267,   367,   263,     6,    -1,   153,   116,   258,   351,
     259,     7,   262,   361,   267,   361,   267,   367,   263,     6,
      -1,   153,     4,   258,   351,   259,     7,   364,     6,    -1,
     153,     4,   258,   351,   259,     7,     5,     6,    -1,   153,
       4,   262,   351,   263,     6,    -1,   164,   262,   322,   263,
      -1,   146,   164,   262,   322,   263,    -1,   164,     4,   262,
     322,   263,    -1,   164,   202,   260,   351,   261,     6,    -1,
     164,     4,   260,   351,   261,     6,    -1,   164,   381,     6,
      -1,   164,     4,     4,     6,    -1,   164,    94,     6,    -1,
     191,   368,   262,   322,   263,    -1,   146,   191,   368,   262,
     322,   263,    -1,   227,   351,   262,   322,   263,    -1,   207,
     262,     8,   263,    -1,   207,     5,     6,    -1,   208,   262,
       8,   263,    -1,   208,     5,     6,    -1,   207,   262,   322,
     263,    -1,   146,   207,   262,   322,   263,    -1,   208,   262,
     322,   263,    -1,   146,   208,   262,   322,   263,    -1,   381,
     372,     6,    -1,    80,   258,   378,   259,     6,    -1,   381,
     381,   260,   351,   261,   371,     6,    -1,   381,   381,   381,
     260,   351,   261,     6,    -1,   381,   351,     6,    -1,   230,
       6,    -1,   144,   258,     4,   259,   264,     4,     6,    -1,
     185,     4,     6,    -1,   200,     6,    -1,   201,     6,    -1,
      74,     6,    -1,    75,     6,    -1,    67,     6,    -1,    67,
     262,   351,   267,   351,   267,   351,   267,   351,   267,   351,
     267,   351,   263,     6,    -1,    68,     6,    -1,    69,     6,
      -1,    85,   262,   351,   267,   351,   263,     6,    -1,    85,
       6,    -1,    87,   262,   351,   267,   351,   267,   351,   263,
       6,    -1,    87,   262,   351,   267,   351,   267,   351,   267,
     351,   263,     6,    -1,    86,     6,    -1,    86,   262,   322,
     263,    -1,    88,     6,    -1,    89,     6,    -1,   126,     6,
      -1,   127,     6,    -1,   128,   262,   367,   263,   262,   367,
     263,   262,   363,   263,   262,   351,   267,   351,   263,     6,
      -1,   205,   258,   262,   367,   263,   267,   372,   267,   372,
     259,     6,    -1,   193,   258,   351,     8,   351,   259,    -1,
     193,   258,   351,     8,   351,     8,   351,   259,    -1,   193,
       4,   194,   262,   351,     8,   351,   263,    -1,   193,     4,
     194,   262,   351,     8,   351,     8,   351,   263,    -1,   195,
      -1,   206,     4,    -1,   206,   372,    -1,   203,    -1,   204,
     381,     6,    -1,   204,   372,     6,    -1,   196,   258,   351,
     259,    -1,   197,   258,   351,   259,    -1,   198,    -1,   199,
      -1,   152,   361,   262,   322,   263,    -1,   152,   262,   361,
     267,   361,   267,   351,   263,   262,   322,   263,    -1,   152,
     262,   361,   267,   361,   267,   361,   267,   351,   263,   262,
     322,   263,    -1,    -1,   152,   361,   262,   322,   332,   336,
     263,    -1,    -1,   152,   262,   361,   267,   361,   267,   351,
     263,   262,   322,   333,   336,   263,    -1,    -1,   152,   262,
     361,   267,   361,   267,   361,   267,   351,   263,   262,   322,
     334,   336,   263,    -1,    -1,   152,   262,   322,   335,   336,
     263,    -1,   152,   262,   322,   263,   143,   120,   262,   351,
     263,    -1,   132,   364,    -1,   137,   132,   364,    -1,   134,
     262,   367,   263,   262,   367,   263,   262,   367,   263,    -1,
     135,   262,   367,   263,   262,   367,   263,   262,   367,   263,
     262,   367,   263,    -1,   337,    -1,   336,   337,    -1,   171,
     262,   351,   263,     6,    -1,   171,   262,   364,   267,   364,
     263,     6,    -1,   172,     6,    -1,   161,     6,    -1,   161,
     351,     6,    -1,   177,     6,    -1,   177,   179,     6,    -1,
     178,     6,    -1,   178,   179,     6,    -1,   173,   258,   351,
     259,     7,   364,   143,   351,     6,    -1,   143,     4,   260,
     351,   261,     6,    -1,   155,    -1,   156,    -1,   157,    -1,
     158,    -1,   159,    -1,    -1,   164,     6,    -1,   146,   164,
       6,    -1,   164,   351,     6,    -1,   146,   164,   351,     6,
      -1,   338,   262,   322,   339,   263,   262,   322,   339,   263,
      -1,   117,   258,   371,   259,    -1,   338,   258,   351,   259,
       7,   262,   322,   339,   263,   262,   322,   339,   263,     6,
      -1,    -1,   143,     4,   351,    -1,    -1,     4,    -1,    -1,
       7,   364,    -1,    -1,     7,   351,    -1,    -1,   154,   364,
      -1,   169,   365,     7,   351,     6,    -1,   122,   123,   365,
       7,   351,     6,    -1,   138,   105,   365,     7,   351,   342,
       6,    -1,   138,   108,   365,   344,   343,     6,    -1,   138,
     110,   365,   344,     6,    -1,   180,   365,     6,    -1,   100,
     316,   258,   351,   267,   351,   259,     6,    -1,   215,   316,
     258,   351,   259,     6,    -1,   167,   108,   262,   367,   263,
       7,   351,     6,    -1,   170,   108,   262,   367,   263,     7,
     351,     6,    -1,   161,   108,   365,   345,     6,    -1,   161,
     110,   365,     6,    -1,   162,   108,   365,     7,   351,     6,
      -1,   141,   105,   262,   367,   263,     7,   262,   367,   263,
     346,     6,    -1,   141,   108,   262,   367,   263,     7,   262,
     367,   263,   346,     6,    -1,   141,   105,   262,   367,   263,
       7,   262,   367,   263,   148,   262,   361,   267,   361,   267,
     351,   263,     6,    -1,   141,   108,   262,   367,   263,     7,
     262,   367,   263,   148,   262,   361,   267,   361,   267,   351,
     263,     6,    -1,   141,   105,   262,   367,   263,     7,   262,
     367,   263,   149,   361,     6,    -1,   141,   108,   262,   367,
     263,     7,   262,   367,   263,   149,   361,     6,    -1,   141,
     108,   351,   262,   367,   263,     7,   351,   262,   367,   263,
       6,    -1,   316,   262,   367,   263,   194,   316,   262,   351,
     263,     6,    -1,   168,   318,   365,     6,    -1,   129,   319,
     365,     6,    -1,   130,   110,   364,     6,    -1,   145,   105,
     364,     6,    -1,   140,   317,   364,     6,    -1,   140,   317,
     364,   167,   351,     6,    -1,   165,     6,    -1,   165,     4,
       6,    -1,   165,   102,   262,   367,   263,     6,    -1,   216,
      -1,   217,    -1,   218,    -1,   349,     6,    -1,   349,   262,
     364,   263,     6,    -1,   349,   262,   364,   267,   364,   263,
       6,    -1,   349,   258,   364,   259,   262,   364,   267,   364,
     263,     6,    -1,   352,    -1,   258,   351,   259,    -1,   247,
     351,    -1,   246,   351,    -1,   253,   351,    -1,   351,   247,
     351,    -1,   351,   246,   351,    -1,   351,   248,   351,    -1,
     351,   249,   351,    -1,   351,   251,   351,    -1,   351,   252,
     351,    -1,   351,   250,   351,    -1,   351,   257,   351,    -1,
     351,   240,   351,    -1,   351,   241,   351,    -1,   351,   245,
     351,    -1,   351,   244,   351,    -1,   351,   239,   351,    -1,
     351,   238,   351,    -1,   351,   237,   351,    -1,   351,   236,
     351,    -1,   351,   242,   351,    -1,   351,   243,   351,    -1,
     351,   235,   351,     8,   351,    -1,    16,   292,   351,   293,
      -1,    17,   292,   351,   293,    -1,    18,   292,   351,   293,
      -1,    19,   292,   351,   293,    -1,    20,   292,   351,   293,
      -1,    21,   292,   351,   293,    -1,    22,   292,   351,   293,
      -1,    23,   292,   351,   293,    -1,    24,   292,   351,   293,
      -1,    26,   292,   351,   293,    -1,    27,   292,   351,   267,
     351,   293,    -1,    28,   292,   351,   293,    -1,    29,   292,
     351,   293,    -1,    30,   292,   351,   293,    -1,    31,   292,
     351,   293,    -1,    32,   292,   351,   293,    -1,    33,   292,
     351,   293,    -1,    34,   292,   351,   293,    -1,    35,   292,
     351,   293,    -1,    38,   292,   351,   267,   351,   293,    -1,
      39,   292,   351,   267,   351,   293,    -1,    40,   292,   351,
     267,   351,   293,    -1,    25,   292,   351,   293,    -1,    37,
     292,   351,   267,   351,   293,    -1,    36,   292,   351,   267,
     351,   293,    -1,     3,    -1,    10,    -1,    15,    -1,    11,
      -1,    12,    -1,   223,    -1,   224,    -1,   225,    -1,    82,
      -1,    83,    -1,    84,    -1,    -1,    93,   292,   351,   353,
     303,   293,    -1,   356,    -1,   213,   292,   371,   293,    -1,
     213,   292,   371,   267,   351,   293,    -1,   358,    -1,   381,
     260,   351,   261,    -1,   381,   258,   351,   259,    -1,   219,
     258,   358,   259,    -1,   219,   258,   358,   264,   294,   259,
      -1,   221,   258,   358,   354,   259,    -1,   221,   258,   358,
     264,   294,   354,   259,    -1,   221,   258,   358,   292,   351,
     293,   354,   259,    -1,   221,   258,   358,   264,   294,   292,
     351,   293,   354,   259,    -1,   220,   258,   372,   259,    -1,
     265,   381,   292,   293,    -1,   265,   358,   264,   294,   292,
     293,    -1,    96,   292,   381,   293,    -1,    96,   292,   293,
      -1,   381,   291,    -1,   381,   260,   351,   261,   291,    -1,
     381,   258,   351,   259,   291,    -1,   381,   264,   294,    -1,
     381,     9,   381,   264,   294,    -1,   381,   264,   294,   258,
     351,   259,    -1,   381,     9,   381,   264,   294,   258,   351,
     259,    -1,   381,   264,   294,   260,   351,   261,    -1,   381,
       9,   381,   264,   294,   260,   351,   261,    -1,   381,   260,
     351,   261,   264,   294,    -1,   381,   264,   294,   291,    -1,
     381,   260,   351,   261,   264,   294,   291,    -1,   209,   258,
     371,   267,   351,   259,    -1,    59,   258,   364,   267,   364,
     259,    -1,    60,   292,   371,   267,   371,   293,    -1,    58,
     292,   371,   293,    -1,    61,   292,   371,   267,   371,   293,
      -1,    66,   258,   378,   259,    -1,    -1,   267,   351,    -1,
      -1,   267,   371,    -1,    -1,    94,   358,   360,   357,   260,
     304,   261,    -1,   381,    -1,   381,     9,   381,    -1,    97,
      -1,    97,   351,    -1,    -1,   258,   359,   259,    -1,   362,
      -1,   247,   361,    -1,   246,   361,    -1,   361,   247,   361,
      -1,   361,   246,   361,    -1,   262,   351,   267,   351,   267,
     351,   267,   351,   267,   351,   263,    -1,   262,   351,   267,
     351,   267,   351,   267,   351,   263,    -1,   262,   351,   267,
     351,   267,   351,   263,    -1,   258,   351,   267,   351,   267,
     351,   259,    -1,   364,    -1,   363,   267,   364,    -1,   351,
      -1,   366,    -1,   262,   263,    -1,   262,   367,   263,    -1,
     247,   262,   367,   263,    -1,   351,   248,   262,   367,   263,
      -1,   364,    -1,   262,     8,   263,    -1,     5,    -1,   247,
     366,    -1,   351,   248,   366,    -1,   351,     8,   351,    -1,
     351,     8,   351,     8,   351,    -1,   102,   262,   351,   263,
      -1,   102,   262,     8,   263,    -1,   102,     5,    -1,   317,
     262,     8,   263,    -1,   317,     5,    -1,   139,   316,   365,
      -1,   142,   316,   364,    -1,   316,   194,    67,   364,    -1,
      67,   316,   262,   367,   263,    -1,    76,   317,   262,   351,
     263,    -1,    77,   317,   262,   351,   263,    -1,    78,   317,
     262,   351,   263,    -1,   320,    -1,   331,    -1,   340,    -1,
     381,   292,   293,    -1,   381,   264,   294,   292,   293,    -1,
     381,     9,   381,   264,   294,   292,   293,    -1,    41,   260,
     381,   261,    -1,    41,   260,   366,   261,    -1,    41,   258,
     366,   259,    -1,    41,   292,   262,   367,   263,   293,    -1,
     381,   292,   262,   367,   263,   293,    -1,    42,   292,   351,
     267,   351,   267,   351,   293,    -1,    43,   292,   351,   267,
     351,   267,   351,   293,    -1,    44,   292,   371,   293,    -1,
      45,   292,   351,   267,   351,   267,   351,   267,   351,   267,
     351,   267,   351,   293,    -1,   214,   292,   366,   293,    -1,
      32,   292,   366,   293,    -1,   351,    -1,   366,    -1,   367,
     267,   351,    -1,   367,   267,   366,    -1,   262,   351,   267,
     351,   267,   351,   267,   351,   263,    -1,   262,   351,   267,
     351,   267,   351,   263,    -1,   381,    -1,     4,   264,   191,
     264,     4,    -1,   262,   370,   263,    -1,   381,   260,   351,
     261,   264,   192,    -1,   368,    -1,   370,   267,   368,    -1,
     372,    -1,   381,    -1,   381,   260,   351,   261,    -1,   381,
     258,   351,   259,    -1,   381,   264,   294,    -1,   381,     9,
     381,   264,   294,    -1,   381,   264,   294,   258,   351,   259,
      -1,   381,     9,   381,   264,   294,   258,   351,   259,    -1,
     381,   260,   351,   261,   264,     4,    -1,   316,   262,   351,
     263,    -1,   139,   316,   262,   351,   263,    -1,     5,    -1,
     228,   260,   381,   261,    -1,    70,    -1,   226,    -1,    79,
      -1,    81,    -1,   211,   258,   371,   259,    -1,   210,   258,
     371,   267,   371,   259,    -1,   212,   292,   371,   293,    -1,
     212,   292,   371,   267,   371,   293,    -1,   222,   258,   358,
     355,   259,    -1,   222,   258,   358,   264,   294,   355,   259,
      -1,    51,   292,   378,   293,    -1,    52,   258,   371,   259,
      -1,    53,   258,   371,   259,    -1,    54,   258,   371,   267,
     371,   267,   371,   259,    -1,    49,   292,   378,   293,    -1,
      63,   292,   371,   293,    -1,    64,   292,   371,   293,    -1,
      65,   292,   371,   293,    -1,    62,   292,   351,   267,   371,
     267,   371,   293,    -1,    57,   292,   371,   267,   351,   267,
     351,   293,    -1,    57,   292,   371,   267,   351,   293,    -1,
      50,   292,   371,   293,    -1,    50,   292,   371,   267,   367,
     293,    -1,    71,   292,   371,   293,    -1,    72,    -1,    73,
      -1,    56,   292,   371,   293,    -1,    55,   292,   371,   293,
      -1,    -1,    98,   292,   372,   373,   307,   293,    -1,    95,
     292,   374,   293,    -1,   265,   351,    -1,   381,     9,   265,
     351,    -1,    49,   292,   377,   293,    -1,   378,    -1,   377,
      -1,   262,   378,   263,    -1,   371,    -1,   379,    -1,   378,
     267,   371,    -1,   378,   267,   379,    -1,   381,   258,   259,
      -1,   381,   264,   294,   258,   259,    -1,   381,     9,   381,
     264,   294,   258,   259,    -1,     4,   266,   262,   351,   263,
      -1,   380,   266,   262,   351,   263,    -1,   229,   260,   371,
     261,   266,   262,   351,   263,    -1,     4,    -1,   380,    -1,
     229,   260,   371,   261,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   275,   275,   276,   281,   283,   287,   288,   289,   290,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   338,   342,   349,   354,
     359,   364,   378,   391,   404,   417,   445,   459,   472,   485,
     504,   509,   510,   511,   512,   513,   514,   518,   520,   525,
     527,   533,   637,   532,   655,   662,   673,   672,   690,   697,
     708,   707,   724,   741,   764,   763,   777,   778,   779,   780,
     781,   785,   786,   792,   792,   794,   794,   799,   800,   801,
     802,   803,   809,   810,   811,   812,   817,   823,   884,   899,
     927,   937,   942,   950,   955,   963,   972,   977,   989,  1006,
    1012,  1021,  1039,  1057,  1066,  1078,  1083,  1091,  1111,  1134,
    1154,  1162,  1184,  1207,  1245,  1266,  1278,  1292,  1292,  1294,
    1296,  1305,  1315,  1314,  1335,  1334,  1352,  1362,  1361,  1375,
    1377,  1385,  1391,  1396,  1423,  1425,  1428,  1430,  1434,  1435,
    1439,  1451,  1455,  1459,  1472,  1486,  1494,  1507,  1509,  1513,
    1514,  1519,  1527,  1536,  1544,  1558,  1576,  1580,  1587,  1596,
    1599,  1605,  1609,  1621,  1624,  1631,  1634,  1640,  1663,  1679,
    1695,  1712,  1729,  1766,  1810,  1826,  1842,  1874,  1890,  1907,
    1923,  1973,  1991,  2012,  2033,  2039,  2045,  2052,  2083,  2098,
    2120,  2143,  2166,  2189,  2213,  2237,  2261,  2287,  2304,  2320,
    2338,  2356,  2368,  2382,  2381,  2411,  2413,  2415,  2417,  2419,
    2427,  2429,  2431,  2433,  2441,  2443,  2445,  2453,  2455,  2457,
    2459,  2469,  2485,  2501,  2517,  2533,  2549,  2566,  2603,  2624,
    2645,  2671,  2672,  2677,  2680,  2684,  2701,  2721,  2741,  2760,
    2787,  2806,  2827,  2842,  2858,  2876,  2927,  2948,  2970,  2993,
    3098,  3114,  3149,  3171,  3193,  3205,  3211,  3226,  3257,  3269,
    3278,  3285,  3297,  3317,  3321,  3326,  3330,  3335,  3342,  3349,
    3356,  3368,  3441,  3459,  3484,  3499,  3548,  3554,  3566,  3598,
    3602,  3607,  3614,  3619,  3629,  3634,  3640,  3648,  3659,  3667,
    3671,  3675,  3679,  3686,  3690,  3694,  3706,  3715,  3779,  3795,
    3812,  3829,  3851,  3873,  3908,  3916,  3924,  3930,  3937,  3944,
    3964,  3990,  4002,  4013,  4031,  4049,  4068,  4067,  4092,  4091,
    4118,  4117,  4142,  4141,  4164,  4180,  4197,  4214,  4237,  4265,
    4268,  4274,  4286,  4306,  4310,  4314,  4318,  4322,  4326,  4330,
    4334,  4343,  4356,  4357,  4358,  4359,  4360,  4364,  4365,  4366,
    4367,  4368,  4371,  4395,  4414,  4437,  4440,  4458,  4461,  4478,
    4481,  4487,  4490,  4497,  4500,  4507,  4530,  4549,  4590,  4634,
    4673,  4698,  4711,  4722,  4739,  4756,  4786,  4812,  4838,  4870,
    4898,  4924,  4950,  4976,  5002,  5024,  5036,  5084,  5138,  5153,
    5165,  5171,  5183,  5190,  5205,  5219,  5220,  5221,  5225,  5231,
    5243,  5261,  5289,  5290,  5291,  5292,  5293,  5294,  5295,  5296,
    5297,  5304,  5305,  5306,  5307,  5308,  5309,  5310,  5311,  5312,
    5313,  5314,  5315,  5316,  5317,  5318,  5319,  5320,  5321,  5322,
    5323,  5324,  5325,  5326,  5327,  5328,  5329,  5330,  5331,  5332,
    5333,  5334,  5335,  5336,  5337,  5338,  5339,  5340,  5341,  5342,
    5343,  5352,  5353,  5354,  5355,  5356,  5357,  5358,  5359,  5360,
    5361,  5362,  5367,  5366,  5374,  5378,  5383,  5388,  5392,  5397,
    5402,  5406,  5410,  5414,  5418,  5422,  5426,  5432,  5447,  5451,
    5457,  5462,  5481,  5501,  5522,  5526,  5530,  5534,  5538,  5542,
    5546,  5551,  5561,  5571,  5576,  5587,  5596,  5601,  5606,  5634,
    5635,  5641,  5642,  5648,  5647,  5670,  5672,  5677,  5679,  5685,
    5686,  5691,  5695,  5699,  5703,  5707,  5714,  5718,  5722,  5726,
    5733,  5738,  5745,  5750,  5754,  5759,  5763,  5771,  5782,  5786,
    5790,  5804,  5812,  5820,  5827,  5837,  5860,  5865,  5871,  5876,
    5882,  5893,  5899,  5913,  5919,  5931,  5945,  5958,  5968,  5978,
    5988,  6000,  6004,  6009,  6021,  6025,  6029,  6033,  6051,  6059,
    6067,  6096,  6106,  6122,  6133,  6138,  6142,  6146,  6158,  6162,
    6174,  6191,  6201,  6205,  6220,  6225,  6232,  6236,  6241,  6255,
    6269,  6273,  6277,  6281,  6285,  6293,  6299,  6308,  6312,  6316,
    6324,  6330,  6336,  6340,  6347,  6355,  6362,  6371,  6375,  6379,
    6394,  6408,  6422,  6434,  6450,  6459,  6468,  6478,  6489,  6497,
    6505,  6509,  6528,  6535,  6541,  6547,  6554,  6562,  6561,  6571,
    6595,  6597,  6603,  6608,  6610,  6615,  6620,  6625,  6627,  6631,
    6643,  6657,  6661,  6668,  6676,  6684,  6695,  6697,  6700
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tDOUBLE", "tSTRING", "tBIGSTR", "tEND",
  "tAFFECT", "tDOTS", "tSCOPE", "tPi", "tMPI_Rank", "tMPI_Size",
  "tEuclidian", "tCoordinates", "tTestLevel", "tExp", "tLog", "tLog10",
  "tSqrt", "tSin", "tAsin", "tCos", "tAcos", "tTan", "tRand", "tAtan",
  "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tAbs", "tFloor", "tCeil",
  "tRound", "tMin", "tMax", "tFmod", "tModulo", "tHypot", "tList",
  "tLinSpace", "tLogSpace", "tListFromFile", "tCatenary", "tPrintf",
  "tError", "tWarning", "tStr", "tSprintf", "tStrCat", "tStrPrefix",
  "tStrRelative", "tStrReplace", "tAbsolutePath", "tDirName", "tStrSub",
  "tStrLen", "tFind", "tStrFind", "tStrCmp", "tStrChoice", "tUpperCase",
  "tLowerCase", "tLowerCaseIn", "tTextAttributes", "tBoundingBox", "tDraw",
  "tSetChanged", "tToday", "tFixRelativePath", "tCurrentDirectory",
  "tCurrentFileName", "tSyncModel", "tNewModel", "tMass", "tCenterOfMass",
  "tMatrixOfInertia", "tOnelabAction", "tOnelabRun", "tCodeName", "tCpu",
  "tMemory", "tTotalMemory", "tCreateTopology", "tCreateGeometry",
  "tClassifySurfaces", "tRenumberMeshNodes", "tRenumberMeshElements",
  "tDistanceFunction", "tDefineConstant", "tUndefineConstant",
  "tDefineNumber", "tDefineStruct", "tNameStruct", "tDimNameSpace",
  "tAppend", "tDefineString", "tSetNumber", "tSetTag", "tSetString",
  "tPoint", "tCircle", "tEllipse", "tCurve", "tSphere", "tPolarSphere",
  "tSurface", "tSpline", "tVolume", "tBox", "tCylinder", "tCone", "tTorus",
  "tEllipsoid", "tQuadric", "tShapeFromFile", "tRectangle", "tDisk",
  "tWire", "tGeoEntity", "tCharacteristic", "tLength", "tParametric",
  "tElliptic", "tRefineMesh", "tRecombineMesh", "tAdaptMesh",
  "tRelocateMesh", "tReorientMesh", "tSetFactory", "tThruSections",
  "tWedge", "tFillet", "tChamfer", "tPlane", "tRuled", "tTransfinite",
  "tPhysical", "tCompound", "tPeriodic", "tParent", "tUsing", "tPlugin",
  "tDegenerated", "tRecursive", "tSewing", "tRotate", "tTranslate",
  "tSymmetry", "tDilate", "tExtrude", "tLevelset", "tAffine",
  "tBooleanUnion", "tBooleanIntersection", "tBooleanDifference",
  "tBooleanSection", "tBooleanFragments", "tThickSolid", "tRecombine",
  "tSmoother", "tSplit", "tDelete", "tCoherence", "tIntersect",
  "tMeshAlgorithm", "tReverseMesh", "tMeshSize", "tMeshSizeFromBoundary",
  "tLayers", "tScaleLast", "tHole", "tAlias", "tAliasWithOptions",
  "tCopyOptions", "tQuadTriAddVerts", "tQuadTriNoNewVerts",
  "tRecombLaterals", "tTransfQuadTri", "tText2D", "tText3D",
  "tInterpolationScheme", "tTime", "tCombine", "tBSpline", "tBezier",
  "tNurbs", "tNurbsOrder", "tNurbsKnots", "tColor", "tColorTable", "tFor",
  "tIn", "tEndFor", "tIf", "tElseIf", "tElse", "tEndIf", "tExit", "tAbort",
  "tField", "tReturn", "tCall", "tSlide", "tMacro", "tShow", "tHide",
  "tGetValue", "tGetStringValue", "tGetEnv", "tGetString", "tGetNumber",
  "tUnique", "tSetMaxTag", "tHomology", "tCohomology", "tBetti", "tExists",
  "tFileExists", "tGetForced", "tGetForcedStr", "tGMSH_MAJOR_VERSION",
  "tGMSH_MINOR_VERSION", "tGMSH_PATCH_VERSION", "tGmshExecutableName",
  "tSetPartition", "tNameToString", "tStringToName", "tUnsplitWindow",
  "tAFFECTDIVIDE", "tAFFECTTIMES", "tAFFECTMINUS", "tAFFECTPLUS", "'?'",
  "tOR", "tAND", "tNOTEQUAL", "tEQUAL", "'<'", "'>'", "tGREATERGREATER",
  "tLESSLESS", "tGREATEROREQUAL", "tLESSOREQUAL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'|'", "'&'", "'!'", "UNARYPREC", "tMINUSMINUS",
  "tPLUSPLUS", "'^'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'.'",
  "'#'", "'~'", "','", "$accept", "All", "GeoFormatItems", "GeoFormatItem",
  "SendToFile", "Printf", "View", "Views", "ElementCoords",
  "ElementValues", "Element", "@1", "@2", "Text2DValues", "Text2D", "@3",
  "Text3DValues", "Text3D", "@4", "InterpolationMatrix", "Time", "@5",
  "NumericAffectation", "NumericIncrement", "LP", "RP", "tSTRING_Reserved",
  "Affectation", "Comma", "DefineConstants", "@6", "@7", "@8",
  "UndefineConstants", "Enumeration", "FloatParameterOptionsOrNone",
  "FloatParameterOptionsOrNone_NoComma", "FloatParameterOptions",
  "FloatParameterOption", "CharParameterOptionsOrNone",
  "CharParameterOptions", "CharParameterOption",
  "PhysicalId_per_dim_entity", "SurfaceConstraints", "CircleOptions",
  "LoopOptions", "Shape", "@9", "GeoEntity", "GeoEntity123", "GeoEntity12",
  "GeoEntity02", "Transform", "MultipleShape", "ListOfShapes", "LevelSet",
  "Delete", "Colorify", "SetPartition", "Visibility", "Command", "Slide",
  "Loop", "Extrude", "@10", "@11", "@12", "@13", "ExtrudeParameters",
  "ExtrudeParameter", "BooleanOperator", "BooleanOption", "Boolean",
  "BooleanShape", "TransfiniteType", "TransfiniteArrangement",
  "TransfiniteCorners", "RecombineAngle", "PeriodicTransform",
  "Constraints", "Coherence", "HomologyCommand", "Homology", "FExpr",
  "FExpr_Single", "@14", "GetForced_Default", "GetForcedStr_Default",
  "DefineStruct", "@15", "Struct_FullName", "Append", "AppendOrNot",
  "VExpr", "VExpr_Single", "RecursiveListOfListOfDouble", "ListOfDouble",
  "ListOfDoubleOrAll", "FExpr_Multi", "RecursiveListOfDouble", "ColorExpr",
  "ListOfColor", "RecursiveListOfColor", "StringExprVar", "StringExpr",
  "@16", "NameStruct_Arg", "Str_BracedRecursiveListOfStringExprVar",
  "BracedOrNotRecursiveListOfStringExprVar",
  "BracedRecursiveListOfStringExprVar", "RecursiveListOfStringExprVar",
  "MultiStringExprVar", "StringIndex", "String__Index", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,    63,   490,   491,   492,   493,
      60,    62,   494,   495,   496,   497,    43,    45,    42,    47,
      37,   124,    38,    33,   498,   499,   500,    94,    40,    41,
      91,    93,   123,   125,    46,    35,   126,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   268,   269,   269,   270,   270,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   272,   272,   273,   273,
     273,   273,   273,   273,   273,   273,   274,   274,   274,   274,
     275,   275,   275,   275,   275,   275,   275,   276,   276,   277,
     277,   279,   280,   278,   281,   281,   283,   282,   284,   284,
     286,   285,   287,   287,   289,   288,   290,   290,   290,   290,
     290,   291,   291,   292,   292,   293,   293,   294,   294,   294,
     294,   294,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   296,   296,   297,
     297,   297,   298,   297,   299,   297,   297,   300,   297,   301,
     301,   302,   302,   302,   303,   303,   304,   304,   305,   305,
     306,   306,   306,   306,   306,   306,   306,   307,   307,   308,
     308,   309,   309,   309,   309,   309,   310,   310,   310,   311,
     311,   311,   311,   312,   312,   313,   313,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   315,   314,   316,   316,   316,   316,   316,
     317,   317,   317,   317,   318,   318,   318,   319,   319,   319,
     319,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   321,   321,   322,   322,   322,   322,   322,   322,   322,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   324,   324,   324,   324,   324,   324,   324,   324,
     325,   325,   326,   327,   327,   327,   327,   327,   327,   327,
     327,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   329,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   331,   331,   331,   332,   331,   333,   331,
     334,   331,   335,   331,   331,   331,   331,   331,   331,   336,
     336,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   338,   338,   338,   338,   338,   339,   339,   339,
     339,   339,   340,   340,   341,   342,   342,   343,   343,   344,
     344,   345,   345,   346,   346,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   348,   348,   348,   349,   349,   349,   350,   350,
     350,   350,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   353,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   354,
     354,   355,   355,   357,   356,   358,   358,   359,   359,   360,
     360,   361,   361,   361,   361,   361,   362,   362,   362,   362,
     363,   363,   364,   364,   364,   364,   364,   364,   365,   365,
     365,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   367,   367,   367,   367,   368,   368,
     368,   368,   369,   369,   370,   370,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   373,   372,   372,
     374,   374,   375,   376,   376,   377,   378,   378,   378,   378,
     379,   379,   379,   380,   380,   380,   381,   381,   381
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,     1,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     5,
       5,     7,     7,     7,     7,     9,     6,     6,     6,     8,
       0,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       3,     0,     0,    10,     1,     3,     0,    13,     1,     3,
       0,    15,     8,    14,     0,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     2,     7,     7,     4,     3,     6,
       9,     7,     6,     7,     6,     4,     8,     9,     9,     6,
       9,     6,     9,     5,     8,     8,    11,     6,     9,     5,
       7,     9,     9,    11,     7,     9,     9,     0,     1,     0,
       3,     5,     0,     9,     0,    11,     5,     0,     9,     0,
       3,     3,     5,     5,     0,     2,     0,     1,     1,     3,
       2,     2,     2,     1,     4,     2,     2,     0,     2,     1,
       3,     2,     2,     2,     2,     2,     1,     1,     3,     0,
       5,     5,     5,     0,     2,     0,     2,     7,     7,     7,
      10,    10,     8,     8,     7,     7,    11,     7,     8,     8,
       8,     9,     8,     8,     3,     4,    10,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     9,     7,     7,
       8,     8,    12,     0,     9,     1,     1,     1,     1,     4,
       1,     1,     1,     4,     1,     1,     4,     1,     1,     1,
       4,     5,    11,     5,     9,     9,     7,     4,     9,    10,
       9,     1,     1,     0,     2,     6,     7,     7,     6,     7,
       8,    10,    14,    16,    12,    14,    14,    14,    14,     8,
       8,     6,     4,     5,     5,     6,     6,     3,     4,     3,
       5,     6,     5,     4,     3,     4,     3,     4,     5,     4,
       5,     3,     5,     7,     7,     3,     2,     7,     3,     2,
       2,     2,     2,     2,    15,     2,     2,     7,     2,     9,
      11,     2,     4,     2,     2,     2,     2,    16,    11,     6,
       8,     8,    10,     1,     2,     2,     1,     3,     3,     4,
       4,     1,     1,     5,    11,    13,     0,     7,     0,    13,
       0,    15,     0,     6,     9,     2,     3,    10,    13,     1,
       2,     5,     7,     2,     2,     3,     2,     3,     2,     3,
       9,     6,     1,     1,     1,     1,     1,     0,     2,     3,
       3,     4,     9,     4,    14,     0,     3,     0,     1,     0,
       2,     0,     2,     0,     2,     5,     6,     7,     6,     5,
       3,     8,     6,     8,     8,     5,     4,     6,    11,    11,
      18,    18,    12,    12,    12,    10,     4,     4,     4,     4,
       4,     6,     2,     3,     6,     1,     1,     1,     2,     5,
       7,    10,     1,     3,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     4,     4,     4,
       4,     4,     4,     4,     4,     6,     6,     6,     4,     6,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     1,     4,     6,     1,     4,     4,
       4,     6,     5,     7,     8,    10,     4,     4,     6,     4,
       3,     2,     5,     5,     3,     5,     6,     8,     6,     8,
       6,     4,     7,     6,     6,     6,     4,     6,     4,     0,
       2,     0,     2,     0,     7,     1,     3,     1,     2,     0,
       3,     1,     2,     2,     3,     3,    11,     9,     7,     7,
       1,     3,     1,     1,     2,     3,     4,     5,     1,     3,
       1,     2,     3,     3,     5,     4,     4,     2,     4,     2,
       3,     3,     4,     5,     5,     5,     5,     1,     1,     1,
       3,     5,     7,     4,     4,     4,     6,     6,     8,     8,
       4,    14,     4,     4,     1,     1,     3,     3,     9,     7,
       1,     5,     3,     6,     1,     3,     1,     1,     4,     4,
       3,     5,     6,     8,     6,     4,     5,     1,     4,     1,
       1,     1,     1,     4,     6,     4,     6,     5,     7,     4,
       4,     4,     8,     4,     4,     4,     4,     8,     8,     6,
       4,     6,     4,     1,     1,     4,     4,     0,     6,     4,
       2,     4,     4,     1,     1,     3,     1,     1,     3,     3,
       3,     5,     7,     5,     5,     8,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     2,     3,     1,   636,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
       0,     0,   206,     0,     0,   207,     0,   208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   342,   343,   344,   345,   346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,     0,     0,   311,   312,     0,     0,     0,   306,
       0,     0,     0,     0,     0,     0,   395,   396,   397,     0,
       0,     0,     5,     6,     7,     8,    10,     0,    11,    24,
      12,    13,    14,    15,    23,    22,    21,    16,     0,    17,
      18,    19,    20,     0,    25,     0,   637,     0,   233,     0,
       0,     0,     0,     0,     0,   283,     0,   285,   286,   281,
     282,     0,   288,     0,   291,   233,     0,   293,   294,   119,
     129,   636,   509,   505,    73,    74,     0,   205,   206,   207,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   295,   296,     0,   217,   218,
     219,     0,     0,     0,     0,   451,   452,   454,   455,   453,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   459,
     460,   461,     0,     0,   205,   210,   211,   212,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   456,
     457,   458,     0,     0,     0,     0,     0,     0,     0,     0,
     547,   548,     0,   549,   522,   402,   464,   467,   325,   523,
     505,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,   210,   211,     0,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   511,     0,     0,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   636,     0,     0,   233,     0,     0,   392,     0,     0,
       0,   214,   215,     0,     0,   530,     0,     0,   528,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   636,     0,     0,   570,     0,     0,     0,     0,   279,
     280,     0,   587,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   589,     0,   613,   614,
     591,   592,     0,     0,     0,     0,     0,     0,   590,     0,
       0,     0,     0,   304,   305,     0,   233,     0,   233,     0,
       0,     0,     0,   505,     0,   276,     0,     0,   233,   398,
       0,     0,    84,     0,    66,     0,     0,    70,    69,    68,
      67,    72,    71,    73,    74,     0,     0,     0,     0,     0,
       0,     0,   576,   505,     0,   232,     0,   231,     0,   184,
       0,     0,   576,   577,     0,     0,     0,   626,     0,   627,
     577,     0,     0,     0,   117,   117,     0,   503,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   564,   565,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   537,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   405,     0,   404,
     531,   406,     0,   524,     0,     0,   505,     0,   539,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,     0,   481,     0,     0,     0,     0,     0,
       0,     0,   326,     0,   359,   359,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233,     0,   233,
     233,     0,   513,   512,     0,     0,     0,     0,   233,   233,
       0,     0,     0,     0,   322,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   361,     0,
       0,     0,     0,     0,     0,   233,   259,     0,     0,   257,
     393,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   370,   278,     0,     0,     0,     0,     0,
       0,     0,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   308,
     307,     0,   264,     0,     0,   266,     0,     0,     0,     0,
     404,     0,   233,     0,     0,     0,     0,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,    77,
      78,    79,    80,    81,     0,     0,     0,     0,    88,    75,
      76,     0,     0,     0,   275,    40,   271,     0,     0,     0,
       0,     0,   227,     0,     0,     0,     0,     0,   234,     0,
       0,   185,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   292,
       0,     0,   118,     0,     0,     0,   507,     0,     0,   506,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   353,     0,
       0,     0,   209,     0,     0,     0,     0,     0,     0,   387,
     388,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   505,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   462,   480,     0,     0,
       0,     0,   540,   541,     0,     0,     0,     0,     0,   499,
       0,   403,   525,     0,     0,     0,     0,   533,     0,   422,
     421,   420,   419,   415,   416,   423,   424,   418,   417,   408,
     407,     0,   409,   532,   410,   413,   411,   412,   414,   506,
       0,     0,   484,     0,   550,     0,     0,     0,     0,     0,
       0,     0,     0,   357,     0,     0,     0,     0,     0,     0,
     390,     0,     0,     0,     0,     0,   389,     0,   233,     0,
       0,     0,     0,     0,   515,   514,     0,     0,     0,     0,
       0,     0,     0,   316,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   376,     0,     0,
       0,   258,     0,     0,     0,   252,     0,     0,     0,     0,
     386,   403,   529,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   309,   310,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   617,     0,
       0,     0,   501,     0,     0,   263,   267,   265,   269,     0,
       0,   409,     0,   506,   484,   638,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,     0,   403,     0,
       0,     0,    66,     0,     0,    87,     0,    66,    67,     0,
       0,     0,   506,     0,     0,   484,     0,     0,     0,   203,
       0,     0,     0,   633,    28,    26,    27,     0,     0,     0,
       0,     0,   580,    30,     0,    29,     0,     0,   272,   628,
     629,     0,   630,   580,     0,     0,    82,   120,    83,   130,
     508,   510,   136,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   566,   567,   220,
       9,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     448,   435,     0,   437,   438,   439,   440,   441,   563,   442,
     443,   444,     0,     0,     0,     0,     0,   555,   554,   553,
       0,     0,     0,   560,     0,   496,     0,     0,     0,   498,
       0,     0,     0,     0,   134,   479,   536,   535,   213,     0,
       0,   465,   562,   470,     0,   476,     0,     0,     0,     0,
     526,     0,     0,   477,   542,   538,     0,     0,     0,     0,
     469,   468,    73,    74,   491,     0,     0,     0,     0,     0,
       0,     0,   403,   355,   360,   358,     0,   369,     0,   156,
     157,     0,   213,     0,   403,     0,     0,     0,     0,     0,
     253,     0,   268,   270,     0,     0,     0,   221,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,     0,   313,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   233,     0,   362,   375,     0,     0,     0,
       0,   254,     0,     0,     0,     0,   216,   365,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
       0,     0,     0,     0,   603,     0,   610,   599,   600,   601,
       0,   616,   615,     0,     0,   604,   605,   606,   612,   620,
     619,     0,   147,     0,   593,     0,   595,     0,     0,     0,
     588,     0,     0,   262,     0,     0,     0,     0,     0,     0,
       0,   348,     0,     0,     0,   399,     0,   634,     0,   109,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,     0,     0,     0,     0,   585,    51,     0,
       0,     0,    64,     0,    41,    42,    43,    44,    45,    46,
       0,   469,   468,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   579,   578,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,   137,   138,     0,     0,     0,     0,   163,   163,     0,
       0,     0,     0,     0,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   366,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     543,   544,   545,   546,     0,     0,     0,     0,     0,   499,
     500,     0,   472,     0,     0,   534,   425,   527,   485,   483,
       0,   482,     0,     0,   551,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
     391,     0,     0,     0,    77,     0,   261,     0,     0,     0,
       0,     0,     0,     0,   334,     0,     0,   333,     0,   336,
       0,   338,     0,   323,   330,     0,     0,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   377,     0,
       0,   256,   255,   394,     0,     0,     0,    37,    38,     0,
       0,     0,     0,     0,     0,   571,     0,     0,     0,   299,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   501,   502,   597,     0,   372,   485,     0,     0,   233,
     349,     0,   350,   233,     0,     0,   586,     0,    94,     0,
       0,     0,     0,    92,     0,   574,     0,   107,     0,    99,
     101,     0,     0,     0,    89,     0,     0,     0,     0,     0,
      36,   485,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,   581,     0,     0,
      34,    33,     0,   581,   631,   287,     0,     0,   121,   126,
       0,     0,     0,   140,   145,   146,   141,   142,   504,     0,
      85,     0,    86,   167,     0,     0,     0,     0,   168,   187,
     188,   165,     0,     0,     0,   169,   198,   189,   193,   194,
     190,   191,   192,   177,     0,     0,   436,   450,   449,   445,
     446,   447,   556,     0,     0,     0,   494,   495,   497,   135,
     463,   493,   466,   471,     0,     0,   499,   199,   478,    73,
      74,     0,   490,   486,   488,   557,   195,     0,     0,     0,
     159,     0,     0,   367,     0,   158,     0,     0,     0,     0,
       0,     0,   277,     0,     0,     0,     0,   233,   233,     0,
       0,   335,   522,     0,     0,   337,   339,     0,     0,   317,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     226,   196,     0,     0,     0,     0,     0,     0,     0,   174,
       0,   175,     0,     0,     0,     0,   110,   114,     0,   611,
       0,     0,   609,     0,   621,     0,     0,   148,   149,   618,
     594,   596,     0,     0,     0,     0,     0,     0,   347,   351,
     347,     0,   400,    93,     0,     0,    66,     0,     0,    91,
       0,   572,     0,     0,     0,     0,     0,     0,   624,   623,
       0,     0,     0,     0,     0,   520,     0,     0,    77,   273,
     486,   274,     0,     0,     0,     0,     0,   238,   235,     0,
       0,   584,   582,     0,     0,     0,     0,   122,   127,     0,
       0,     0,   564,   565,   139,   371,   164,   172,   173,   178,
       0,     0,     0,     0,     0,   180,     0,     0,     0,     0,
       0,     0,   473,     0,     0,     0,   552,   492,     0,     0,
     179,     0,   200,   356,     0,     0,     0,     0,   201,     0,
       0,     0,     0,     0,     0,   519,   518,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   249,     0,
       0,     0,     0,     0,     0,     0,     0,   240,     0,     0,
       0,   373,   374,    39,   182,   183,     0,   569,     0,     0,
     301,   300,     0,     0,     0,     0,     0,     0,   151,   152,
     155,   154,   153,     0,   598,     0,   635,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   575,     0,     0,
       0,    96,     0,     0,     0,    47,     0,     0,     0,     0,
       0,    49,     0,   239,   236,   237,    35,     0,     0,   632,
     289,     0,   134,   147,     0,     0,   144,     0,     0,     0,
     166,   197,     0,     0,     0,     0,     0,   558,   559,     0,
     499,   474,   487,   489,     0,     0,   181,   204,     0,     0,
       0,   363,   363,     0,   115,   116,   233,     0,   224,   225,
     324,     0,   331,     0,     0,   233,     0,     0,     0,     0,
       0,     0,     0,     0,   230,     0,   228,     0,     0,     0,
       0,   111,   112,   602,   608,   607,   150,     0,     0,     0,
     352,     0,     0,   108,   100,   102,     0,    90,   625,    97,
      98,    52,     0,     0,     0,     0,   521,     0,     0,   487,
     583,     0,     0,     0,     0,   124,   622,     0,   131,     0,
       0,     0,     0,   186,     0,     0,     0,   327,     0,   170,
     171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   517,     0,   341,     0,     0,   318,     0,   241,     0,
       0,     0,     0,     0,     0,   229,     0,   568,   302,     0,
       0,   385,   233,   401,     0,   573,     0,    48,     0,     0,
       0,    65,    50,     0,   290,   123,   128,   134,     0,     0,
     161,   162,   160,     0,     0,   475,     0,     0,     0,     0,
     364,   378,     0,     0,   379,     0,   222,     0,   332,     0,
     314,     0,   233,     0,     0,     0,     0,     0,     0,   176,
     113,   298,   347,   106,     0,     0,     0,     0,     0,     0,
     132,   133,     0,     0,     0,   202,     0,   382,     0,   383,
     384,   516,     0,     0,   320,   244,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,    62,     0,     0,   125,
       0,     0,   328,     0,     0,   340,   319,   315,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   245,   246,   247,   248,
       0,   242,   354,    53,     0,    60,     0,   284,     0,   561,
       0,     0,   321,     0,     0,    54,     0,     0,   297,     0,
       0,   243,     0,     0,     0,     0,     0,     0,    57,    55,
       0,    58,     0,   380,   381,     0,     0,    63,    61,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   122,  1107,   123,   124,  1091,  1964,  1970,
    1394,  1615,  2126,  2254,  1395,  2227,  2270,  1396,  2256,  1397,
    1398,  1619,   456,   614,   615,  1177,  1712,   125,   813,   484,
    1982,  2137,  1983,   485,  1851,  1475,  1430,  1431,  1432,  1578,
    1787,  1788,  1248,  1674,  1665,  1861,   788,   626,   288,   289,
     364,   212,   290,   466,   467,   129,   130,   131,   132,   133,
     134,   135,   136,   291,  1283,  2161,  2218,   981,  1279,  1280,
     292,  1070,   293,   140,  1503,  1246,   953,   996,  2095,   141,
     142,   143,   144,   294,   295,  1204,  1219,  1349,   296,   818,
     297,   817,   487,   643,   332,  1824,   368,   369,   299,   584,
     383,  1378,  1606,   477,   472,  1342,  1046,  1655,  1817,  1818,
    1031,   479,   146,   433
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1958
static const yytype_int16 yypact[] =
{
   13013,    84,   103, 13219, -1958, -1958,  -204,    66,    16,  -127,
     -80,   -26,    33,   201,   210,   248,   253,    18,    47,    54,
      81,   342,   353,   147,   158,    24,   -13,   381,   -13,   178,
     181,   191,    50,   224,   252,    68,   283,   289,   329,   336,
     375,   396,   412,   425,   430,   462,   344,   488,   619,   724,
     729,   476,   593,   636,   491,  7309,   494,   510,   532,   691,
     -62,   713,   381,     7,    37,   542,   714,   -89,   558,   429,
     429,   565,   486,    41,   581, -1958, -1958, -1958, -1958, -1958,
     582,   159,   740,   755,    19,    62,   770,   748,    15,  6285,
     803,   887,   906,   912,  6285,   920,   -74,   -67,   680,    20,
      69, -1958,   696,   705, -1958, -1958,   924,   958,   716, -1958,
    4452,   707,  9221,    12,    28,   381, -1958, -1958, -1958, 12516,
     721,   981, -1958, -1958, -1958, -1958, -1958,   730, -1958, -1958,
   -1958, -1958, -1958, -1958, -1958, -1958, -1958, -1958,   111, -1958,
   -1958, -1958, -1958,    53, -1958,   983,   739,  6014,    80,   736,
    1009, 12516, 13404, 13404, 13404, -1958, 12516, -1958, -1958, -1958,
   -1958, 13404, -1958, 12516, -1958, -1958, 12516, -1958, -1958, -1958,
   -1958,   806,   758,  1040, -1958, -1958,  9472, -1958, -1958, -1958,
   -1958,   824,    24, 12516, 12516, 12516,   826, 12516, 12516, 12516,
     831, 12516, 12516, 12516, 12516, 12516, 12516, 12516, 13404, 12516,
   12516, 12516, 12516,  6285,   834, -1958, -1958, 10115, -1958, -1958,
   -1958,   797,  6285,  7565, 13404, -1958, -1958, -1958, -1958, -1958,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,    76,   -13,   -13,   -13,   -13,
     -13,   835,   -13,   -13,   844,   381,   649,   649,   649, -1958,
   -1958, -1958,   -13,   -13,    31,   903,   909,   911,   845,  7565,
     974,   381,   381,   850,   -13,   -13,   851,   852,   853, -1958,
   -1958, -1958, 12516,  7821, 12516, 12516,  8077,    24,   918,    32,
   -1958, -1958,   854, -1958,  5124, -1958, -1958, -1958, -1958, -1958,
     112, 12516, 10115, 10115,   856,   857,  8333,  6285,  6285,  6285,
   -1958, -1958, -1958,   859, -1958,   858,   860,  8589,   861, 11065,
    1115,  7565,   863,    20,   864,   865,   429,   429,   429, 12516,
   12516,   194, -1958,   266,   429, 11152,   296,   354,   871,   872,
     873,   874,   875,   878,   882, 10115, 12516,  6285,  6285,  6285,
     360,    25,  1116,   892, -1958,  1150,  1151, -1958,   896,   917,
     919, -1958, -1958,   927,  6285, -1958, 12516,  6541, -1958,  1114,
     928,   922,   932,   949,  1174,  1180,   930, 12516,   953, 12516,
   12516,   284, 12516,   950, -1958,  1020, 12516, 12516, 12516, -1958,
   -1958, 12516, -1958,   -13,   -13,   -13,   957,   959,   961,   -13,
     -13,   -13,   -13,   -13,   -13,   -13, -1958,   -13, -1958, -1958,
   -1958, -1958,   -13,   -13,   962,   963,   -13,   964, -1958,   965,
    1210,  1217,   968, -1958, -1958,  1218,  1219,  1225,  1224,   975,
     -13, 12516, 15112,   161, 13404, -1958, 10115, 12516, -1958, -1958,
    7565,  7565, -1958,   976,  9472,   381,  1232, -1958, -1958, -1958,
   -1958, -1958, -1958, 12516, 12516,   451,  7565,  1234,   829,   979,
    1145,   982,  1237,    73,   984, -1958,   986, 13536, 12516, -1958,
    1428,  -132, -1958,   117,   -70,   -47,  8265, -1958,    91, -1958,
     150,  8521,  3118,  8777,  -210,   -69,  1148, -1958,    24,   985,
   12516,   987, 15628, 15653, 15678, 12516, 15703, 15728, 15753, 12516,
   15778, 15803, 15828, 15853, 15878, 15903, 15928,   991, 15953, 15978,
   16003, 14155,  1246, 12516, 10115,  5333, -1958,   414, 12516,  1249,
    1250,   998, 12516, 12516, 12516, 12516, 12516, 12516, 12516, 12516,
   12516, 12516, 12516, 12516, 12516, 12516, 12516, 12516, 10115, 12516,
   12516, 12516, 12516, 12516, 12516, 12516, 12516, 10115, 10115,   997,
   12516, 12516, 13404, 12516, 13404,  7565, 13404, 13404, 13404,   999,
    1021,  1023,  1025, 12516,    88, -1958, 11408, 12516,  7565,  6285,
    7565, 13404, 13404, 10115,    24,  9472,    24,  1003, 10115,  1003,
   -1958,  1003, 16028, -1958,   436,  1026,    17,  1222, -1958,  1284,
   12516, 12516, 12516, 12516, 12516, 12516, 12516, 12516, 12516, 12516,
   12516, 12516, 12516, 12516,  8845, 12516, 12516, 12516, 12516, 12516,
      24, 12516, 12516,    51, -1958,   839, 16053,   559,   561, 12516,
   12516, 12516, -1958,  1304,  1308,  1308,  1058, 12516, 12516, 12516,
   12516,    34, 10115, 10115, 15140,  1059,  1311, -1958,  1061, -1958,
   -1958,  -138, -1958, -1958,  9535,  9791,   429,   429,    80,    80,
     -73, 11152, 11152, 12516,  4640,   -71, -1958, 12516, 12516, 12516,
   12516, 12516, 12516, 12516, 12516, 12516,   562, 16078,  1312,  1314,
    1317, 12516, 12516,  1322, 12516, -1958, -1958, 12516,  4810, -1958,
   -1958, 10115, 10115, 10115, 12516,  1323, 16103,  1067, 12516, 10115,
   12516, 12516, 12516, -1958, -1958, 12516, 16128, 12516, 16153, 16178,
    1141, 10047, -1958,  1071,  5481, 16203, 16228, 15223, 13404, 13404,
   13404, 13404, 13404, 13404, 13404, 13404, 13404, 12516, 13404, 13404,
   13404, 13404,    -2,  9472, 13404, 13404, 13404,    24,    24, -1958,
   -1958, 10115, -1958,  1072,  4981, -1958,  1074,  5166, 12516, 12516,
    1003, 12516, -1958,    24, 12516, 12516,    51,  1077,   569, 16253,
   13449,  1082,   570, 12516,  1337,  1084,  7565, 16278, 15250, -1958,
   -1958, -1958, -1958, -1958,  1080,  1340,   211,  1342, -1958, -1958,
   -1958, 10115,   230, 12516, -1958, -1958, -1958,    24, 12516, 12516,
      51,  1089, -1958,  1092,   -34,   381,     7,   381, -1958,  1090,
   14184, -1958,   124, 10115,    24, 12516, 12516,    51,  1345, 10115,
    1347, 10115, 12516,  1348, 13404,    24, 11495,    51, 12516, -1958,
   12516,  1349, -1958,    24,  1350, 13404, 12516,  1098,  1099, -1958,
   12516, 10397,  9472,  1351,  1353,  1356, 16303,  1357,  1358,  1360,
   16328,  1361,  1362,  1363,  1364,  1365,  1369,  1371, -1958,  1372,
    1391,  1393, -1958, 12516, 16353, 10115,  1139, 10115, 14213, -1958,
   -1958,  1397, 15196, 15196, 15196, 15196, 15196, 15196, 15196, 15196,
   15196, 15196, 15196, 10749, 15196, 15196, 15196, 15196,   926,   313,
   15196, 15196, 15196, 11096, 11439, 11777, 12122, 12471,  5333,  1146,
    1147,    96, 10115, 12615, 12648,   313, 12797,   313,  1140,  1142,
    1143,   165, 10115, 12516, 12516, 12516, 17303, -1958,   313,  1149,
   14242, 14271, -1958, -1958,  1144,   341,   313,  -158,  1154,   -77,
     571,  1407, -1958,    51,   313,  7565,  1152,  5674,  6223,  1057,
     783,   956,   956,   530,   530,   530,   530,   530,   530,   557,
     557, 10115,  -111, -1958,  -111,  -111,  1003,  1003,  1003,  1153,
   16378, 15277,   511, 10115, -1958,  1409,  1156,  1157, 16403, 16428,
   16453, 12516,  7565,  1416,  1415, 10814, 16478, 14300, 16503, 16528,
   -1958, 12516,   572,   578, 10115,  1158, -1958,  5553, -1958,  6068,
   11119,   429, 12516, 12516, -1958, -1958,  1160,  1162, 11152,  6985,
    1283,    -6,   429, 11462, 16553, 14329, 16578, 16603, 16628, 16653,
   16678, 16703, 16728,  1165,  1421, 12516,  1425, -1958, 12516, 16753,
   14358, -1958, 15304, 12145, 15331, -1958,   583,   586,   588, 14387,
   -1958, -1958, -1958,  1578,   591, 15358, 15385, 13011, 16778,  1426,
   16803,  1430,  1431,  1168, 12516, 12483, 12516, 12516, -1958, -1958,
      43,   364,   433,   364,  1176,  1182,  1172,   313,   313,  1175,
   13462,   313,   313,   313,   313, 12516,   313,  1434, -1958,  1177,
    1186,   475,   -42,  1185,   596, -1958, -1958, -1958, -1958, 16828,
   15196,  -111, 12646,  1183,   537,  1184,  1254,  1442,  1287, 11746,
    1189,  1191,  1448,  7565, 14416, -1958, 12516,  1449,   243,   107,
      51,    26,  9472, 12516,  1452, -1958,   598,  1412,  1413,  7565,
   14445,   297,  1199, 16853, 15412,   500, 12516, 12516,  1206,  1203,
    1208,  1205,  9101, -1958, -1958, -1958, -1958, 13404,   238,  1204,
   16878, 15439,  1211, -1958,   369, -1958,   392, 13495, -1958, -1958,
   -1958,  1207, -1958,  1212, 14474, 13528, -1958,    72, -1958, -1958,
   17303, -1958,    74, 15196, 12516,   313,   429,  7565,  7565,  1465,
    7565,  7565,  7565,  1467,  7565,  7565,  7565,  7565,  7565,  7565,
    7565,  7565,  7565,  7565,  2242,  1468, 10115,  5333, -1958, -1958,
   -1958, -1958, -1958, -1958, -1958, -1958, -1958, -1958, -1958, -1958,
   -1958, -1958, 12516, -1958, -1958, -1958, -1958, -1958, -1958, -1958,
   -1958, -1958, 12516, 12516, 12516, 12516, 12516, -1958, -1958, -1958,
     604, 12516, 12516, -1958, 12516, -1958,  7565, 13404, 13404, -1958,
     605, 14503, 14532, 14561,  1209, -1958, -1958, -1958,  1286, 12516,
   12516, -1958, -1958, -1958,    51, -1958,    51, 12516, 12516,  1223,
   -1958,  7565,   -13, -1958, -1958, -1958, 12516, 12516,   606,    51,
     -87,     9, 12516, 12516, -1958,   313,   607,  7565, 10115, 10115,
    1471,  1474,  1476,  6496, -1958, -1958,  1478, -1958,  1226, 17303,
    1220,  1479, -1958,  1481,  1482,  2390,  1484,  1485,   613,   552,
   -1958, 12689, -1958, -1958,   -44, 13561, 13594, -1958, -1958, 14590,
    -199,  1374,  1491, 11840,  1238,  1493,  1243,    29,    38,   -78,
   -1958,   -41, -1958,    -6,  1495,  1497,  1500,  1501,  1502,  1503,
    1504,  1505,  1506,    80,  7565, 17303, -1958,  2413,  1252,  1414,
    1509, -1958,  1511,  1512,  1411,  1514, -1958, -1958,  1515,  1518,
    1520, 12516,  1521,  7565,  1522,  7565,  7565,  1523, 13627, -1958,
    6473,  1029,    51,    51, -1958, 10115, -1958, -1958, -1958, -1958,
   13404, -1958, -1958, 12516, 13404, -1958, -1958, -1958, -1958, 17303,
   -1958,  1265,  1264, 13404, -1958, 13404, -1958,    51, 13404,  1273,
   -1958,  1266,  1529, -1958,    51, 12516, 12516,  1274,   381,  1275,
   12091, -1958,  2510,  1276,  7565, -1958,  1277, -1958, 14619, -1958,
   -1958, 12516,  1533,   573, 12516,  1535,  1536,    20,  1538,  1285,
    1541,  2557, -1958,   313,   -13,   -13,  1542, -1958, -1958,  1291,
    1292,  1289, -1958,  1546, -1958, -1958, -1958, -1958, -1958, -1958,
      51,   192,  2075, 12516, 15466, 16903, 12516,  9352, 12516, 10115,
    1290,   614,  1548,   193,    51, -1958,  1294, 12516,  1549,  1554,
   12516,    51, 12178,  1555, 12516, 10366,   313,  5383, 12516, 12516,
    1303,  1298, -1958,  1561, 16928,  1562,   176,  1433,  1433,  7565,
    1564,  1565,  1566,  7565,  -105,  1567,  1568,  1570,  1572,  1573,
    1575,  1576,  1577,  1579, -1958,  1581,   615, 15196, 15196, 15196,
   15196, 15196, 15196,   313, 13660, 13693, 13726,  1328,   313,   313,
   -1958, -1958, -1958, -1958,    74,   313, 16953, 15196,  1329,  -191,
   17303, 15196, -1958,  1584,   313, 17303, 17303, -1958,   503, -1958,
      51, -1958, 16978, 15493, -1958,   313,  1585,   620,   621,  7565,
    7565,  7565,  1588,  1589, -1958,   237, 12516,  7565,  7565,  7565,
   -1958,  1332,  1334,  1590,  1592,  1593, -1958, 12516, 12516, 12516,
    1341,  1343,  1344,  1339, -1958,  2861,  7565, -1958, 12516, -1958,
    1605, -1958,  1606, -1958, -1958, 11152,   -39,  6797, -1958,  1352,
    1354,  1359,  1366,  1367,  1368,  9603,  1355,  1607, -1958, 10115,
    1370, -1958, -1958, -1958,  1373, 12516, 12516, -1958, -1958, 15520,
    7565,  1613,  7565,  1614,  1432, -1958, 12516, 12516, 12516, -1958,
    1617,   452,   478,  1376,  6729,  1378, 12516,    27,   313,  1379,
     313,  1380, -1958, -1958,  9472, -1958,   515, 12516,  1375, -1958,
   -1958,  3166, -1958, -1958,  1381,  1618, -1958,  3209, -1958,  1382,
    1619,   348,  3277, -1958,    20, -1958,   623, -1958, 12516, -1958,
   -1958,   237,  3779,  2322, -1958,  1392, 12516, 12516,  7565,  1377,
   -1958,   120,   560,  1621, 17003,  1625,  1407, 17028,  1388,   656,
   17053,   658,  1634,  1646, -1958, -1958, 13404,  1395,  1650, 17078,
   -1958, -1958, 13759,  1398, -1958, -1958,  7241,  5742, 17303, -1958,
    1648,   -13,  8077, -1958, -1958, -1958, 17303, 17303, -1958,    74,
   -1958,  1651, -1958, -1958,   429,  1652,  1653,  1654, -1958, -1958,
   -1958,  1539,   -60,  1519,  1675, -1958, -1958, -1958, -1958, -1958,
   -1958, -1958, -1958, -1958,  1678,  1422, -1958, -1958, -1958, -1958,
   -1958, -1958, -1958, 12516, 12516, 12516, -1958, -1958, -1958,  1298,
   -1958, -1958, -1958, -1958, 12516,  1427,  1423, -1958, -1958, 12516,
   12516,   313,   -87, -1958, -1958, -1958, -1958,  1429,  1441,  1682,
    -105,  1683, 12516, -1958,  7565, 17303,  1550,  1553,   779, 10115,
   10115, 12516, -1958, 10814, 14648, 17103,  7497,    80,    80, 12516,
   12516, -1958,   152,  1437, 17128, -1958, -1958, 14677,    -7, -1958,
    1686,  1699,  7565,   429,   429,   429,   429,   429,  7053,  1700,
   -1958, -1958,   664, 10115, 12516,  3500,  3782,  1701,  1702, -1958,
    1703, -1958,  7565,  7753,   657, 17153, -1958, -1958, 10462, -1958,
   13404, 12516, -1958, 13404, 17303, 10718,  9472,  1443, -1958, -1958,
   -1958, -1958,  1453,  1444, 12516, 12516, 14706, 12516, 13449, -1958,
   13449,  7565, -1958, -1958,    51,    26,  9472, 12516,  1707, -1958,
    1708, -1958,    20, 15547,  7565, 13404,  1710,   313, -1958,  1450,
     313, 12516, 13792, 13825,   666, -1958, 12516, 12516,  1456, -1958,
    1457, -1958,  1476,  1714,  1717,  1482,  1718, -1958, -1958,  1719,
   12516, -1958, -1958, 12516, 12429,  1722, 12516, -1958, -1958,  1469,
    2322,   669,  3076,  1725, -1958, -1958,   273, -1958, -1958, -1958,
    1582,  1727,  1472,  1473,  1477, -1958,  1731,  7565, 15196, 15196,
   13858, 15196, -1958,  1483, 17178, 15574, -1958, -1958, 10115, 10115,
   -1958,  1734, -1958, 17303,  1735, 12516, 12516,  1486, -1958,   672,
     692, 15168,  3831,  1737,  1488, -1958, -1958, 12516,  1489,  1490,
   14735, 15601,  1738,  7565,  1739,  1492, 12516, -1958, -1958,   699,
       5,   205,   260,   262,   270,  9859,   279, -1958,  1741,   719,
   14764, -1958, -1958, -1958, -1958, -1958,  1556, -1958, 12516, 12516,
   -1958, -1958, 10115,  4010,  1745,  1498, 15196,   313, 17303, -1958,
   -1958, -1958, -1958,    27, -1958,  9472, -1958, 14793,  1499,  1507,
    1508,  1749,  1752,  1755,  4103, -1958, -1958, -1958,  1510,  1757,
     727, -1958,  1758,  1759,   415, 17303, 12516, 12516,  1513,  7565,
     732, 17303, 17203, -1958, -1958, -1958, -1958, 17228, 13891, -1958,
   -1958, 14822,  1209,  1264,  7565,   313, -1958, 12516,  9472,    24,
   -1958, -1958, 10115, 10115, 12516,  1760,   734, -1958, -1958, 12516,
    1423, -1958, -1958, -1958,   737,   743, -1958, -1958,  4201,  4237,
    7565,    87,   548, 10115, -1958, -1958,    80,  8009, -1958, -1958,
   -1958,  1761, -1958,  1516,  7565, -1958, 14851,  1762, 10115,   429,
     429,   429,   429,   429, -1958,  1766, -1958, 12516, 14880, 14909,
     744, -1958, -1958, -1958, -1958, -1958, -1958,  1517,  1767,  1524,
   -1958,  1772,    20, -1958, -1958, -1958,  1591, -1958, -1958, -1958,
   -1958, -1958, 12516, 13924, 13957,  7565, -1958,  1775, 12516,  1525,
   -1958, 12516,  1776,  1526,  1527, -1958, -1958,  4609, -1958,  1530,
     745,   750, 14938, -1958,  1531, 13990,  1532, -1958,  1534, -1958,
   -1958,   751,  1537,   429,  7565,  1778,  1543,   429,  1779,   775,
    1540, -1958, 12516, -1958,  1786,  1657, 12822,  1544, -1958,   776,
     338,   346,   352,   368,   374, -1958,  4350, -1958, -1958,  1788,
    1789, -1958, -1958, -1958,  1791, -1958,  1545, 17303, 12516, 12516,
     778, -1958, 17303, 14023, -1958, -1958, -1958,  1209,  9472,  1551,
   -1958, -1958, -1958, 12516, 12516, -1958, 10115,  1795,   429,   180,
   -1958, -1958,   429,   182, -1958,  1798, -1958, 14967, -1958, 12516,
   -1958,    -6, -1958,  1802, 10115, 10115, 10115, 10115,  9859, -1958,
   -1958, -1958, 13449, -1958, 12516, 17253, 14056,    57, 12516,  1569,
   -1958, -1958, 14089, 14122,   785, -1958,   391, -1958,   393, -1958,
   -1958, -1958,  4459,   361, 12865, -1958,   787,   793,   794,   795,
     400,   801,  1571,   802, -1958, 12516, -1958,  7565, 14996, -1958,
   12516, 12516, -1958,   429,   429, -1958, -1958, -1958,    -6,  1825,
    1827,  1830,  1831, 10115,  1832,  1833,  1834,  1580, 17278,   804,
    1835, 15025, 15196,   406,   422,   484, -1958, -1958, -1958, -1958,
     810, -1958, -1958, -1958, 13404, -1958,  1583, -1958,  1837, -1958,
   12516, 12516, -1958,  1838,   812, -1958,  1586,  7565, -1958, 15054,
   15083, -1958,  1840, 13404, 13404,   818,  1843,  1844, -1958, -1958,
     820, -1958,  1845, -1958, -1958,  1846, 13404, -1958, -1958, -1958
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1958, -1958, -1958, -1958,   440, -1958, -1958, -1958, -1958,  -319,
   -1958, -1958, -1958, -1958, -1958, -1958, -1958, -1958, -1958, -1958,
   -1958, -1958,  -754,   -76,  4806,  3771,  -163, -1958,  1384, -1958,
   -1958, -1958, -1958, -1958, -1958, -1957, -1958,   382,   198,  -125,
   -1958,   -84, -1958,   140,   423, -1958,  1859, -1958,   259,   -43,
   -1958, -1958,     0,  -643,  -116, -1958, -1958, -1958, -1958, -1958,
   -1958, -1958,   772,  1862, -1958, -1958, -1958, -1958, -1276, -1275,
    1863, -1789,  1864, -1958, -1958, -1958,  1245, -1958,  -139, -1958,
   -1958, -1958, -1958,  2398, -1958, -1958, -1464,   293,  1874, -1958,
       2, -1958, -1958,   -56, -1958, -1742,   807,   -51,  2963,  2994,
    -322,    77, -1958,   232,   -91, -1958, -1958,    93,   268, -1753,
    -153,  1075, -1958,    -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -585
static const yytype_int16 yytable[] =
{
     147,   638,   171,   128,  1534,   976,   977,  1536,   478,  1948,
    1909,  1949,  1083,   331,   333,  1705,   336,   425,  1089,   420,
     317,   424,   173,   351,   381,  2073,   488,   172,   171,   673,
     171,  1785,  1941,   427,   376,  1529,   565,   588,  1672,   155,
     960,   378,  1862,   374,  1531,   337,   305,   646,   647,   482,
    1322,   811,   300,   162,   186,   759,   462,   812,   148,   439,
     164,  1863,   149,  2206,  1521,  1272,   356,   174,   357,   175,
     306,   457,   190,   385,   305,   322,  1217,   171,  1427,  1425,
     150,   355,   777,  1273,   464,   489,   300,   760,   761,  1673,
       4,   300,   171,  1274,  1275,  1276,   384,  1985,  1098,  1277,
    1278,  1213,   323,     5,  1272,   610,  1214,   421,   646,   647,
    1428,  1429,   311,   352,  1370,   312,   313,   314,   324,   325,
     361,   610,  1273,   362,   151,  1996,   794,   792,   315,   971,
    1104,   152,  1274,  1275,  1276,   793,   363,  1272,  1277,  1278,
     607,   608,   318,   338,   463,   319,   609,   339,   465,   473,
     473,   473,   512,   340,   341,  1273,   342,   343,   480,   805,
     590,   519,   762,   763,   358,  1274,  1275,  1276,   451,   452,
     743,  1277,  1278,   646,   647,   646,   647,   344,   153,   491,
    2179,   174,  1663,   175,   377,  1533,  2187,  1216,  2189,   798,
    1217,   379,   814,   316,   978,   473,   982,   799,   812,  1635,
     300,   961,   646,   647,   300,   646,   647,   157,  1530,   300,
     300,   473,   800,   560,   561,   562,   158,  1532,  1082,   654,
     801,   353,  1347,  1517,  1749,  1348,  1535,   120,    68,    69,
      70,    71,   154,  1786,    74,  2092,  2093,  1087,   678,   646,
     647,  2094,  1873,    83,  1370,   174,    86,   175,   120,   120,
    1370,   646,   647,   120,   159,   120,   623,   624,   625,   160,
    1906,  1534,   127,  1045,   451,   452,   300,   347,  2091,   348,
     641,   642,  2028,  1490,   426,   174,   161,   175,   650,   655,
     300,   354,   382,   300,   586,   674,   181,   675,  1377,   585,
     428,   149,   766,   566,   589,   156,   668,   669,   670,   300,
     300,  1388,   120,   300,   300,   300,   300,  1323,   187,   163,
     734,   440,   737,   685,   300,   441,   165,   120,   300,  2207,
     384,   310,   750,  2130,  1371,  1374,   191,   386,   451,   452,
     174,   778,   175,   779,   547,  -577,   548,   780,   447,   448,
     449,   450,   300,   166,   300,   300,   300,   769,   167,   770,
     803,   451,   452,   754,   611,  1806,   612,  1189,   804,   168,
     613,   300,   451,   452,   300,  1105,  1106,   451,   452,   437,
     611,  1373,   612,   438,   429,   795,   613,   796,  1827,   461,
    1795,   797,  -581,  2202,   471,   474,   475,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   891,   459,   169,   806,   609,
     796,   459,   459,   459,   807,  1902,   451,   452,   170,   744,
     459,   745,   646,   647,  1199,   746,   646,   647,   646,   647,
     507,   473,   804,   300,  1105,  1106,   183,   300,   300,   184,
     646,   647,   447,   448,   449,   450,   521,   451,   452,   185,
     942,   646,   647,   300,  -579,   759,   648,   459,  1777,  1778,
     781,   447,   448,   449,  1088,  2229,   451,   452,   447,   448,
     449,   450,  2029,   459,   447,   448,   449,   450,  1389,  1390,
    1391,  1392,   188,   177,   908,   819,   178,   760,   761,   179,
     100,   180,   101,   102,   103,   104,   105,  1413,   451,   452,
     109,   110,    46,   112,  1272,   847,   646,   647,   646,   647,
     189,   300,   646,   647,   559,  2265,   646,   647,   902,   646,
     647,   967,  1273,   969,   970,   646,   647,  2030,   649,  2031,
     569,   570,  1274,  1275,  1276,   300,  2086,  2032,  1277,  1278,
     983,   192,   646,   647,   300,   881,  2033,   193,   700,   473,
     149,   473,   300,   473,   473,   480,  1514,  1033,   656,  1003,
    1393,   898,   762,   763,  1828,   300,   300,   300,   473,   473,
     300,   173,   769,   173,   770,   300,   907,   759,   909,   447,
     448,   449,   450,  1064,   646,   647,  1025,   194,   760,   761,
     974,   975,   646,   647,   195,   642,   760,   761,   646,   647,
     769,   300,   770,   451,   452,  2164,   202,   939,  1210,   760,
     761,   203,   657,  2165,   646,   647,   658,  1095,   671,  2166,
     646,   647,   672,   769,  2216,   770,  1062,  1272,  1418,   300,
     300,   804,  1048,   196,  1112,  2167,   847,   646,   647,   646,
     647,  2168,   764,   765,  1123,  1273,   646,   647,   465,   465,
    1546,  1419,   646,   647,   197,  1274,  1275,  1276,  2213,   847,
    2214,  1277,  1278,   762,   763,  1929,   747,  2223,   646,   647,
     198,   762,   763,  2250,  2061,   327,   328,   846,   300,   300,
     300,   847,  2062,   199,   762,   763,   300,   329,   200,  2251,
    1084,   330,   769,   459,   770,   208,  2096,  2097,   209,   912,
    1325,   210,  2094,   847,   755,   480,   473,   480,   473,   473,
     473,   473,   473,   473,   211,   473,   473,   473,   473,  1047,
     201,   473,   473,   473,   173,  1053,   789,   204,   300,  1052,
     205,  1135,   327,   328,   769,   206,   770,   769,   207,   770,
    1063,   789,  1345,  1100,   329,   847,   213,  2252,   335,   214,
    1222,  1724,   301,   300,   311,   451,   452,   312,  1403,   314,
    1356,  1709,  -580,  1710,  1599,  1600,   451,   452,   300,  1232,
     315,  1233,   302,  1794,  1092,  1795,   602,   603,   741,   605,
     606,   607,   608,  1887,   885,  1888,   887,   609,   889,   890,
     300,  1109,   451,   452,   303,  1355,   300,  1356,   300,   304,
     320,   480,  1121,   904,   905,   741,   605,   606,   607,   608,
    1127,   459,   473,   459,   609,   459,   459,   459,   307,   321,
     326,   308,   946,   309,   947,   993,   847,   334,   847,   847,
     459,   459,  1066,  1072,  1220,  1256,   847,  1073,   847,   847,
     346,  1257,   300,   345,   300,   847,  1303,  1807,   349,  1304,
     847,  1305,  1261,   847,  1308,   847,   360,  1814,   847,  1351,
     350,  1383,   298,   847,  1250,   847,  1234,  1463,  1470,  1487,
    1495,   847,   847,   847,   847,   359,  1513,  1633,  1685,   300,
     847,   847,   847,  1717,  1718,  2193,  1811,   847,   847,   300,
    1812,   371,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
     372,   370,   300,   789,   609,  1264,   373,  1376,  1534,  1834,
    1930,  1836,  1270,   847,   375,   847,  1281,  1918,   300,  1968,
     389,   847,  1986,  1969,   590,  2011,  1987,   789,   380,   847,
     300,  1032,  2235,  1034,  1035,  1036,  1037,  1038,  1039,   300,
    1041,  1042,  1043,  1044,   387,  2012,  1049,  1050,  1051,   847,
    1534,   300,  2027,   388,   390,   422,  1969,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   391,   459,   459,   459,
     459,   434,  2035,   459,   459,   459,   847,   435,  1234,   442,
    2058,  1380,   436,   789,   804,  2067,   789,  2084,   468,  2068,
    2087,  1969,  1372,  1375,   847,   443,  2088,  2119,  2140,   789,
     847,   847,   847,  2141,  2147,   469,   486,   847,  1969,  1234,
     520,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,  1119,  1568,  2155,  2163,
     609,  2177,   847,   847,  1099,  1969,  1101,  1129,  2212,   488,
    2219,  1478,   847,  1479,   847,  1605,  2220,  2221,  2222,   518,
     847,   847,   847,   459,  2224,  2226,  1488,  2246,   847,  2068,
     300,  1969,   149,  2253,   459,  2262,   298,   847,  1379,  2263,
    1436,  2272,   490,  2275,   495,  1969,   300,  2276,   769,   499,
     770,   771,   513,   555,  1898,  1899,  1515,  -206,   769,   300,
     770,   943,   558,  -207,   473,  -208,   568,   567,   571,   574,
     575,   576,   587,   622,   619,   620,   438,   627,   629,   635,
     628,   688,   676,   632,   631,   637,   639,   640,   636,   659,
     660,   661,   662,   663,   300,   300,   664,   300,   300,   300,
     665,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   774,   677,   300,  1489,  1491,   679,   680,   681,  1570,
    1571,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   845,   605,   606,   607,   608,   682,
     693,   683,   690,   609,  1581,   769,   694,   770,   695,   684,
     689,  1586,   691,   300,   473,   473,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,   692,
    1601,   697,   702,   609,   703,   711,   729,   712,   300,   713,
     724,   725,   727,   730,   732,   728,   789,   733,   789,   789,
     731,   735,   736,   738,   300,   300,   300,  1621,   753,   756,
     768,   773,   789,   776,   775,   816,   148,   751,   752,   782,
     838,  1637,   820,   843,   822,   849,   850,   851,  1643,   882,
     609,   892,   789,   767,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,  1810,   893,   789,   894,   609,   895,  1569,   915,
     913,   300,   916,   465,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
     300,   951,   300,   300,   609,   952,   955,   966,   965,   995,
     997,   789,   300,   968,   998,  1489,  1491,   473,  1001,  1010,
    1012,   473,  1023,  1026,  1649,  1055,  1654,  1057,  1065,  1412,
     473,  1071,   473,  1075,  1080,   473,  1076,  1081,  1085,  1096,
    1097,  1113,  1102,  1115,  1118,  1126,  1128,  1131,  1136,  1132,
    1137,   300,   888,  1138,  1140,  1141,   459,  1142,  1144,  1145,
    1146,  1147,  1148,  2100,   384,   622,  1149,   903,  1150,  1151,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,  1152,   473,
    1153,  1156,   609,  1160,   300,  1187,   300,  1196,  1188,  1197,
    1198,  1209,  1206,  1215,  1221,  1225,  1237,  1229,  1238,  1239,
    1245,  1247,  1259,  1267,   300,  1268,  1271,  1293,  1294,  1468,
    1469,  1296,  1317,  1313,   791,  1328,   300,  1315,  1316,  1330,
     300,  1329,  1333,  1341,  1343,  1344,  1350,  1354,  1358,  1359,
    1357,  1360,  1363,  1364,  1365,  1369,   459,   459,  1382,  1819,
    1819,  1384,  1385,  1400,  1406,  1407,  1408,  1409,  1414,  1417,
    1422,  1421,  1439,  1798,  1443,  1455,  1474,  1800,  1499,  1748,
    -209,  1500,  1482,  1501,  1504,  1505,  1507,  1506,  1508,  1509,
    1957,  1511,  1512,  1793,  1522,  1523,   300,   300,   300,  1527,
    1526,  1528,  1537,  1538,   300,   300,   300,  1539,  1540,  1541,
    1542,  1543,  1544,  1545,  1549,  1551,  1550,  1552,  1553,  1554,
     789,  1555,  1556,   300,  1557,  1808,  1558,  1565,  1560,  1562,
    1576,  1577,  1583,  1584,   300,  1585,  1587,  1589,  1593,  1598,
    1595,  1603,   300,  1604,  1607,  1608,   300,  1609,  1614,  1616,
    1617,  1618,  1620,  1632,  1634,  1640,  1848,   300,  1638,   300,
    1641,  1645,  1573,  1077,  1658,  1659,  1575,  1660,  1662,  1664,
    1668,  1669,  1670,  1675,  1676,  1579,  1677,  1580,  1678,  1679,
    1582,  1680,  1681,  1682,  1307,  1683,  1684,  1696,  1703,   459,
    1707,  1716,  1722,   459,  1729,  1723,  1730,  1731,  1732,  1740,
    1733,   384,   459,  1737,   459,  1738,  1739,   459,  1856,   480,
     480,  1745,  1746,  1761,  1752,   300,  1753,  1588,  1760,  1769,
    1771,  1754,  1772,  1776,  1802,  1864,  1805,  1829,  1755,  1756,
    1757,  1831,  1763,   473,  1623,  1764,  1877,  1797,  1790,  1826,
    1837,  1951,  1893,  1780,   300,  1783,  1804,  1348,  1801,   300,
    1821,  1833,  1838,  1840,  1841,  1849,  1844,  1855,  1857,  1858,
    1859,   459,  1960,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,  1865,  1860,  1866,  1867,   609,  1872,  1934,  1880,  1882,
    1217,  1878,  1907,  1885,  1939,  1942,  1886,  1910,  1911,  1912,
    1913,  1914,  1916,  1879,  1903,  1908,  1917,  1923,  1924,  1925,
    1943,  1945,  1944,  1955,  1956,  1953,  1961,   804,  -584,  -582,
    1973,   300,  1224,  1974,  1975,  1976,   300,   300,  1980,  1990,
    2124,  1984,  1989,  1991,  1992,  1993,  1995,   465,   465,  1994,
    2006,  2007,  2001,  2015,  2022,  2037,  2024,  2034,  2010,   300,
    2016,  2042,  2018,  2019,  2025,   300,  2052,  2043,  2053,  1244,
     300,  2054,  2049,  2057,  2059,  2060,  2083,  2103,  2108,   300,
    2050,  2051,  2115,  2121,  2056,  2065,  2120,   473,  2123,  2104,
     473,  2131,  2134,  2125,  2151,  2154,  2122,  -583,  2139,  2135,
    2136,  2145,  2158,  2143,  2170,  2171,  2146,  2173,   300,  2148,
    2159,  2185,  1379,  2156,  2190,  2152,  2162,  2174,  2195,   384,
    2181,   300,   480,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,  2236,  2209,  2237,  2225,   609,  2238,  2239,  2241,  2242,
    2243,  2247,  2244,  2258,  2261,  2257,  2268,   480,  2264,  2273,
    2274,  2277,  2278,  1636,  2047,  2203,  1699,  1854,  2074,  2046,
    1881,  1666,   126,  1399,   300,   137,   138,   139,  1839,   815,
     954,   459,   459,  2098,  1792,   300,   300,   145,  1940,  1120,
    1366,  1820,  1952,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   459,  1386,  2078,     0,     0,
     300,     0,     0,     0,     0,     0,     0,     0,     0,  2106,
       0,     0,   300,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   300,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1437,  1438,     0,  1440,  1441,  1442,
       0,  1444,  1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,
    1453,     0,     0,     0,     0,     0,   300,     0,     0,     0,
       0,     0,     0,  2110,  2111,  2112,  2113,  2114,     0,     0,
       0,   300,     0,     0,     0,     0,  2079,     0,     0,   300,
     300,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1467,     0,     0,  2172,   300,     0,     0,
     300,     0,  1935,     0,     0,  1937,   465,     0,     0,     0,
       0,   300,     0,     0,     0,   300,     0,     0,  1483,     0,
       0,     0,     0,     0,     0,     0,     0,  2149,     0,   459,
       0,  2153,   459,     0,  1496,     0,  2194,  2180,     0,   384,
       0,     0,     0,     0,     0,     0,     0,   789,     0,   789,
       0,     0,   300,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   459,     0,     0,     0,     0,   171,
     392,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   300,  2186,     0,     0,     0,  2188,     0,     0,     0,
       0,  1547,     0,     0,     0,     0,     0,     0,     0,   459,
       0,     0,  2200,     0,     0,     0,     0,     0,     0,     0,
    1561,     0,  1563,  1564,   393,   394,   395,   396,   397,   398,
     399,   400,   401,     0,     0,     0,     0,   402,   403,   404,
     405,     0,     0,   300,     0,   406,   407,   408,   409,     0,
       0,     0,     0,     0,   410,     0,   411,  2233,  2234,     0,
       0,   300,   300,   300,   300,   300,     0,     0,     0,     0,
     412,  1594,     0,   413,     0,     0,     0,   177,     0,     0,
     178,     0,     0,   179,     0,   180,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,   300,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,     0,     0,     0,     0,     0,
     300,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1653,     0,     0,     0,     0,     0,
       0,   473,     0,     0,     0,     0,  1667,     0,  1454,     0,
    1671,     0,     0,     0,   300,     0,     0,     0,     0,     0,
     473,   473,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   473,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   414,   415,   416,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   417,     0,     0,
       0,   418,     0,   419,   120,     0,  1719,  1720,  1721,     0,
       0,     0,     0,     0,  1726,  1727,  1728,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   392,     0,     0,
     451,   452,     0,  1743,     0,     0,     0,  -578,     0,  1622,
       0,     0,     0,     0,  1751,     0,     0,     0,     0,     0,
       0,     0,  1759,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   789,     0,  1768,     0,  1770,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
       0,     0,     0,     0,   402,   403,   404,   405,     0,     0,
       0,     0,   406,   407,   408,   409,  1510,     0,     0,     0,
       0,   410,     0,   411,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   412,     0,  1548,
     413,     0,     0,     0,   177,  1825,     0,   178,     0,     0,
     179,   789,   180,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   789,  1847,     0,     0,     0,     0,     0,
       0,   445,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2255,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,  2269,  2271,     0,     0,   609,
       0,     0,     0,   459,     0,     0,     0,     0,  2279,     0,
       0,     0,     0,     0,     0,     0,  1592,   432,     0,     0,
       0,     0,   459,   459,     0,     0,     0,     0,     0,     0,
       0,  1884,   414,   415,   416,   459,     0,     0,     0,     0,
       0,     0,     0,     0,   417,   460,     0,     0,   418,   470,
     419,   120,     0,     0,   476,     0,     0,     0,     0,  1825,
       0,   481,     0,  1610,   483,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1926,
       0,   492,   493,   494,  1815,   496,   497,   498,     0,   500,
     501,   502,   503,   504,   505,   506,     0,   508,   509,   510,
     511,     0,     0,     0,     0,   515,     0,     0,  1950,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1959,     0,     0,     0,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,     0,     0,     0,   609,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,     0,     0,  1825,     0,     0,     0,     0,     0,
     577,   579,   581,   582,   515,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   616,
     515,   515,     0,     0,     0,     0,     0,     0,     0,     0,
    2023,     0,     0,     0,     0,     0,     0,   634,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   644,   645,     0,
       0,     0,     0,   645,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   515,   667,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,   686,   515,     0,   609,     0,     0,
       0,     0,     0,     0,     0,   696,  2066,   698,   699,     0,
     701,     0,     0,     0,   704,   705,   706,     0,     0,   707,
       0,  2075,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,  1825,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   740,
       0,  2105,     0,     0,   515,   749,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   757,   758,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   790,  1741,     0,     0,
       0,     0,  1825,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   821,     0,
       0,     0,     0,   826,     0,     0,     0,   830,     0,     0,
       0,  2150,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   844,   579,     0,     0,     0,   848,     0,     0,     0,
     852,   853,   854,   855,   856,   857,   858,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   870,   871,   872,
     873,   874,   875,   876,   877,   878,   878,     0,   883,   884,
       0,   886,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   896,     0,     0,   900,   901,     0,     0,     0,     0,
       0,   878,     0,     0,     0,     0,   515,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   932,   934,   935,   936,   937,   938,     0,   940,
     941,     0,     0,     0,  1825,     0,     0,   948,   949,   950,
       0,     0,     0,     0,     0,   956,   957,   958,   959,     0,
     515,   515,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   577,
     740,   979,     0,     0,     0,   984,   985,   986,   987,   988,
     989,   990,   991,   992,  1825,     0,     0,     0,     0,   999,
    1000,     0,  1002,     0,     0,  1004,     0,     0,     0,   515,
     515,   515,  1009,  1988,   590,     0,  1013,   515,  1015,  1016,
    1017,     0,     0,  1018,     0,  1020,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,  1040,     0,     0,   609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   515,
       0,     7,     8,     0,     0,     0,  1059,  1060,     0,  1061,
       0,     0,   940,   941,     0,     0,     0,     0,     0,     0,
       0,  1074,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   515,
     516,  1090,  1799,     0,     0,     0,  1093,  1094,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   515,     0,  1110,  1111,     0,     0,   515,     0,   515,
    1117,   517,     0,     0,  1110,     0,  1124,     0,  1125,     0,
       0,     0,     0,     0,  1130,  1803,     0,     0,  1133,     0,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     0,    43,    44,    45,    46,
       0,  1154,    48,   932,     0,  1157,   580,     0,     0,   516,
     783,    56,     0,     0,    59,   784,     0,   785,   786,     0,
     787,     0,     0,     0,     0,   516,   516,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
     515,     0,     0,  1809,     0,     0,     0,     0,     0,     0,
     515,  1201,  1202,  1203,     0,     0,   617,   618,     0,     0,
       0,     0,     0,     0,    96,    97,    98,     0,   516,     0,
       0,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   845,   605,   606,   607,   608,   515,
     516,     0,     0,   609,     0,     0,     0,     0,     0,   666,
       0,   515,     0,     0,     0,     0,     0,     0,     0,  1243,
       0,     0,     0,  1249,     0,     0,     0,     0,     0,  1255,
       0,     0,   515,     0,     0,     0,     0,     0,     0,     0,
    1265,  1266,     0,     0,     0,     0,  1269,     0,     0,     0,
       0,   809,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1295,     0,     0,  1297,     0,     0,   516,
       0,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,     0,
       0,     0,  1318,   609,  1320,  1321,     0,     0,     0,     0,
     748,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1339,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,  1362,     0,     0,
       0,     0,     0,     0,  1368,     0,     0,   580,     0,     0,
       0,  1381,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1404,  1405,     0,     0,     0,     0,
     515,   869,     0,     0,     0,     0,  1921,     0,     0,     0,
     879,   880,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,  1434,     0,   609,     0,   906,     0,     0,     0,
       0,   516,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   515,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   933,     0,     0,
    1457,     0,   910,     0,     0,     0,     0,     0,     0,     0,
    1458,  1459,  1460,  1461,  1462,     0,     0,     0,     0,  1464,
    1465,     0,  1466,     0,     0,   516,   516,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1476,  1477,     0,
       0,     0,     0,     0,     0,  1480,  1481,     0,     0,     0,
       0,     0,     0,     0,  1485,  1486,   962,   963,     0,     0,
    1492,  1493,     0,     0,     0,     0,   515,   515,     0,     0,
       0,     0,     0,     0,   516,   516,   516,     0,     0,     0,
       0,     0,   516,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1525,     0,     0,     0,  1006,  1007,  1008,     0,     0,
       0,     0,     0,  1014,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   516,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1559,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   515,     0,  1054,     0,     0,     0,     0,
       0,  1574,     0,     0,   516,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,  1492,  1493,     0,   516,   609,  1591,     0,
       0,     0,   516,     0,   516,  1086,     0,     0,     0,  1597,
       0,     0,  1602,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   392,     0,     0,  1108,  1922,     0,
       0,     0,     0,  1114,     0,  1116,     0,     0,     0,     0,
       0,  1624,     0,     0,  1627,   515,  1630,   515,   933,     0,
    1158,     0,     0,     0,     0,  1639,     0,     0,  1642,     0,
    1639,     0,  1646,  1648,     0,     0,  1656,  1657,   393,   394,
     395,   396,   397,   398,   399,   400,   401,  2014,     0,     0,
       0,   402,   403,   404,   405,   516,     0,     0,     0,   406,
     407,   408,   409,     0,     0,   516,     0,     0,   410,     0,
     411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   412,     0,  1190,   413,     0,     0,
       0,   177,     0,     0,   178,     0,  1200,   179,     0,   180,
       0,     0,     0,     0,   516,     0,     0,     0,     0,     0,
      46,     0,     0,     0,  1725,     0,   516,     0,     0,     0,
       0,     0,     0,     0,     0,  1734,  1735,  1736,   445,     0,
       0,     0,     0,     0,  1742,  1228,  1744,   516,     0,     0,
       0,     0,     0,  1747,     0,     0,     0,  1236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   515,     0,     0,
       0,     0,     0,  1765,  1766,     0,     0,     0,  1258,     0,
       0,     0,     0,     0,  1773,  1774,  1775,     0,     0,     0,
       0,     0,     0,     0,  1784,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1796,     0,     0,     0,   414,
     415,   416,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   417,     0,     0,     0,   418,  1813,   419,   120,     0,
       0,     0,     0,     0,  1822,  1823,  2041,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,     0,     0,     0,   769,   609,
     770,  1815,     0,     0,     0,     0,     0,     0,     0,     0,
    1852,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   516,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,  1868,  1869,  1870,     0,     0,  1411,     0,     0,     0,
       0,     0,  1871,     0,     0,     0,     0,  1874,  1875,  2055,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   516,
    1883,     0,     0,     0,     0,     0,     0,   515,   515,  1891,
       0,  1892,     0,     0,     0,     0,     0,  1900,  1901,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1456,     0,     0,     0,     0,     0,   515,     0,     0,     0,
       0,   515,  1920,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1933,     0,     0,  1936,
       0,     0,     0,  1938,     0,     0,     0,     0,     0,     0,
       0,     0,  1874,  1875,     0,  1947,     0,     0,     0,     0,
       0,   516,   516,     0,     0,  1954,     0,  2089,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1965,
       0,     0,     0,     0,  1971,  1972,     0,     0,     0,   772,
       0,     0,  1497,  1498,     0,     0,     0,     0,  1977,     0,
       0,  1978,  1977,  2090,  1981,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,     0,     0,     0,   609,     0,     0,
       0,     0,     0,     0,     0,     0,   515,   515,     0,     0,
       0,     0,     0,  2008,  2009,     0,     0,     0,   516,     0,
       0,     0,     0,     0,     0,  2017,     0,     0,     0,     0,
       0,     0,     0,     0,  2026,     0,     0,     0,     0,     0,
       0,     0,     0,   579,     0,     0,     0,     0,     0,  1572,
       0,     0,     0,     0,     0,     0,  2038,  2039,     0,     0,
     515,     0,     0,     0,     0,   897,     0,     0,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,  2169,     0,     0,     0,
     609,     0,     0,     0,  2063,  2064,     0,     0,     0,     0,
     516,     0,   516,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2077,   944,     0,     0,     0,
     515,   515,  2082,     0,     0,     0,     0,  2085,     0,     0,
       0,  1629,     0,  1631,     0,     0,     0,     0,     0,     0,
       0,   515,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   515,     0,     0,     0,
       0,     0,     0,     0,     0,  2116,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,   171,   392,   609,     0,
    2127,     0,     0,     0,     0,  2215,  2132,     0,     0,  2133,
       0,     0,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
    2157,   393,   394,   395,   396,   397,   398,   399,   400,   401,
       0,     0,   516,     0,   402,   403,   404,   405,     0,     0,
       0,     0,   406,   407,   408,   409,  2175,  2176,     0,     0,
       0,   410,     0,   411,     0,     0,     0,     0,     0,     0,
       0,  2182,  2183,  1762,   515,     0,     0,   412,     0,     0,
     413,     0,     0,     0,     0,     0,     0,  2192,     0,     0,
       0,     0,   515,   515,   515,   515,   515,     0,     0,     0,
       0,     0,  1971,     0,     0,     0,  2208,     0,     0,     0,
       0,     0,     0,     0,     0,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,  2228,     0,     0,     0,   609,  2231,  2232,
       0,     0,     0,     0,     0,  1853,  2138,     0,     0,     0,
       0,   515,     0,  1161,  1162,  1163,  1164,  1165,  1166,  1167,
    1168,  1169,  1170,  1171,     0,  1173,  1174,  1175,  1176,     0,
    1178,  1179,  1180,  1181,     0,     0,     0,     0,  2259,  2260,
       0,     0,     0,     7,     8,     0,  1193,     0,  1195,     0,
       0,     0,   414,   415,   416,     0,     0,     0,     0,  1205,
       0,     0,     0,     0,   417,     0,  1211,  1212,   418,     0,
     419,   120,     0,     0,     0,  1223,     0,     0,     0,     0,
       0,     0,   516,   516,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
       0,   516,     0,  1889,  1890,     0,   516,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     0,     0,  1919,    43,    44,
      45,    46,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,   783,    56,     0,     0,    59,   784,     0,   785,
     786,     0,   787,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,  1324,  1326,  1327,     0,     0,     0,  1331,  1332,
       0,     0,  1335,  1336,  1337,  1338,     0,  1340,     0,     0,
       0,     0,  1346,     7,     8,     0,    96,    97,    98,     0,
       0,     0,   176,     0,   182,     0,     0,     0,     0,     0,
       0,   516,   516,     0,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
       0,     0,  2004,  2005,     0,     0,     0,     0,   580,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   516,     0,     0,     0,     0,
       0,     0,     0,   980,  1433,     0,  1435,     0,     0,     0,
       0,     0,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     0,  2040,     0,    43,    44,
      45,    46,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,   783,    56,     0,     0,    59,   784,     0,   785,
     786,     0,   787,   458,     0,   516,   516,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,   516,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2080,  2081,     0,     0,
       0,   516,     0,     0,     7,     8,    96,    97,    98,     0,
       0,     0,     0,     0,     0,     0,  1494,  2099,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2109,     0,     0,     0,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   549,   550,   551,   552,   553,   554,     0,   556,   557,
       0,     0,     0,     0,     0,     0,     0,     0,   563,   564,
       0,     0,     0,  1005,     0,     0,     0,     0,     0,     0,
     572,   573,     0,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,    43,
      44,    45,    46,     0,     0,    48,     0,     0,     0,   516,
       0,     0,     0,   783,    56,     0,     0,    59,   784,     0,
     785,   786,     0,   787,     0,     0,     0,   516,   516,   516,
     516,   516,   590,     0,     0,     0,     0,     0,     0,     0,
    2184,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1611,     0,     0,     0,  2196,  2197,
    2198,  2199,  2201,     0,     0,     0,     0,    96,    97,    98,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     0,     0,   516,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1650,     0,   708,
     709,   710,     0,     0,     0,   714,   715,   716,   717,   718,
     719,   720,     0,   721,     0,     0,     0,  2240,   722,   723,
       0,     0,   726,     0,     0,     0,     0,     0,  1686,  1687,
    1688,  1689,  1690,  1691,  1692,     0,   739,     0,     0,  1697,
    1698,     0,     0,     0,  1056,     0,  1700,     0,  1702,     0,
       0,     0,  1706,     0,     0,  1708,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1715,     0,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,    43,    44,    45,    46,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,   783,    56,
       0,     0,    59,   784,     0,   785,   786,     0,   787,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   590,     0,  1779,     0,  1782,     0,     0,     0,  1789,
       0,  1791,    96,    97,    98,     0,     0,     0,     0,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,     0,     0,     0,
       0,   609,     0,  1816,     0,     0,   215,     6,   392,     0,
       0,     0,   914,   216,   217,   218,     0,     0,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,  1058,
       0,     0,  1651,   394,   395,   396,   397,   398,   399,   400,
     401,   250,   251,   252,   253,   402,   403,   404,   405,   254,
     255,     0,     0,   406,   407,   408,   409,     0,     0,   256,
     257,   258,   410,     0,   411,   259,   260,   261,     0,     0,
       0,     0,     0,     0,     0,     0,   262,    25,   412,   263,
       0,   413,  1876,     0,     0,   264,     0,     0,   265,  1027,
       0,   266,     0,   267,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     0,   268,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,    57,    58,     0,
     270,     0,   271,     0,     0,   272,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,     0,    74,    75,    76,
      77,    78,    79,     0,     0,     0,    83,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   845,   605,   606,   607,   608,     0,     0,  1962,     0,
     609,  1963,   273,   414,   415,   416,   274,   275,     0,     0,
       0,     0,   276,   277,   278,   417,   279,   280,   281,   418,
       0,   419,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   282,
     283,     0,     0,     0,     0,     0,   284,     0,     0,  1997,
    1998,   366,  2000,     0,     0,  1652,     0,     0,   287,     0,
       0,     0,     0,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       0,    43,    44,    45,    46,     0,     0,    48,     0,     0,
       0,     0,  1226,     0,     0,   783,    56,     0,     0,    59,
     784,     0,   785,   786,     0,   787,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2044,  2045,     0,
       0,     0,     0,    80,     0,  1218,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,    96,
      97,    98,     0,     0,     0,   215,     6,   392,  1235,     0,
       0,     0,   216,   217,   218,     0,  2076,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,     0,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     250,   251,   252,   253,   402,   403,   404,   405,   254,   255,
       0,     0,   406,   407,   408,   409,  1260,     0,   256,   257,
     258,   410,     0,   411,   259,   260,   261,     0,     0,     0,
       0,     0,     0,     0,     0,   262,    25,   412,   263,     0,
     413,     0,     0,     0,   264,     0,     0,   265,     0,     0,
     266,     0,   267,     0,     0,     0,     0,     0,     0,    42,
       0,     0,     0,   268,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   269,     0,    57,    58,     0,   270,
       0,   271,     0,     0,   272,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,     0,    74,    75,    76,    77,
      78,    79,     0,     0,     0,    83,     0,     0,    86,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   741,   605,   606,   607,   608,     0,     0,     0,
       0,   609,     0,  1426,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   273,   414,   415,   416,   274,   275,     0,     0,     0,
       0,   276,   277,   278,   417,   279,   280,   281,   418,     0,
     419,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   282,   283,
       0,     0,     0,     0,     0,   284,     0,     0,     0,     0,
     366,     0,     0,  2249,   286,     0,     0,   287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   215,   171,   392,
       0,   444,     0,     0,   216,   217,   218,     0,  1484,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   430,   237,   238,   239,
     240,   241,   242,   243,   244,     0,     0,     0,     0,     0,
       0,     0,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   250,   251,   252,   253,   402,   403,   404,   405,
     254,     7,     8,     0,   406,   407,   408,   409,     0,     0,
       0,     0,     0,   410,     0,   411,   259,   260,   261,     0,
       0,     0,     0,     0,     0,     0,     0,   262,    25,   412,
     263,     0,   413,     0,     0,     0,   177,     0,     0,   178,
       0,     0,   179,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     0,    43,    44,    45,    46,
    1612,  1613,    48,     0,     0,     0,     0,     0,     0,     0,
     783,    56,     0,     0,    59,   784,     0,   785,   786,     0,
     787,     0,     0,     0,     0,     0,   446,     0,     0,     0,
       0,     0,     0,   273,   414,   415,   416,   274,    80,     0,
       0,  1227,     0,   276,   277,   278,   417,   279,   280,   281,
     418,     0,   419,   120,     0,   447,   448,   449,   450,     0,
       0,     0,     0,     0,    96,    97,    98,     0,     0,     0,
     282,   431,     0,     0,     0,     0,     0,   284,     0,   451,
     452,     0,   453,     0,   454,     0,     0,     0,   455,   287,
       0,     0,     0,     0,     0,  1704,     0,     0,   215,     6,
     365,     0,     0,     0,  1711,   216,   217,   218,     0,     0,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,  1262,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   251,   252,   253,     0,     0,     0,
       0,   254,   255,     0,     0,     0,     0,     0,     0,     0,
       0,   256,   257,   258,     0,     0,     0,   259,   260,   261,
       0,     0,     0,     0,     0,     0,     0,     0,   262,    25,
       0,   263,     0,     0,     0,     0,     0,   264,     0,     0,
     265,     0,     0,   266,     0,   267,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,   268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269,     0,    57,
      58,     0,   270,     0,   271,     0,     0,   272,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,     0,    74,
      75,    76,    77,    78,    79,     0,     0,     0,    83,     0,
       0,    86,     0,     0,     0,     0,     0,  1850,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,  1567,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   273,     0,     0,     0,   274,   275,
       0,     0,     0,     0,   276,   277,   278,     0,   279,   280,
     281,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282,   283,     0,     0,     0,     0,     0,   284,     0,
       0,     0,     0,   366,   215,     6,     0,   367,     0,   687,
     287,   216,   217,   218,     0,     0,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
     251,   252,   253,     0,     0,     0,     0,   254,   255,     0,
       0,     0,     0,     0,     0,     0,     0,   256,   257,   258,
       0,     0,     0,   259,   260,   261,     0,     0,     0,     0,
       0,     0,     0,     0,   262,    25,     0,   263,     0,  1502,
       0,     0,     0,   264,     0,     0,   265,     0,     0,   266,
       0,   267,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   269,     0,    57,    58,     0,   270,     0,
     271,     0,     0,   272,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,     0,    74,    75,    76,    77,    78,
      79,     0,     0,     0,    83,     0,     0,    86,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,     0,
     273,     0,     0,   609,   274,   275,     0,     0,     0,     0,
     276,   277,   278,     0,   279,   280,   281,     0,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   282,   514,     0,
       0,     0,     0,     0,   284,     0,     0,     0,     0,   366,
     215,     6,  1750,     0,   583,     0,   287,   216,   217,   218,
       0,     0,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,   251,   252,   253,     0,
       0,     0,     0,   254,   255,     0,     0,     0,     0,     0,
       0,     0,     0,   256,   257,   258,     0,     0,     0,   259,
     260,   261,     0,     0,     0,     0,     0,     0,     0,     0,
     262,    25,     0,   263,     0,     0,     0,     0,     0,   264,
       0,     0,   265,     0,     0,   266,     0,   267,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   269,
       0,    57,    58,     0,   270,     0,   271,     0,     0,   272,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
       0,    74,    75,    76,    77,    78,    79,     0,     0,     0,
      83,     0,     0,    86,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,   769,     0,
     770,     0,     0,     0,     0,     0,  1781,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   273,     0,     0,     0,
     274,   275,     0,     0,     0,     0,   276,   277,   278,     0,
     279,   280,   281,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   282,   283,     0,     0,     0,     0,     0,
     284,     0,     0,     0,     0,   366,   215,     6,     0,   286,
       0,     0,   287,   216,   217,   218,     0,     0,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   251,   252,   253,     0,     0,     0,     0,   254,
     255,     0,     0,     0,     0,     0,     0,     0,     0,   256,
     257,   258,     0,     0,     0,   259,   260,   261,     0,     0,
       0,     0,     0,     0,     0,     0,   262,    25,     0,   263,
       0,     0,     0,     0,     0,   264,     0,     0,   265,     0,
       0,   266,     0,   267,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     0,   268,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,    57,    58,     0,
     270,     0,   271,     0,     0,   272,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,     0,    74,    75,    76,
      77,    78,    79,     0,     0,     0,    83,     0,     0,    86,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,  1011,     0,     0,     0,     0,     0,
       0,     0,   972,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,     0,     0,     0,   274,   275,     0,     0,
       0,     0,   276,   277,   278,     0,   279,   280,   281,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   651,
    1915,     0,     0,     0,     0,     0,   284,     0,     0,     0,
       0,   653,   215,     6,     0,   330,   583,     0,   287,   216,
     217,   218,     0,     0,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
     253,     0,     0,     0,     0,   254,   255,     0,     0,     0,
       0,     0,     0,     0,     0,   256,   257,   258,     0,     0,
       0,   259,   260,   261,     0,     0,     0,     0,     0,     0,
       0,     0,   262,    25,     0,   263,     0,     0,     0,     0,
       0,   264,     0,     0,   265,     0,     0,   266,     0,   267,
       0,     0,     0,     0,     0,     0,    42,     0,     0,     0,
     268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   269,     0,    57,    58,     0,   270,     0,   271,     0,
       0,   272,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,     0,    74,    75,    76,    77,    78,    79,     0,
       0,     0,    83,     0,     0,    86,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,     0,     0,     0,  1845,     0,     0,     0,  1846,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   273,     0,
       0,     0,   274,   275,     0,     0,     0,     0,   276,   277,
     278,     0,   279,   280,   281,     0,     0,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   282,   283,     0,     0,     0,
       0,     0,   284,     0,     0,     0,     0,   285,   215,     6,
       0,   286,     0,     0,   287,   216,   217,   218,     0,     0,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   251,   252,   253,     0,     0,     0,
       0,   254,   255,     0,     0,     0,     0,     0,     0,     0,
       0,   256,   257,   258,     0,     0,     0,   259,   260,   261,
       0,     0,     0,     0,     0,     0,     0,     0,   262,    25,
       0,   263,     0,     0,     0,     0,     0,   264,     0,     0,
     265,     0,     0,   266,     0,   267,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,   268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269,     0,    57,
      58,     0,   270,     0,   271,     0,     0,   272,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,     0,    74,
      75,    76,    77,    78,    79,     0,     0,     0,    83,     0,
       0,    86,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
    1896,     0,     0,     0,  1897,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   273,     0,     0,     0,   274,   275,
       0,     0,     0,     0,   276,   277,   278,     0,   279,   280,
     281,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282,   283,     0,     0,     0,     0,     0,   284,     0,
       0,     0,     0,   366,   215,     6,     0,   286,     0,     0,
     287,   216,   217,   218,     0,     0,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
     251,   252,   253,     0,     0,     0,     0,   254,   255,     0,
       0,     0,     0,     0,     0,     0,     0,   256,   257,   258,
       0,     0,     0,   259,   260,   261,     0,     0,     0,     0,
       0,     0,     0,     0,   262,    25,     0,   263,     0,     0,
       0,     0,     0,   264,     0,     0,   265,     0,     0,   266,
       0,   267,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   269,     0,    57,    58,     0,   270,     0,
     271,     0,     0,   272,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,     0,    74,    75,    76,    77,    78,
      79,     0,     0,     0,    83,     0,     0,    86,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,     0,     0,     0,     0,  1927,     0,     0,     0,
    1928,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     273,     0,     0,     0,   274,   275,     0,     0,     0,     0,
     276,   277,   278,     0,   279,   280,   281,     0,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   282,   514,     0,
       0,     0,     0,     0,   284,     0,     0,     0,     0,   366,
     215,     6,     0,   578,     0,     0,   287,   216,   217,   218,
       0,     0,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,   251,   252,   253,     0,
       0,     0,     0,   254,   255,     0,     0,     0,     0,     0,
       0,     0,     0,   256,   257,   258,     0,     0,     0,   259,
     260,   261,     0,     0,     0,     0,     0,     0,     0,     0,
     262,    25,     0,   263,     0,     0,     0,     0,     0,   264,
       0,     0,   265,     0,     0,   266,     0,   267,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   269,
       0,    57,    58,     0,   270,     0,   271,     0,     0,   272,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
       0,    74,    75,    76,    77,    78,    79,     0,     0,     0,
      83,     0,     0,    86,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
       0,     0,  2101,     0,     0,     0,  2102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   273,     0,     0,     0,
     274,   275,     0,     0,     0,     0,   276,   277,   278,     0,
     279,   280,   281,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   282,   514,     0,     0,     0,     0,     0,
     284,     0,     0,     0,     0,   366,   215,     6,     0,     0,
     583,     0,   287,   216,   217,   218,     0,     0,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   251,   252,   253,     0,     0,     0,     0,   254,
     255,     0,     0,     0,     0,     0,     0,     0,     0,   256,
     257,   258,     0,     0,     0,   259,   260,   261,     0,     0,
       0,     0,     0,     0,     0,     0,   262,    25,     0,   263,
       0,     0,     0,     0,     0,   264,     0,     0,   265,     0,
       0,   266,     0,   267,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     0,   268,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,    57,    58,     0,
     270,     0,   271,     0,     0,   272,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,     0,    74,    75,    76,
      77,    78,    79,     0,     0,     0,    83,     0,     0,    86,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   802,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,     0,     0,     0,   274,   275,     0,     0,
       0,     0,   276,   277,   278,     0,   279,   280,   281,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   282,
     283,     0,     0,     0,     0,     0,   284,     0,     0,     0,
       0,   621,   215,     6,     0,   286,     0,     0,   287,   216,
     217,   218,     0,     0,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
     253,     0,     0,     0,     0,   254,   255,     0,     0,     0,
       0,     0,     0,     0,     0,   256,   257,   258,     0,     0,
       0,   259,   260,   261,     0,     0,     0,     0,     0,     0,
       0,     0,   262,    25,     0,   263,     0,     0,     0,     0,
       0,   264,     0,     0,   265,     0,     0,   266,     0,   267,
       0,     0,     0,     0,     0,     0,    42,     0,     0,     0,
     268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   269,     0,    57,    58,     0,   270,     0,   271,     0,
       0,   272,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,     0,    74,    75,    76,    77,    78,    79,     0,
       0,     0,    83,     0,     0,    86,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   808,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   273,     0,
       0,     0,   274,   275,     0,     0,     0,     0,   276,   277,
     278,     0,   279,   280,   281,     0,     0,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   282,   283,     0,     0,     0,
       0,     0,   284,     0,     0,     0,     0,   630,   215,     6,
       0,   286,     0,     0,   287,   216,   217,   218,     0,     0,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   251,   252,   253,     0,     0,     0,
       0,   254,   255,     0,     0,     0,     0,     0,     0,     0,
       0,   256,   257,   258,     0,     0,     0,   259,   260,   261,
       0,     0,     0,     0,     0,     0,     0,     0,   262,    25,
       0,   263,     0,     0,     0,     0,     0,   264,     0,     0,
     265,     0,     0,   266,     0,   267,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,   268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269,     0,    57,
      58,     0,   270,     0,   271,     0,     0,   272,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,     0,    74,
      75,    76,    77,    78,    79,     0,     0,     0,    83,     0,
       0,    86,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   810,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   273,     0,     0,     0,   274,   275,
       0,     0,     0,     0,   276,   277,   278,     0,   279,   280,
     281,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282,   514,     0,     0,     0,     0,     0,   284,     0,
       0,     0,     0,   366,   215,     6,     0,   931,     0,  1410,
     287,   216,   217,   218,     0,     0,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
     251,   252,   253,     0,     0,     0,     0,   254,   255,     0,
       0,     0,     0,     0,     0,     0,     0,   256,   257,   258,
       0,     0,     0,   259,   260,   261,     0,     0,     0,     0,
       0,     0,     0,     0,   262,    25,     0,   263,     0,     0,
       0,     0,     0,   264,     0,     0,   265,     0,     0,   266,
       0,   267,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,   268,     0,     0,   423,   392,     0,     0,     0,
       0,     0,     0,   269,     0,    57,    58,     0,   270,     0,
     271,     0,     0,   272,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,     0,    74,    75,    76,    77,    78,
      79,     0,     0,     0,    83,     0,     0,    86,     0,     0,
     393,   394,   395,   396,   397,   398,   399,   400,   401,     0,
       0,     0,     0,   402,   403,   404,   405,     0,     0,     0,
       0,   406,   407,   408,   409,     0,     0,     0,     0,     0,
     410,     0,   411,     0,     0,     0,     0,     0,     0,     0,
     273,     0,     0,     0,   274,   275,   412,     0,     0,   413,
     276,   277,   278,     0,   279,   280,   281,     0,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   282,   514,     0,
       0,     0,     0,     0,   284,   215,     6,     0,     0,   366,
    1628,     0,   216,   217,   218,     0,   287,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,   251,   252,   253,     0,     0,     0,     0,   254,   255,
       0,     0,     0,     0,     0,     0,     0,     0,   256,   257,
     258,   414,   415,   416,   259,   260,   261,     0,     0,     0,
       0,     0,     0,   417,     0,   262,    25,   418,   263,   419,
       0,     0,     0,     0,   264,     0,     0,   265,     0,     0,
     266,     0,   267,     0,     0,     0,     0,     0,     0,    42,
       0,     0,     0,   268,     0,     0,     0,   392,     0,     0,
       0,     0,     0,     0,   269,     0,    57,    58,     0,   270,
       0,   271,     0,     0,   272,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,     0,    74,    75,    76,    77,
      78,    79,     0,     0,     0,    83,     0,     0,    86,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
       0,     0,     0,     0,   402,   403,   404,   405,     0,     0,
       0,     0,   406,   407,   408,   409,     0,     0,     0,     0,
       0,   410,     0,   411,     0,     0,     0,     0,     0,     0,
       0,   273,     0,     0,     0,   274,   275,   412,     0,     0,
     413,   276,   277,   278,     0,   279,   280,   281,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   282,   514,
       0,     0,     0,     0,     0,   284,   215,     6,     0,     0,
     366,     0,     0,   216,   217,   218,     0,   287,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   251,   252,   253,     0,     0,     0,     0,   254,
     255,     0,     0,     0,     0,     0,     0,     0,     0,   256,
     257,   258,   414,   415,   416,   259,   260,   261,     0,     0,
       0,     0,     0,     0,   417,     0,   262,    25,   418,   263,
     419,     0,     0,     0,     0,   264,     0,     0,   265,     0,
       0,   266,     0,   267,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     0,   268,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,    57,    58,     0,
     270,     0,   271,     0,     0,   272,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,     0,    74,    75,    76,
      77,    78,    79,     0,     0,     0,    83,     0,     0,    86,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   972,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,     0,     0,     0,   274,   275,     0,     0,
       0,     0,   276,   277,   278,     0,   279,   280,   281,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   282,
     283,     0,     0,     0,     0,     0,   284,     0,     0,     0,
       0,   366,   215,     6,     0,  1758,     0,     0,   287,   216,
     217,   218,     0,     0,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
     253,     0,     0,     0,     0,   254,   255,     0,     0,     0,
       0,     0,     0,     0,     0,   256,   257,   258,     0,     0,
       0,   259,   260,   261,     0,     0,     0,     0,     0,     0,
       0,     0,   262,    25,     0,   263,     0,     0,     0,     0,
       0,   264,     0,     0,   265,     0,     0,   266,     0,   267,
       0,     0,     0,     0,     0,     0,    42,     0,     0,     0,
     268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   269,     0,    57,    58,     0,   270,     0,   271,     0,
       0,   272,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,     0,    74,    75,    76,    77,    78,    79,     0,
       0,     0,    83,     0,     0,    86,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   973,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   273,     0,
       0,     0,   274,   275,     0,     0,     0,     0,   276,   277,
     278,     0,   279,   280,   281,     0,     0,     0,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   651,  1915,     0,     0,     0,
       0,     0,   284,     0,     0,     0,     0,   653,   215,     6,
       0,   330,     0,     0,   287,   216,   217,   218,     0,     0,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   251,   252,   253,     0,     0,     0,
       0,   254,   255,     0,     0,     0,     0,     0,     0,     0,
       0,   256,   257,   258,     0,     0,     0,   259,   260,   261,
       0,     0,     0,     0,     0,     0,     0,     0,   262,    25,
       0,   263,     0,     0,     0,     0,     0,   264,     0,     0,
     265,     0,     0,   266,     0,   267,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,   268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269,     0,    57,
      58,     0,   270,     0,   271,     0,     0,   272,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,     0,    74,
      75,    76,    77,    78,    79,     0,     0,     0,    83,     0,
       0,    86,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1024,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   273,     0,     0,     0,   274,   275,
       0,     0,     0,     0,   276,   277,   278,     0,   279,   280,
     281,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282,   514,     0,     0,     0,     0,     0,   284,   215,
     171,   392,     0,   366,     0,     0,   216,   217,   218,     0,
     287,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   430,   237,
     238,   239,   240,   241,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   250,   251,   252,   253,   402,   403,
     404,   405,   254,     0,     0,     0,   406,   407,   408,   409,
       0,     0,     0,     0,     0,   410,     0,   411,   259,   260,
     261,     0,     0,     0,     0,     0,     0,     0,     0,   262,
      25,   412,   263,     0,   413,   215,   171,   392,     0,     0,
       0,     0,   216,   217,   218,     0,     0,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   430,   237,   238,   239,   240,   241,
     242,   243,   244,     0,     0,     0,     0,     0,     0,     0,
       0,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     250,   251,   252,   253,   402,   403,   404,   405,   254,     0,
       0,     0,   406,   407,   408,   409,     0,     0,     0,     0,
       0,   410,     0,   411,   259,   260,   261,     0,     0,     0,
       0,     0,     0,     0,     0,   262,    25,   412,   263,     0,
     413,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,   414,   415,   416,   274,
       0,     0,     0,     0,     0,   276,   277,   278,   417,   279,
     280,   281,   418,     0,   419,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   282,   431,     0,     0,     0,     0,     0,   284,
       0,     0,     0,     0,   366,     0,     0,     0,  1647,     0,
       0,   287,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1134,     0,     0,     0,     0,     0,
       0,   273,   414,   415,   416,   274,     0,     0,     0,     0,
       0,   276,   277,   278,   417,   279,   280,   281,   418,     0,
     419,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   282,   431,
       0,     0,     0,     0,     0,   284,     0,     0,     0,     0,
     366,   215,   171,   392,  1932,     0,     0,   287,   216,   217,
     218,     0,     0,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     430,   237,   238,   239,   240,   241,   242,   243,   244,     0,
       0,     0,     0,     0,     0,     0,     0,  1651,   394,   395,
     396,   397,   398,   399,   400,   401,   250,   251,   252,   253,
     402,   403,   404,   405,   254,     0,     0,     0,   406,   407,
     408,   409,     0,     0,     0,     0,     0,   410,     0,   411,
     259,   260,   261,     0,     0,     0,     0,     0,     0,     0,
       0,   262,    25,   412,   263,     0,   413,   215,   171,   392,
       0,     0,     0,     0,   216,   217,   218,     0,     0,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   430,   237,   238,   239,
     240,   241,   242,   243,   244,     0,     0,     0,     0,     0,
       0,     0,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   250,   251,   252,   253,   402,   403,   404,   405,
     254,     0,     0,     0,   406,   407,   408,   409,     0,     0,
       0,     0,     0,   410,     0,   411,   259,   260,   261,     0,
       0,     0,     0,     0,     0,     0,     0,   262,    25,   412,
     263,     0,   413,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   273,   414,   415,
     416,   274,     0,     0,     0,     0,     0,   276,   277,   278,
     417,   279,   280,   281,   418,     0,   419,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282,   431,     0,     0,     0,     0,
       0,   284,     0,     0,     0,     0,   366,     0,     0,     0,
    1815,     0,     0,   287,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1172,     0,     0,     0,
       0,     0,     0,   273,   414,   415,   416,   274,     0,     0,
       0,     0,     0,   276,   277,   278,   417,   279,   280,   281,
     418,     0,   419,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     282,   431,     0,     0,     0,     0,     0,   284,   215,   171,
       0,     0,   366,     0,     0,   216,   217,   218,     0,   287,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   430,   237,   238,
     239,   240,   241,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   251,   252,   253,     0,     0,     0,
       0,   254,     7,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,   260,   261,
       0,     0,     0,     0,     0,   215,   171,     0,   262,    25,
       0,   263,   216,   217,   218,     0,     0,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   430,   237,   238,   239,   240,   241,
     242,   243,   244,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     250,   251,   252,   253,     0,     0,     0,     0,   254,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   259,   260,   261,    43,    44,    45,
      46,     0,     0,    48,     0,   262,    25,     0,   263,     0,
       0,   783,    56,     0,     0,    59,   784,     0,   785,   786,
       0,   787,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   273,     0,     0,     0,   274,    80,
       0,     0,     0,     0,   276,   277,   278,     0,   279,   280,
     281,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,    98,     0,     0,
       0,   282,   431,     0,     0,     0,     0,     0,   284,     0,
       0,     0,     0,   366,     0,     0,     0,   633,     0,     0,
     287,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,     0,
       0,     0,     0,   609,     0,     0,     0,     0,     0,     0,
       0,   273,     0,  1182,     0,   274,     0,     0,     0,     0,
       0,   276,   277,   278,     0,   279,   280,   281,     0,     0,
       0,   120,  1263,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   651,   652,
       0,     0,     0,     0,     0,   284,     0,     0,     0,     0,
     653,   215,   171,     0,   330,     0,   899,   287,   216,   217,
     218,     0,     0,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     430,   237,   238,   239,   240,   241,   242,   243,   244,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,   251,   252,   253,
       0,     0,     0,     0,   254,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     259,   260,   261,     0,     0,     0,     0,     0,   215,   171,
       0,   262,    25,     0,   263,   216,   217,   218,     0,     0,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   430,   237,   238,
     239,   240,   241,   242,   243,   244,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   251,   252,   253,     0,     0,     0,
       0,   254,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,   259,   260,   261,
      43,    44,    45,    46,     0,     0,    48,     0,   262,    25,
       0,   263,     0,     0,   783,    56,     0,     0,    59,   784,
       0,   785,   786,     0,   787,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   273,     0,     0,
       0,   274,    80,     0,     0,     0,     0,   276,   277,   278,
       0,   279,   280,   281,     0,     0,     0,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    97,
      98,     0,     0,     0,   282,   431,     0,     0,     0,     0,
       0,   284,     0,     0,     0,     0,   366,     0,     0,     0,
       0,     0,     0,   287,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
       0,     0,     0,     0,   273,     0,  1183,     0,   274,     0,
       0,     0,     0,     0,   276,   277,   278,     0,   279,   280,
     281,     0,     0,     0,   120,  1282,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   282,   431,     0,     0,     0,     0,     0,   284,   215,
     171,     0,  1361,   366,  1122,     0,   216,   217,   218,     0,
     287,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   430,   237,
     238,   239,   240,   241,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,   251,   252,   253,     0,     0,
       0,     0,   254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   259,   260,
     261,     0,     0,     0,     0,     0,     0,     0,     0,   262,
      25,     0,   263,   215,   171,     0,  1524,     0,     0,     0,
     216,   217,   218,     0,     0,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   430,   237,   238,   239,   240,   241,   242,   243,
     244,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   250,   251,
     252,   253,     0,     0,     0,     0,   254,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,   260,   261,     0,     0,     0,     0,     0,
       0,     0,     0,   262,    25,     0,   263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,     0,     0,     0,   274,
       0,     0,     0,     0,     0,   276,   277,   278,     0,   279,
     280,   281,     0,     0,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   282,   431,     0,     0,     0,     0,     0,   284,
       0,     0,     0,     0,   366,     0,     0,     0,     0,     0,
       0,   287,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1184,     0,     0,     0,     0,   273,
       0,     0,     0,   274,     0,     0,     0,     0,     0,   276,
     277,   278,     0,   279,   280,   281,     0,     0,     0,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   282,   431,     0,     0,
       0,     0,     0,   284,   215,   171,     0,  1590,   366,     0,
       0,   216,   217,   218,     0,   287,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   430,   237,   238,   239,   240,   241,   242,
     243,   244,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
     251,   252,   253,     0,     0,     0,     0,   254,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   259,   260,   261,     0,     0,     0,     0,
       0,   215,   171,     0,   262,    25,     0,   263,   216,   217,
     218,     0,     0,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     430,   237,   238,   239,   240,   241,   242,   243,   244,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,   251,   252,   253,
       0,     0,     0,     0,   254,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     259,   260,   261,    43,    44,    45,    46,     0,     0,    48,
       0,   262,    25,     0,   263,     0,     0,   783,    56,     0,
       0,    59,   784,     0,   785,   786,     0,   787,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     273,     0,     0,     0,   274,    80,     0,     0,     0,     0,
     276,   277,   278,     0,   279,   280,   281,     0,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,    97,    98,     0,     0,     0,   282,   431,     0,
       0,     0,     0,     0,   284,     0,     0,     0,     0,   366,
       0,     0,     0,     0,     0,     0,   287,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,     0,     0,     0,     0,   609,
       0,     0,     0,     0,     0,     0,     0,   273,     0,  1185,
       0,   274,     0,     0,     0,     0,     0,   276,   277,   278,
       0,   279,   280,   281,     0,     0,     0,   120,  1301,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282,   431,     0,     0,     0,     0,
       0,   284,   215,   171,     0,     0,   366,  1644,     0,   216,
     217,   218,     0,   287,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   430,   237,   238,   239,   240,   241,   242,   243,   244,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
     253,     0,     0,     0,     0,   254,     7,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   259,   260,   261,     0,     0,     0,     0,     0,   215,
     171,     0,   262,    25,     0,   263,   216,   217,   218,     0,
       0,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   430,   237,
     238,   239,   240,   241,   242,   243,   244,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,   251,   252,   253,     0,     0,
       0,     0,   254,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   259,   260,
     261,    43,    44,    45,    46,     0,     0,    48,     0,   262,
      25,     0,   263,     0,     0,   783,    56,     0,     0,    59,
     784,     0,   785,   786,     0,   787,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   273,     0,
       0,     0,   274,    80,     0,     0,     0,     0,   276,   277,
     278,     0,   279,   280,   281,     0,     0,     0,   120,     7,
       8,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,    98,     0,     0,     0,   282,   431,     0,     0,     0,
       0,     0,   284,     0,     0,     0,     0,   366,  1979,     0,
       0,     0,     0,     0,   287,     0,     0,     0,     0,     0,
       0,     0,     7,     8,     0,     0,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,   273,     0,     0,   609,   274,
       0,     0,     0,     0,     0,   276,   277,   278,  1186,   279,
     280,   281,     0,     0,     0,   120,  1319,     0,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,   282,   431,    43,    44,    45,    46,     0,   284,
      48,     0,     0,     0,   366,     0,     0,     0,   783,    56,
       0,   287,    59,   784,     0,   785,   786,     0,   787,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,     0,    80,    43,    44,    45,
      46,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,   783,    56,     0,     0,    59,   784,     0,   785,   786,
       0,   787,    96,    97,    98,     7,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,     0,    96,    97,    98,     7,     8,
       0,     0,  1191,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,     0,     0,  1353,
       0,     0,     0,     0,     0,  1192,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     0,     0,     0,
      43,    44,    45,    46,     0,     0,    48,     0,     0,     0,
       0,     0,  1516,     0,   783,    56,     0,     0,    59,   784,
       0,   785,   786,     0,   787,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
       0,     0,    80,    43,    44,    45,    46,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,   783,    56,     0,
       0,    59,   784,     0,   785,   786,     0,   787,    96,    97,
      98,     0,     0,    -4,     1,     0,     0,    -4,     0,     0,
       0,     0,     0,     0,     0,    80,    -4,    -4,     0,     0,
       0,     0,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,    96,    97,    98,   609,     0,     0,     0,     0,    -4,
      -4,    -4,     0,     0,  1194,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -4,    -4,    -4,     0,     0,  2160,     0,    -4,    -4,     0,
       0,     0,     0,    -4,     0,     0,     0,     0,    -4,    -4,
      -4,    -4,    -4,     0,    -4,    -4,     0,    -4,     0,     0,
       0,     0,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,  2217,     0,
      -4,    -4,    -4,    -4,    -4,    -4,     0,    -4,     0,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,     0,     0,    -4,    -4,    -4,
       0,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,     0,     0,     0,    -4,    -4,    -4,
       0,     0,     0,    -4,     0,     0,     0,     0,    -4,    -4,
      -4,    -4,     0,     0,    -4,     0,    -4,     0,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,     0,     6,     0,     0,     0,     0,    -4,    -4,
      -4,    -4,     7,     8,     0,     0,     0,     0,     0,     0,
      -4,     0,    -4,    -4,     0,     0,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     9,    10,    11,   609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1311,     0,
       0,     0,     0,     0,     0,     0,    12,    13,    14,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     0,    17,
       0,     0,     0,     0,    18,    19,    20,    21,    22,     0,
      23,    24,     0,    25,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,     0,    42,    43,    44,    45,
      46,    47,     0,    48,     0,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,    65,    66,    67,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,     0,    91,    92,    93,     0,     0,     0,    94,
       0,     0,     0,     0,    95,    96,    97,    98,   171,   392,
      99,     0,   100,     0,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,     0,     0,
       0,     0,     0,     0,   115,   116,   117,   118,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,   120,   121,
       0,     0,     0,   393,   394,   395,   396,   397,   398,   399,
     400,   401,     7,     8,     0,     0,   402,   403,   404,   405,
       0,     0,     0,     0,   406,   407,   408,   409,     0,     0,
       0,     0,     0,   410,     0,   411,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   412,
       0,     0,   413,     0,     0,     0,   177,     0,     0,   178,
       0,     0,   179,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     7,
       8,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     0,     0,     0,    43,    44,    45,
      46,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,   783,    56,     0,     0,    59,   784,     0,   785,   786,
       0,   787,     0,     0,     0,  1068,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,     0,  1069,   414,   415,   416,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   417,     0,     0,     0,
     418,     0,   419,   120,     0,    96,    97,    98,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,    43,    44,    45,    46,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,   783,    56,
       0,     0,    59,   784,     0,   785,   786,     0,   787,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,     0,     0,     0,     0,   609,
       0,     0,    96,    97,    98,     0,     0,     0,     0,  1334,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1420,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1424,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1518,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   741,   605,   606,   607,   608,     0,     0,     0,
       0,   609,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1519,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1566,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,     0,     0,     0,   609,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1693,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1694,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,     0,
       0,     0,     0,   609,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1695,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1843,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,     0,     0,     0,     0,   609,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1966,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1967,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1999,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2071,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   741,   605,   606,   607,   608,     0,     0,     0,
       0,   609,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2128,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2129,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,     0,     0,     0,   609,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2144,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2178,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,     0,
       0,     0,     0,   609,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2205,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2210,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,     0,     0,     0,     0,   609,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2211,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,     0,     0,     0,     0,   842,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   741,   605,   606,   607,   608,     0,     0,     0,
       0,   609,     0,     0,     0,     0,     0,  1103,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,     0,     0,     0,     0,  1159,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,     0,     0,     0,     0,   609,
       0,     0,     0,     0,     0,  1207,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,     0,     0,     0,  1208,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,     0,     0,     0,   609,     0,     0,
       0,     0,     0,  1252,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
       0,     0,  1285,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,     0,     0,     0,
       0,  1299,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
    1306,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,     0,
       0,     0,     0,   609,     0,     0,     0,     0,     0,  1367,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,     0,     0,     0,     0,  1387,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   741,   605,   606,   607,   608,     0,     0,     0,
       0,   609,     0,     0,     0,     0,     0,  1423,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,     0,     0,     0,     0,  1471,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,     0,     0,     0,     0,   609,
       0,     0,     0,     0,     0,  1472,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,     0,     0,     0,  1473,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,     0,     0,     0,   609,     0,     0,
       0,     0,     0,  1520,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
       0,     0,  1596,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,     0,     0,     0,
       0,  1894,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
    1905,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,     0,
       0,     0,     0,   609,     0,     0,     0,     0,     0,  1946,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,     0,     0,     0,     0,  2020,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   741,   605,   606,   607,   608,     0,     0,     0,
       0,   609,     0,     0,     0,     0,     0,  2036,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,     0,     0,     0,     0,  2048,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,     0,     0,     0,     0,   609,
       0,     0,     0,     0,     0,  2072,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,     0,     0,     0,  2107,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,     0,     0,     0,   609,     0,     0,
       0,     0,     0,  2117,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
       0,     0,  2118,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,     0,     0,     0,
       0,  2142,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,     0,     0,
    2191,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,     0,
       0,     0,     0,   609,     0,     0,     0,     0,     0,  2230,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,     0,     0,     0,     0,  2248,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   741,   605,   606,   607,   608,     0,     0,     0,
       0,   609,     0,     0,     0,     0,     0,  2266,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,     0,     0,     0,     0,  2267,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,     0,     0,     0,     0,   609,
       0,     0,     0,     0,   742,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,     0,     0,     0,   609,     0,     0,
       0,     0,   964,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,     0,     0,     0,
    2013,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,     0,
       0,     0,     0,   609,     0,   769,     0,   770,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,     0,     0,  1030,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,     0,     0,     0,   609,     0,     0,
       0,  1079,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,  1231,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   741,   605,   606,   607,   608,     0,     0,     0,
       0,   609,     0,     0,     0,  1300,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,     0,  1302,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,     0,     0,  1309,
     591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   602,   603,   741,   605,   606,   607,   608,     0,     0,
       0,     0,   609,     0,     0,     0,  1310,   591,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     741,   605,   606,   607,   608,     0,     0,     0,     0,   609,
       0,     0,     0,  1402,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   741,   605,   606,
     607,   608,     0,     0,     0,     0,   609,     0,     0,     0,
    1416,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   741,   605,   606,   607,   608,     0,
       0,     0,     0,   609,     0,     0,     0,  1625,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,     0,     0,  1714,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   741,   605,
     606,   607,   608,     0,     0,     0,     0,   609,     0,     0,
       0,  1767,   591,   592,   593,   594,   595,   596,   597,   598,
     599,   600,   601,   602,   603,   741,   605,   606,   607,   608,
       0,     0,     0,     0,   609,     0,     0,     0,  1958,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   741,   605,   606,   607,   608,     0,     0,     0,
       0,   609,     0,     0,     0,  2003,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   741,
     605,   606,   607,   608,     0,     0,     0,     0,   609,     0,
       0,     0,  2021,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,   823,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,   824,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,   825,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,   827,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,   828,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,   829,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,   831,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,   832,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,   833,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,   834,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,   835,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,   836,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,   837,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,   839,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,   840,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,   841,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,   911,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,   945,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,   994,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1011,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1019,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1021,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1022,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1028,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1029,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1067,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1078,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1139,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1143,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1155,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1230,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1240,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1241,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1242,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1251,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1253,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1254,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1284,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1286,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1287,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1288,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1289,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1290,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1291,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1292,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1298,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1312,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1314,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1352,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1401,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1415,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1626,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1661,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1701,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1713,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1830,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1832,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1835,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1842,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1895,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  1904,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  1931,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  2002,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  2069,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  2070,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609,     0,  2204,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   741,   605,   606,   607,
     608,     0,     0,     0,     0,   609,     0,  2245,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   741,   605,   606,   607,   608,     0,     0,     0,     0,
     609
};

static const yytype_int16 yycheck[] =
{
       3,   323,     4,     3,  1279,   648,   649,  1283,   161,  1798,
    1752,  1800,   766,    69,    70,  1479,    72,     5,   772,   110,
      63,   112,    25,     4,     4,  1982,     9,    25,     4,     4,
       4,     4,  1785,     5,   108,     6,     5,     5,   143,     6,
       6,   108,   102,    94,     6,     4,   108,   246,   247,   165,
       7,   261,    55,     6,     4,     4,   147,   267,   262,     6,
       6,   121,   266,     6,   263,   143,     4,   258,     6,   260,
     132,   147,     4,     4,   108,   164,   267,     4,     4,     7,
      14,    84,     9,   161,     4,   176,    89,    36,    37,   194,
       6,    94,     4,   171,   172,   173,    99,  1850,   132,   177,
     178,   259,   191,     0,   143,     9,   264,   110,   246,   247,
      36,    37,   105,    94,     7,   108,   109,   110,   207,   208,
     105,     9,   161,   108,   108,  1867,     9,   259,   121,   267,
       6,   258,   171,   172,   173,   267,   121,   143,   177,   178,
     251,   252,   105,   102,   147,   108,   257,   106,   148,   152,
     153,   154,   203,   112,   113,   161,   115,   116,   161,     9,
       8,   212,   111,   112,   102,   171,   172,   173,   255,   256,
       9,   177,   178,   246,   247,   246,   247,   136,   258,   182,
    2137,   258,     6,   260,   258,   263,     6,   264,     6,   259,
     267,   258,   261,   186,   267,   198,   267,   267,   267,     6,
     203,   167,   246,   247,   207,   246,   247,     6,   179,   212,
     213,   214,   259,   256,   257,   258,     6,   179,     7,   335,
     267,   202,   264,   267,   263,   267,   267,   229,   148,   149,
     150,   151,   258,   206,   154,   148,   149,     7,   354,   246,
     247,   154,  1706,   163,     7,   258,   166,   260,   229,   229,
       7,   246,   247,   229,     6,   229,   307,   308,   309,     6,
     267,  1536,     3,   265,   255,   256,   269,   108,  2010,   110,
     326,   327,   267,   264,   262,   258,   258,   260,   334,   335,
     283,   262,   262,   286,   287,   260,    27,   262,   262,   287,
     262,   266,   455,   262,   262,   262,   347,   348,   349,   302,
     303,     4,   229,   306,   307,   308,   309,   264,   258,   262,
     426,   258,   428,   364,   317,   262,   262,   229,   321,   262,
     323,    62,   438,  2065,  1078,  1079,   258,   258,   255,   256,
     258,   258,   260,   260,   258,   262,   260,   264,   231,   232,
     233,   234,   345,   262,   347,   348,   349,   259,     6,   261,
     259,   255,   256,   444,   258,     7,   260,   261,   267,     6,
     264,   364,   255,   256,   367,   241,   242,   255,   256,   258,
     258,   264,   260,   262,   115,   258,   264,   260,   258,   147,
     260,   264,   262,  2172,   152,   153,   154,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   558,   147,   260,   258,   257,
     260,   152,   153,   154,   264,   263,   255,   256,   260,   258,
     161,   260,   246,   247,   259,   264,   246,   247,   246,   247,
     198,   434,   267,   436,   241,   242,   258,   440,   441,   258,
     246,   247,   231,   232,   233,   234,   214,   255,   256,   258,
     613,   246,   247,   456,   262,     4,   262,   198,     6,     7,
     463,   231,   232,   233,   234,  2207,   255,   256,   231,   232,
     233,   234,   267,   214,   231,   232,   233,   234,   181,   182,
     183,   184,   258,   102,   575,   488,   105,    36,    37,   108,
     193,   110,   195,   196,   197,   198,   199,   259,   255,   256,
     203,   204,   121,   206,   143,   267,   246,   247,   246,   247,
     258,   514,   246,   247,   255,  2257,   246,   247,   569,   246,
     247,   637,   161,   639,   640,   246,   247,   267,   262,   267,
     271,   272,   171,   172,   173,   538,  2000,   267,   177,   178,
     656,   258,   246,   247,   547,   548,   267,   258,   264,   552,
     266,   554,   555,   556,   557,   558,     4,   710,   262,   675,
     263,   564,   111,   112,     4,   568,   569,   570,   571,   572,
     573,   574,   259,   576,   261,   578,   574,     4,   576,   231,
     232,   233,   234,   746,   246,   247,   702,   258,    36,    37,
     646,   647,   246,   247,   258,   651,    36,    37,   246,   247,
     259,   604,   261,   255,   256,   267,   262,   610,   267,    36,
      37,   123,   258,   267,   246,   247,   262,   780,   258,   267,
     246,   247,   262,   259,   263,   261,   742,   143,   259,   632,
     633,   267,   723,   258,   797,   267,   267,   246,   247,   246,
     247,   267,   191,   192,   807,   161,   246,   247,   648,   649,
    1293,   259,   246,   247,   258,   171,   172,   173,   267,   267,
     267,   177,   178,   111,   112,     8,   434,   267,   246,   247,
     258,   111,   112,   267,   259,   246,   247,   263,   681,   682,
     683,   267,   267,   258,   111,   112,   689,   258,   258,   267,
     766,   262,   259,   434,   261,   102,   148,   149,   105,   263,
     267,   108,   154,   267,   445,   708,   709,   710,   711,   712,
     713,   714,   715,   716,   121,   718,   719,   720,   721,   722,
     258,   724,   725,   726,   727,   728,   467,   108,   731,   727,
       6,   822,   246,   247,   259,     6,   261,   259,   262,   261,
     743,   482,   267,   786,   258,   267,   110,   263,   262,   258,
     913,  1505,   258,   756,   105,   255,   256,   108,   258,   110,
     260,   258,   262,   260,   191,   192,   255,   256,   771,   258,
     121,   260,   262,   258,   777,   260,   246,   247,   248,   249,
     250,   251,   252,     4,   552,     6,   554,   257,   556,   557,
     793,   794,   255,   256,   262,   258,   799,   260,   801,   108,
     258,   804,   805,   571,   572,   248,   249,   250,   251,   252,
     813,   552,   815,   554,   257,   556,   557,   558,   105,   105,
     262,   108,   263,   110,   263,   263,   267,   262,   267,   267,
     571,   572,   263,   263,   263,   263,   267,   267,   267,   267,
     258,   263,   845,   262,   847,   267,   263,  1601,   108,   263,
     267,   263,   968,   267,   263,   267,   108,  1611,   267,   263,
     105,   263,    55,   267,   955,   267,   942,   263,   263,   263,
     263,   267,   267,   267,   267,   105,   263,   263,   263,   882,
     267,   267,   267,   263,   263,  2161,   263,   267,   267,   892,
     267,     4,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
       4,   108,   915,   654,   257,   971,     4,  1080,  2193,   263,
     263,   263,   978,   267,     4,   267,   982,   263,   931,   263,
       6,   267,   263,   267,     8,   263,   267,   678,   258,   267,
     943,   709,  2218,   711,   712,   713,   714,   715,   716,   952,
     718,   719,   720,   721,   258,   263,   724,   725,   726,   267,
    2235,   964,   263,   258,     6,   258,   267,   708,   709,   710,
     711,   712,   713,   714,   715,   716,   260,   718,   719,   720,
     721,   260,   263,   724,   725,   726,   267,     6,  1064,     6,
     263,  1082,   262,   734,   267,   263,   737,   263,   262,   267,
     263,   267,  1078,  1079,   267,   266,   263,   263,   263,   750,
     267,   267,   267,   263,   263,     6,   258,   267,   267,  1095,
     213,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   804,     8,   263,   263,
     257,   263,   267,   267,   785,   267,   787,   815,   263,     9,
     263,  1214,   267,  1216,   267,  1377,   263,   263,   263,   262,
     267,   267,   267,   804,   263,   263,  1229,   263,   267,   267,
    1073,   267,   266,   263,   815,   263,   269,   267,  1081,   267,
    1136,   263,   258,   263,   258,   267,  1089,   267,   259,   258,
     261,   262,   258,   258,  1737,  1738,  1259,   194,   259,  1102,
     261,   262,   258,   194,  1107,   194,   132,   262,   258,   258,
     258,   258,   194,   306,   258,   258,   262,   258,   258,     4,
     262,     7,     6,   262,   317,   262,   262,   262,   321,   258,
     258,   258,   258,   258,  1137,  1138,   258,  1140,  1141,  1142,
     258,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,
    1153,     6,   260,  1156,  1230,  1231,     6,     6,   262,  1322,
    1323,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   262,
       6,   262,   260,   257,  1347,   259,     6,   261,   258,   262,
     262,  1354,   260,  1196,  1197,  1198,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   260,
    1373,   258,   262,   257,   194,   258,     6,   258,  1221,   258,
     258,   258,   258,     6,     6,   260,   967,     8,   969,   970,
     262,     6,     8,   258,  1237,  1238,  1239,  1400,   262,     7,
       6,   262,   983,     6,   262,    97,   262,   440,   441,   263,
     259,  1414,   267,     7,   267,     6,     6,   259,  1421,   262,
     257,   262,  1003,   456,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,  1604,   262,  1025,   262,   257,   262,   259,    67,
     264,  1294,     8,  1293,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
    1313,     7,  1315,  1316,   257,     7,   258,     6,   259,     7,
       6,  1062,  1325,   262,     7,  1401,  1402,  1330,     6,     6,
     263,  1334,   191,   262,  1425,   263,  1427,   263,   261,  1107,
    1343,   259,  1345,     6,   264,  1348,   262,     7,     6,   260,
     258,     6,   262,     6,     6,     6,     6,   259,     7,   260,
       7,  1364,   555,     7,     7,     7,  1107,     7,     7,     7,
       7,     7,     7,  2016,  1377,   568,     7,   570,     7,     7,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,     7,  1402,
       7,   262,   257,     6,  1407,   259,  1409,   267,   261,   267,
     267,   267,   263,   259,     7,   263,     7,   264,   262,   262,
       4,     6,   264,   263,  1427,   263,   143,   262,     7,  1197,
    1198,     6,   264,     7,     6,   259,  1439,     7,     7,   267,
    1443,   259,   267,     9,   267,   259,   261,   264,   194,     7,
     266,   164,   263,   262,     6,     6,  1197,  1198,     6,  1612,
    1613,    49,    49,   264,   258,   262,   258,   262,   264,   258,
     258,   264,     7,  1589,     7,     7,   267,  1593,     7,  1535,
     194,     7,   259,     7,     6,   259,     7,   267,     7,     7,
    1812,     7,     7,  1584,   120,     4,  1499,  1500,  1501,     6,
     262,   258,     7,     6,  1507,  1508,  1509,     7,     7,     7,
       7,     7,     7,     7,   262,     6,   102,     6,     6,   108,
    1261,     7,     7,  1526,     6,  1601,     6,     4,     7,     7,
     265,   267,   259,   267,  1537,     6,   262,   262,   262,     6,
     263,     6,  1545,     7,     6,   260,  1549,     6,     6,   258,
     258,   262,     6,   263,     6,     6,  1647,  1560,   264,  1562,
       6,     6,  1330,   756,   261,   267,  1334,     6,     6,   136,
       6,     6,     6,     6,     6,  1343,     6,  1345,     6,     6,
    1348,     6,     6,     6,     6,     6,     5,   259,   259,  1330,
       6,     6,     4,  1334,   262,     6,   262,     7,     6,   260,
       7,  1604,  1343,   262,  1345,   262,   262,  1348,  1664,  1612,
    1613,     6,     6,     6,   262,  1618,   262,  1358,   263,     6,
       6,   262,   190,     6,     6,   106,     7,     6,   262,   262,
     262,     6,   262,  1636,  1402,   262,  1712,   262,   259,   262,
       6,  1804,  1733,   267,  1647,   267,   264,   267,   267,  1652,
     258,   263,     6,   258,     4,     7,   258,     6,     6,     6,
       6,  1402,  1815,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,     6,   143,     5,   262,   257,   259,  1778,     6,     6,
     267,   262,     6,   143,  1785,  1786,   143,  1753,  1754,  1755,
    1756,  1757,  1758,   262,   267,     6,     6,     6,     6,     6,
     267,   267,   259,     6,     6,  1806,     6,   267,   262,   262,
       6,  1724,   915,     6,     6,     6,  1729,  1730,     6,   147,
    2052,   262,     7,     6,   262,   262,     5,  1737,  1738,   262,
       6,     6,   259,     6,     6,   189,     7,     6,   262,  1752,
     262,     6,   263,   263,   262,  1758,     7,   259,     6,   952,
    1763,     6,   263,     6,     6,     6,     6,     6,     6,  1772,
     263,   263,     6,     6,   264,   262,   259,  1780,     6,   263,
    1783,     6,     6,   192,     6,     6,   262,   262,   258,   263,
     263,   259,     6,   262,     6,     6,   262,     6,  1801,   262,
     143,     6,  1805,   263,     6,   262,   262,   262,     6,  1812,
     259,  1814,  1815,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,     6,   263,     6,   263,   257,     6,     6,     6,     6,
       6,     6,   262,     6,     6,   262,     6,  1850,   262,     6,
       6,     6,     6,  1413,  1945,  2174,  1474,  1659,  1983,  1943,
    1720,  1438,     3,  1091,  1867,     3,     3,     3,  1636,   485,
     625,  1612,  1613,  2012,  1581,  1878,  1879,     3,  1785,   804,
    1073,  1613,  1805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1636,  1089,  1988,    -1,    -1,
    1903,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2025,
      -1,    -1,  1915,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1932,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1137,  1138,    -1,  1140,  1141,  1142,
      -1,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,
    1153,    -1,    -1,    -1,    -1,    -1,  1969,    -1,    -1,    -1,
      -1,    -1,    -1,  2029,  2030,  2031,  2032,  2033,    -1,    -1,
      -1,  1984,    -1,    -1,    -1,    -1,  1989,    -1,    -1,  1992,
    1993,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1196,    -1,    -1,  2122,  2010,    -1,    -1,
    2013,    -1,  1780,    -1,    -1,  1783,  2016,    -1,    -1,    -1,
      -1,  2024,    -1,    -1,    -1,  2028,    -1,    -1,  1221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2093,    -1,  1780,
      -1,  2097,  1783,    -1,  1237,    -1,  2162,  2138,    -1,  2052,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1798,    -1,  1800,
      -1,    -1,  2065,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1815,    -1,    -1,    -1,    -1,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2094,  2148,    -1,    -1,    -1,  2152,    -1,    -1,    -1,
      -1,  1294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1850,
      -1,    -1,  2168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1313,    -1,  1315,  1316,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    -1,    -1,  2146,    -1,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,  2213,  2214,    -1,
      -1,  2164,  2165,  2166,  2167,  2168,    -1,    -1,    -1,    -1,
      95,  1364,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2207,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
    2223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1427,    -1,    -1,    -1,    -1,    -1,
      -1,  2244,    -1,    -1,    -1,    -1,  1439,    -1,     6,    -1,
    1443,    -1,    -1,    -1,  2257,    -1,    -1,    -1,    -1,    -1,
    2263,  2264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   210,   211,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,
      -1,   226,    -1,   228,   229,    -1,  1499,  1500,  1501,    -1,
      -1,    -1,    -1,    -1,  1507,  1508,  1509,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,
     255,   256,    -1,  1526,    -1,    -1,    -1,   262,    -1,   264,
      -1,    -1,    -1,    -1,  1537,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1545,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2106,    -1,  1560,    -1,  1562,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,     6,    -1,    -1,    -1,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,     6,
      98,    -1,    -1,    -1,   102,  1618,    -1,   105,    -1,    -1,
     108,  2172,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2194,  1647,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2244,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,  2263,  2264,    -1,    -1,   257,
      -1,    -1,    -1,  2244,    -1,    -1,    -1,    -1,  2276,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,   119,    -1,    -1,
      -1,    -1,  2263,  2264,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1724,   210,   211,   212,  2276,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   222,   147,    -1,    -1,   226,   151,
     228,   229,    -1,    -1,   156,    -1,    -1,    -1,    -1,  1752,
      -1,   163,    -1,     6,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1772,
      -1,   183,   184,   185,   262,   187,   188,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,   200,   201,
     202,    -1,    -1,    -1,    -1,   207,    -1,    -1,  1801,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1814,    -1,    -1,    -1,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,    -1,   257,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,  1867,    -1,    -1,    -1,    -1,    -1,
     282,   283,   284,   285,   286,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   301,
     302,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1903,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,   330,    -1,
      -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   345,   346,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,   366,   367,    -1,   257,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   377,  1969,   379,   380,    -1,
     382,    -1,    -1,    -1,   386,   387,   388,    -1,    -1,   391,
      -1,  1984,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,  2010,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   431,
      -1,  2024,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   453,   454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   468,     6,    -1,    -1,
      -1,    -1,  2065,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,
      -1,    -1,    -1,   495,    -1,    -1,    -1,   499,    -1,    -1,
      -1,  2094,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   513,   514,    -1,    -1,    -1,   518,    -1,    -1,    -1,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,    -1,   550,   551,
      -1,   553,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   563,    -1,    -1,   566,   567,    -1,    -1,    -1,    -1,
      -1,   573,    -1,    -1,    -1,    -1,   578,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,    -1,   611,
     612,    -1,    -1,    -1,  2207,    -1,    -1,   619,   620,   621,
      -1,    -1,    -1,    -1,    -1,   627,   628,   629,   630,    -1,
     632,   633,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   651,
     652,   653,    -1,    -1,    -1,   657,   658,   659,   660,   661,
     662,   663,   664,   665,  2257,    -1,    -1,    -1,    -1,   671,
     672,    -1,   674,    -1,    -1,   677,    -1,    -1,    -1,   681,
     682,   683,   684,     7,     8,    -1,   688,   689,   690,   691,
     692,    -1,    -1,   695,    -1,   697,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,   717,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   731,
      -1,    13,    14,    -1,    -1,    -1,   738,   739,    -1,   741,
      -1,    -1,   744,   745,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   753,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   771,
     207,   773,     6,    -1,    -1,    -1,   778,   779,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   793,    -1,   795,   796,    -1,    -1,   799,    -1,   801,
     802,   207,    -1,    -1,   806,    -1,   808,    -1,   810,    -1,
      -1,    -1,    -1,    -1,   816,     6,    -1,    -1,   820,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,   118,   119,   120,   121,
      -1,   843,   124,   845,    -1,   847,   283,    -1,    -1,   286,
     132,   133,    -1,    -1,   136,   137,    -1,   139,   140,    -1,
     142,    -1,    -1,    -1,    -1,   302,   303,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
     882,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,
     892,   893,   894,   895,    -1,    -1,   302,   303,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,   188,    -1,   345,    -1,
      -1,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   931,
     367,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   345,
      -1,   943,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   951,
      -1,    -1,    -1,   955,    -1,    -1,    -1,    -1,    -1,   961,
      -1,    -1,   964,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     972,   973,    -1,    -1,    -1,    -1,   978,    -1,    -1,    -1,
      -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   995,    -1,    -1,   998,    -1,    -1,   436,
      -1,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,  1024,   257,  1026,  1027,    -1,    -1,    -1,    -1,
     436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1045,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,  1069,    -1,    -1,
      -1,    -1,    -1,    -1,  1076,    -1,    -1,   514,    -1,    -1,
      -1,  1083,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1096,  1097,    -1,    -1,    -1,    -1,
    1102,   538,    -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,
     547,   548,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,  1134,    -1,   257,    -1,   573,    -1,    -1,    -1,
      -1,   578,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   604,    -1,    -1,
    1172,    -1,   578,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1182,  1183,  1184,  1185,  1186,    -1,    -1,    -1,    -1,  1191,
    1192,    -1,  1194,    -1,    -1,   632,   633,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1209,  1210,    -1,
      -1,    -1,    -1,    -1,    -1,  1217,  1218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1226,  1227,   632,   633,    -1,    -1,
    1232,  1233,    -1,    -1,    -1,    -1,  1238,  1239,    -1,    -1,
      -1,    -1,    -1,    -1,   681,   682,   683,    -1,    -1,    -1,
      -1,    -1,   689,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1273,    -1,    -1,    -1,   681,   682,   683,    -1,    -1,
      -1,    -1,    -1,   689,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   731,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1325,    -1,   731,    -1,    -1,    -1,    -1,
      -1,  1333,    -1,    -1,   771,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,  1355,  1356,    -1,   793,   257,  1360,    -1,
      -1,    -1,   799,    -1,   801,   771,    -1,    -1,    -1,  1371,
      -1,    -1,  1374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,    -1,   793,     6,    -1,
      -1,    -1,    -1,   799,    -1,   801,    -1,    -1,    -1,    -1,
      -1,  1403,    -1,    -1,  1406,  1407,  1408,  1409,   845,    -1,
     847,    -1,    -1,    -1,    -1,  1417,    -1,    -1,  1420,    -1,
    1422,    -1,  1424,  1425,    -1,    -1,  1428,  1429,    49,    50,
      51,    52,    53,    54,    55,    56,    57,     6,    -1,    -1,
      -1,    62,    63,    64,    65,   882,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,   892,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    -1,   882,    98,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,   892,   108,    -1,   110,
      -1,    -1,    -1,    -1,   931,    -1,    -1,    -1,    -1,    -1,
     121,    -1,    -1,    -1,  1506,    -1,   943,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1517,  1518,  1519,   139,    -1,
      -1,    -1,    -1,    -1,  1526,   931,  1528,   964,    -1,    -1,
      -1,    -1,    -1,  1535,    -1,    -1,    -1,   943,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1549,    -1,    -1,
      -1,    -1,    -1,  1555,  1556,    -1,    -1,    -1,   964,    -1,
      -1,    -1,    -1,    -1,  1566,  1567,  1568,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1576,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1587,    -1,    -1,    -1,   210,
     211,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   222,    -1,    -1,    -1,   226,  1608,   228,   229,    -1,
      -1,    -1,    -1,    -1,  1616,  1617,     6,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,   259,   257,
     261,   262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1652,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1102,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,  1693,  1694,  1695,    -1,    -1,  1102,    -1,    -1,    -1,
      -1,    -1,  1704,    -1,    -1,    -1,    -1,  1709,  1710,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1156,
    1722,    -1,    -1,    -1,    -1,    -1,    -1,  1729,  1730,  1731,
      -1,  1733,    -1,    -1,    -1,    -1,    -1,  1739,  1740,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1156,    -1,    -1,    -1,    -1,    -1,  1758,    -1,    -1,    -1,
      -1,  1763,  1764,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1778,    -1,    -1,  1781,
      -1,    -1,    -1,  1785,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1794,  1795,    -1,  1797,    -1,    -1,    -1,    -1,
      -1,  1238,  1239,    -1,    -1,  1807,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1821,
      -1,    -1,    -1,    -1,  1826,  1827,    -1,    -1,    -1,   458,
      -1,    -1,  1238,  1239,    -1,    -1,    -1,    -1,  1840,    -1,
      -1,  1843,  1844,     6,  1846,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1878,  1879,    -1,    -1,
      -1,    -1,    -1,  1885,  1886,    -1,    -1,    -1,  1325,    -1,
      -1,    -1,    -1,    -1,    -1,  1897,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1906,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1915,    -1,    -1,    -1,    -1,    -1,  1325,
      -1,    -1,    -1,    -1,    -1,    -1,  1928,  1929,    -1,    -1,
    1932,    -1,    -1,    -1,    -1,   564,    -1,    -1,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,     6,    -1,    -1,    -1,
     257,    -1,    -1,    -1,  1966,  1967,    -1,    -1,    -1,    -1,
    1407,    -1,  1409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1987,   615,    -1,    -1,    -1,
    1992,  1993,  1994,    -1,    -1,    -1,    -1,  1999,    -1,    -1,
      -1,  1407,    -1,  1409,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2013,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2028,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2037,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,     4,     5,   257,    -1,
    2062,    -1,    -1,    -1,    -1,     6,  2068,    -1,    -1,  2071,
      -1,    -1,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
    2102,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,  1549,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,  2128,  2129,    -1,    -1,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2143,  2144,  1549,  2146,    -1,    -1,    95,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,  2159,    -1,    -1,
      -1,    -1,  2164,  2165,  2166,  2167,  2168,    -1,    -1,    -1,
      -1,    -1,  2174,    -1,    -1,    -1,  2178,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,  2205,    -1,    -1,    -1,   257,  2210,  2211,
      -1,    -1,    -1,    -1,    -1,  1652,     7,    -1,    -1,    -1,
      -1,  2223,    -1,   852,   853,   854,   855,   856,   857,   858,
     859,   860,   861,   862,    -1,   864,   865,   866,   867,    -1,
     869,   870,   871,   872,    -1,    -1,    -1,    -1,  2250,  2251,
      -1,    -1,    -1,    13,    14,    -1,   885,    -1,   887,    -1,
      -1,    -1,   210,   211,   212,    -1,    -1,    -1,    -1,   898,
      -1,    -1,    -1,    -1,   222,    -1,   905,   906,   226,    -1,
     228,   229,    -1,    -1,    -1,   914,    -1,    -1,    -1,    -1,
      -1,    -1,  1729,  1730,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,  1758,    -1,  1729,  1730,    -1,  1763,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    -1,    -1,  1763,   118,   119,
     120,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,    -1,    -1,   136,   137,    -1,   139,
     140,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,  1031,  1032,  1033,    -1,    -1,    -1,  1037,  1038,
      -1,    -1,  1041,  1042,  1043,  1044,    -1,  1046,    -1,    -1,
      -1,    -1,  1051,    13,    14,    -1,   186,   187,   188,    -1,
      -1,    -1,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,  1878,  1879,    -1,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,  1878,  1879,    -1,    -1,    -1,    -1,  1915,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1932,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   263,  1133,    -1,  1135,    -1,    -1,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    -1,  1932,    -1,   118,   119,
     120,   121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,    -1,    -1,   136,   137,    -1,   139,
     140,    -1,   142,   147,    -1,  1992,  1993,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,  2013,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1992,  1993,    -1,    -1,
      -1,  2028,    -1,    -1,    13,    14,   186,   187,   188,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1235,  2013,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2028,    -1,    -1,    -1,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,    -1,   252,   253,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   262,   263,
      -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
     274,   275,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,    -1,    -1,   118,
     119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,  2146,
      -1,    -1,    -1,   132,   133,    -1,    -1,   136,   137,    -1,
     139,   140,    -1,   142,    -1,    -1,    -1,  2164,  2165,  2166,
    2167,  2168,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2146,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1383,    -1,    -1,    -1,  2164,  2165,
    2166,  2167,  2168,    -1,    -1,    -1,    -1,   186,   187,   188,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      14,    -1,    -1,    -1,    -1,    -1,  2223,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1426,    -1,   393,
     394,   395,    -1,    -1,    -1,   399,   400,   401,   402,   403,
     404,   405,    -1,   407,    -1,    -1,    -1,  2223,   412,   413,
      -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,  1457,  1458,
    1459,  1460,  1461,  1462,  1463,    -1,   430,    -1,    -1,  1468,
    1469,    -1,    -1,    -1,   263,    -1,  1475,    -1,  1477,    -1,
      -1,    -1,  1481,    -1,    -1,  1484,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1495,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,   118,   119,   120,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
      -1,    -1,   136,   137,    -1,   139,   140,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,    -1,  1572,    -1,  1574,    -1,    -1,    -1,  1578,
      -1,  1580,   186,   187,   188,    -1,    -1,    -1,    -1,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
      -1,   257,    -1,  1612,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,   586,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,   263,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      77,    78,    79,    -1,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,
      -1,    98,  1711,    -1,    -1,   102,    -1,    -1,   105,     8,
      -1,   108,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
     137,    -1,   139,    -1,    -1,   142,    -1,    -1,    -1,    -1,
      -1,   148,   149,   150,   151,   152,    -1,   154,   155,   156,
     157,   158,   159,    -1,    -1,    -1,   163,    -1,    -1,   166,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,  1817,    -1,
     257,  1820,   209,   210,   211,   212,   213,   214,    -1,    -1,
      -1,    -1,   219,   220,   221,   222,   223,   224,   225,   226,
      -1,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,  1868,
    1869,   258,  1871,    -1,    -1,   262,    -1,    -1,   265,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,   118,   119,   120,   121,    -1,    -1,   124,    -1,    -1,
      -1,    -1,     8,    -1,    -1,   132,   133,    -1,    -1,   136,
     137,    -1,   139,   140,    -1,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1936,  1937,    -1,
      -1,    -1,    -1,   160,    -1,   909,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,   186,
     187,   188,    -1,    -1,    -1,     3,     4,     5,   942,    -1,
      -1,    -1,    10,    11,    12,    -1,  1985,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    70,    71,    72,    73,   263,    -1,    76,    77,
      78,    79,    -1,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,
     108,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,   137,
      -1,   139,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
     148,   149,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,    -1,   166,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
      -1,   257,    -1,  1127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   209,   210,   211,   212,   213,   214,    -1,    -1,    -1,
      -1,   219,   220,   221,   222,   223,   224,   225,   226,    -1,
     228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
     258,    -1,    -1,  2232,   262,    -1,    -1,   265,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    10,    11,    12,    -1,  1222,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    13,    14,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,
      -1,    -1,   108,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,   118,   119,   120,   121,
    1384,  1385,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,    -1,    -1,   136,   137,    -1,   139,   140,    -1,
     142,    -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,
      -1,    -1,    -1,   209,   210,   211,   212,   213,   160,    -1,
      -1,     8,    -1,   219,   220,   221,   222,   223,   224,   225,
     226,    -1,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,    -1,    -1,    -1,   186,   187,   188,    -1,    -1,    -1,
     246,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,   255,
     256,    -1,   258,    -1,   260,    -1,    -1,    -1,   264,   265,
      -1,    -1,    -1,    -1,    -1,  1479,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,  1488,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,   137,    -1,   139,    -1,    -1,   142,    -1,    -1,
      -1,    -1,    -1,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,    -1,    -1,    -1,   163,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,  1651,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,   214,
      -1,    -1,    -1,    -1,   219,   220,   221,    -1,   223,   224,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,    -1,   258,     3,     4,    -1,   262,    -1,     8,
     265,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    94,    -1,    96,    -1,   143,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,   137,    -1,
     139,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,
     149,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
     159,    -1,    -1,    -1,   163,    -1,    -1,   166,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
     209,    -1,    -1,   257,   213,   214,    -1,    -1,    -1,    -1,
     219,   220,   221,    -1,   223,   224,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,   258,
       3,     4,     5,    -1,   263,    -1,   265,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,    -1,    96,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,   137,    -1,   139,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,   148,   149,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,   159,    -1,    -1,    -1,
     163,    -1,    -1,   166,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,   259,    -1,
     261,    -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
     213,   214,    -1,    -1,    -1,    -1,   219,   220,   221,    -1,
     223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,   258,     3,     4,    -1,   262,
      -1,    -1,   265,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
     137,    -1,   139,    -1,    -1,   142,    -1,    -1,    -1,    -1,
      -1,   148,   149,   150,   151,   152,    -1,   154,   155,   156,
     157,   158,   159,    -1,    -1,    -1,   163,    -1,    -1,   166,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,   259,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,   213,   214,    -1,    -1,
      -1,    -1,   219,   220,   221,    -1,   223,   224,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,
      -1,   258,     3,     4,    -1,   262,   263,    -1,   265,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,    96,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,
     121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,   137,    -1,   139,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,   159,    -1,
      -1,    -1,   163,    -1,    -1,   166,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,    -1,   213,   214,    -1,    -1,    -1,    -1,   219,   220,
     221,    -1,   223,   224,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,    -1,   258,     3,     4,
      -1,   262,    -1,    -1,   265,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,   137,    -1,   139,    -1,    -1,   142,    -1,    -1,
      -1,    -1,    -1,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,    -1,    -1,    -1,   163,    -1,
      -1,   166,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
     263,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,   214,
      -1,    -1,    -1,    -1,   219,   220,   221,    -1,   223,   224,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,    -1,   258,     3,     4,    -1,   262,    -1,    -1,
     265,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    94,    -1,    96,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,   137,    -1,
     139,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,
     149,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
     159,    -1,    -1,    -1,   163,    -1,    -1,   166,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,
     267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,    -1,    -1,    -1,   213,   214,    -1,    -1,    -1,    -1,
     219,   220,   221,    -1,   223,   224,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,   258,
       3,     4,    -1,   262,    -1,    -1,   265,    10,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,    -1,    96,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,   105,    -1,    -1,   108,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,   134,   135,    -1,   137,    -1,   139,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,   148,   149,   150,   151,   152,
      -1,   154,   155,   156,   157,   158,   159,    -1,    -1,    -1,
     163,    -1,    -1,   166,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,   263,    -1,    -1,    -1,   267,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
     213,   214,    -1,    -1,    -1,    -1,   219,   220,   221,    -1,
     223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,    -1,    -1,    -1,   258,     3,     4,    -1,    -1,
     263,    -1,   265,    10,    11,    12,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    -1,    -1,    -1,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    96,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
     137,    -1,   139,    -1,    -1,   142,    -1,    -1,    -1,    -1,
      -1,   148,   149,   150,   151,   152,    -1,   154,   155,   156,
     157,   158,   159,    -1,    -1,    -1,   163,    -1,    -1,   166,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,   213,   214,    -1,    -1,
      -1,    -1,   219,   220,   221,    -1,   223,   224,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,
      -1,   258,     3,     4,    -1,   262,    -1,    -1,   265,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,    96,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,
     121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,   137,    -1,   139,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,   159,    -1,
      -1,    -1,   163,    -1,    -1,   166,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,    -1,   213,   214,    -1,    -1,    -1,    -1,   219,   220,
     221,    -1,   223,   224,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,    -1,   258,     3,     4,
      -1,   262,    -1,    -1,   265,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,   137,    -1,   139,    -1,    -1,   142,    -1,    -1,
      -1,    -1,    -1,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,    -1,    -1,    -1,   163,    -1,
      -1,   166,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,   214,
      -1,    -1,    -1,    -1,   219,   220,   221,    -1,   223,   224,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,    -1,   258,     3,     4,    -1,   262,    -1,     8,
     265,    10,    11,    12,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      -1,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    94,    -1,    96,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,   108,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,   121,    -1,    -1,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,   137,    -1,
     139,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,
     149,   150,   151,   152,    -1,   154,   155,   156,   157,   158,
     159,    -1,    -1,    -1,   163,    -1,    -1,   166,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,    -1,    -1,    -1,   213,   214,    95,    -1,    -1,    98,
     219,   220,   221,    -1,   223,   224,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,    -1,
      -1,    -1,    -1,    -1,   253,     3,     4,    -1,    -1,   258,
       8,    -1,    10,    11,    12,    -1,   265,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      78,   210,   211,   212,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,   222,    -1,    93,    94,   226,    96,   228,
      -1,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,
     108,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,    -1,   121,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,   137,
      -1,   139,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
     148,   149,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,    -1,   166,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   209,    -1,    -1,    -1,   213,   214,    95,    -1,    -1,
      98,   219,   220,   221,    -1,   223,   224,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,
      -1,    -1,    -1,    -1,    -1,   253,     3,     4,    -1,    -1,
     258,    -1,    -1,    10,    11,    12,    -1,   265,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,   210,   211,   212,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,   222,    -1,    93,    94,   226,    96,
     228,    -1,    -1,    -1,    -1,   102,    -1,    -1,   105,    -1,
      -1,   108,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,
     137,    -1,   139,    -1,    -1,   142,    -1,    -1,    -1,    -1,
      -1,   148,   149,   150,   151,   152,    -1,   154,   155,   156,
     157,   158,   159,    -1,    -1,    -1,   163,    -1,    -1,   166,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,    -1,    -1,    -1,   213,   214,    -1,    -1,
      -1,    -1,   219,   220,   221,    -1,   223,   224,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,
      -1,   258,     3,     4,    -1,   262,    -1,    -1,   265,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,    96,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,   105,    -1,    -1,   108,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,
     121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,   137,    -1,   139,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,
     151,   152,    -1,   154,   155,   156,   157,   158,   159,    -1,
      -1,    -1,   163,    -1,    -1,   166,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,    -1,   213,   214,    -1,    -1,    -1,    -1,   219,   220,
     221,    -1,   223,   224,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,    -1,   258,     3,     4,
      -1,   262,    -1,    -1,   265,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,
      -1,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
     105,    -1,    -1,   108,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,   134,
     135,    -1,   137,    -1,   139,    -1,    -1,   142,    -1,    -1,
      -1,    -1,    -1,   148,   149,   150,   151,   152,    -1,   154,
     155,   156,   157,   158,   159,    -1,    -1,    -1,   163,    -1,
      -1,   166,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,   214,
      -1,    -1,    -1,    -1,   219,   220,   221,    -1,   223,   224,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,   247,    -1,    -1,    -1,    -1,    -1,   253,     3,
       4,     5,    -1,   258,    -1,    -1,    10,    11,    12,    -1,
     265,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    -1,    98,     3,     4,     5,    -1,    -1,
      -1,    -1,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,   210,   211,   212,   213,
      -1,    -1,    -1,    -1,    -1,   219,   220,   221,   222,   223,
     224,   225,   226,    -1,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   246,   247,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,
      -1,   265,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,    -1,
      -1,   219,   220,   221,   222,   223,   224,   225,   226,    -1,
     228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
     258,     3,     4,     5,   262,    -1,    -1,   265,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    -1,    98,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    11,    12,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,   210,   211,
     212,   213,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,
     222,   223,   224,   225,   226,    -1,   228,   229,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,   247,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,
     262,    -1,    -1,   265,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,
      -1,    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,
      -1,    -1,    -1,   219,   220,   221,   222,   223,   224,   225,
     226,    -1,   228,   229,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,   247,    -1,    -1,    -1,    -1,    -1,   253,     3,     4,
      -1,    -1,   258,    -1,    -1,    10,    11,    12,    -1,   265,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    66,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    93,    94,
      -1,    96,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    82,    83,    84,   118,   119,   120,
     121,    -1,    -1,   124,    -1,    93,    94,    -1,    96,    -1,
      -1,   132,   133,    -1,    -1,   136,   137,    -1,   139,   140,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,   160,
      -1,    -1,    -1,    -1,   219,   220,   221,    -1,   223,   224,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,   187,   188,    -1,    -1,
      -1,   246,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,    -1,   258,    -1,    -1,    -1,   262,    -1,    -1,
     265,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   209,    -1,   267,    -1,   213,    -1,    -1,    -1,    -1,
      -1,   219,   220,   221,    -1,   223,   224,   225,    -1,    -1,
      -1,   229,   263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
     258,     3,     4,    -1,   262,    -1,     8,   265,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    66,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    93,    94,    -1,    96,    10,    11,    12,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    66,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    82,    83,    84,
     118,   119,   120,   121,    -1,    -1,   124,    -1,    93,    94,
      -1,    96,    -1,    -1,   132,   133,    -1,    -1,   136,   137,
      -1,   139,   140,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,
      -1,   213,   160,    -1,    -1,    -1,    -1,   219,   220,   221,
      -1,   223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,   187,
     188,    -1,    -1,    -1,   246,   247,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,    -1,   265,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,    -1,   267,    -1,   213,    -1,
      -1,    -1,    -1,    -1,   219,   220,   221,    -1,   223,   224,
     225,    -1,    -1,    -1,   229,   263,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,   247,    -1,    -1,    -1,    -1,    -1,   253,     3,
       4,    -1,     6,   258,   259,    -1,    10,    11,    12,    -1,
     265,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      94,    -1,    96,     3,     4,    -1,     6,    -1,    -1,    -1,
      10,    11,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,   219,   220,   221,    -1,   223,
     224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   246,   247,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
      -1,   265,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,   209,
      -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,   219,
     220,   221,    -1,   223,   224,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   246,   247,    -1,    -1,
      -1,    -1,    -1,   253,     3,     4,    -1,     6,   258,    -1,
      -1,    10,    11,    12,    -1,   265,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    66,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    93,    94,    -1,    96,    10,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      82,    83,    84,   118,   119,   120,   121,    -1,    -1,   124,
      -1,    93,    94,    -1,    96,    -1,    -1,   132,   133,    -1,
      -1,   136,   137,    -1,   139,   140,    -1,   142,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,    -1,    -1,    -1,   213,   160,    -1,    -1,    -1,    -1,
     219,   220,   221,    -1,   223,   224,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,   187,   188,    -1,    -1,    -1,   246,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,    -1,   265,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,   267,
      -1,   213,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,
      -1,   223,   224,   225,    -1,    -1,    -1,   229,   263,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,   247,    -1,    -1,    -1,    -1,
      -1,   253,     3,     4,    -1,    -1,   258,   259,    -1,    10,
      11,    12,    -1,   265,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    66,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    93,    94,    -1,    96,    10,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    66,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    82,    83,
      84,   118,   119,   120,   121,    -1,    -1,   124,    -1,    93,
      94,    -1,    96,    -1,    -1,   132,   133,    -1,    -1,   136,
     137,    -1,   139,   140,    -1,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,    -1,   213,   160,    -1,    -1,    -1,    -1,   219,   220,
     221,    -1,   223,   224,   225,    -1,    -1,    -1,   229,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
     187,   188,    -1,    -1,    -1,   246,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,    -1,   258,   259,    -1,
      -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    14,    -1,    -1,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,   209,    -1,    -1,   257,   213,
      -1,    -1,    -1,    -1,    -1,   219,   220,   221,   267,   223,
     224,   225,    -1,    -1,    -1,   229,   263,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   246,   247,   118,   119,   120,   121,    -1,   253,
     124,    -1,    -1,    -1,   258,    -1,    -1,    -1,   132,   133,
      -1,   265,   136,   137,    -1,   139,   140,    -1,   142,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,    -1,   160,   118,   119,   120,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,    -1,    -1,   136,   137,    -1,   139,   140,
      -1,   142,   186,   187,   188,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,    -1,   186,   187,   188,    13,    14,
      -1,    -1,   267,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
     118,   119,   120,   121,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,   263,    -1,   132,   133,    -1,    -1,   136,   137,
      -1,   139,   140,    -1,   142,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,    -1,   160,   118,   119,   120,   121,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,
      -1,   136,   137,    -1,   139,   140,    -1,   142,   186,   187,
     188,    -1,    -1,     0,     1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    13,    14,    -1,    -1,
      -1,    -1,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,   186,   187,   188,   257,    -1,    -1,    -1,    -1,    46,
      47,    48,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,   263,    -1,    74,    75,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    -1,    91,    92,    -1,    94,    -1,    -1,
      -1,    -1,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   263,    -1,
     117,   118,   119,   120,   121,   122,    -1,   124,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,    -1,    -1,   144,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,    -1,    -1,    -1,   174,   175,   176,
      -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,   185,   186,
     187,   188,    -1,    -1,   191,    -1,   193,    -1,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,    -1,     4,    -1,    -1,    -1,    -1,   215,   216,
     217,   218,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,   229,   230,    -1,    -1,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    46,    47,    48,   257,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    -1,
      91,    92,    -1,    94,    -1,    -1,    -1,    -1,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,    -1,   117,   118,   119,   120,
     121,   122,    -1,   124,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,    -1,    -1,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
      -1,    -1,    -1,   174,   175,   176,    -1,    -1,    -1,   180,
      -1,    -1,    -1,    -1,   185,   186,   187,   188,     4,     5,
     191,    -1,   193,    -1,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,   229,   230,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    13,    14,    -1,    -1,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    98,    -1,    -1,    -1,   102,    -1,    -1,   105,
      -1,    -1,   108,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    13,
      14,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,    -1,    -1,   118,   119,   120,
     121,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,   133,    -1,    -1,   136,   137,    -1,   139,   140,
      -1,   142,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,    -1,   164,   210,   211,   212,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,
     226,    -1,   228,   229,    -1,   186,   187,   188,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,   118,   119,   120,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
      -1,    -1,   136,   137,    -1,   139,   140,    -1,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,
      -1,    -1,   186,   187,   188,    -1,    -1,    -1,    -1,   267,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   267,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   267,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     267,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   267,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   267,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   267,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     267,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   267,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   267,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,   263,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,   263,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,   263,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,   263,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,   263,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
      -1,   263,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
     263,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,   263,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,   263,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,   263,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,   263,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,   263,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
      -1,   263,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
     263,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,   263,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,    -1,   263,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,    -1,    -1,   263,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,   263,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
      -1,    -1,   263,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
      -1,   263,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
     263,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,   263,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,    -1,    -1,   263,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,
      -1,    -1,    -1,    -1,   262,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,    -1,   262,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
     262,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,    -1,   257,    -1,   259,    -1,   261,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,   261,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,   261,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,   261,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,   261,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,   261,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,
      -1,    -1,    -1,   261,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
     261,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,    -1,    -1,   257,    -1,    -1,    -1,   261,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,    -1,    -1,   261,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,
      -1,   261,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
      -1,   257,    -1,    -1,    -1,   261,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,    -1,    -1,    -1,    -1,   257,    -1,
      -1,    -1,   261,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,    -1,    -1,    -1,    -1,   257,    -1,   259,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,    -1,    -1,    -1,    -1,
     257
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   269,   270,     6,     0,     4,    13,    14,    46,
      47,    48,    67,    68,    69,    74,    75,    80,    85,    86,
      87,    88,    89,    91,    92,    94,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   117,   118,   119,   120,   121,   122,   124,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   144,   145,   146,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   174,   175,   176,   180,   185,   186,   187,   188,   191,
     193,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   215,   216,   217,   218,   227,
     229,   230,   271,   273,   274,   295,   314,   316,   320,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   338,   340,
     341,   347,   348,   349,   350,   356,   380,   381,   262,   266,
      14,   108,   258,   258,   258,     6,   262,     6,     6,     6,
       6,   258,     6,   262,     6,   262,   262,     6,     6,   260,
     260,     4,   358,   381,   258,   260,   292,   102,   105,   108,
     110,   316,   292,   258,   258,   258,     4,   258,   258,   258,
       4,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   262,   123,   108,     6,     6,   262,   102,   105,
     108,   121,   319,   110,   258,     3,    10,    11,    12,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      58,    59,    60,    61,    66,    67,    76,    77,    78,    82,
      83,    84,    93,    96,   102,   105,   108,   110,   121,   132,
     137,   139,   142,   209,   213,   214,   219,   220,   221,   223,
     224,   225,   246,   247,   253,   258,   262,   265,   316,   317,
     320,   331,   338,   340,   351,   352,   356,   358,   364,   366,
     381,   258,   262,   262,   108,   108,   132,   105,   108,   110,
     316,   105,   108,   109,   110,   121,   186,   317,   105,   108,
     258,   105,   164,   191,   207,   208,   262,   246,   247,   258,
     262,   361,   362,   361,   262,   262,   361,     4,   102,   106,
     112,   113,   115,   116,   136,   262,   258,   108,   110,   108,
     105,     4,    94,   202,   262,   381,     4,     6,   102,   105,
     108,   105,   108,   121,   318,     5,   258,   262,   364,   365,
     108,     4,     4,     4,   365,     4,   108,   258,   108,   258,
     258,     4,   262,   368,   381,     4,   258,   258,   258,     6,
       6,   260,     5,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    62,    63,    64,    65,    70,    71,    72,    73,
      79,    81,    95,    98,   210,   211,   212,   222,   226,   228,
     372,   381,   258,     4,   372,     5,   262,     5,   262,   316,
      32,   247,   351,   381,   260,     6,   262,   258,   262,     6,
     258,   262,     6,   266,     7,   139,   202,   231,   232,   233,
     234,   255,   256,   258,   260,   264,   290,   291,   292,   316,
     351,   371,   372,   381,     4,   320,   321,   322,   262,     6,
     351,   371,   372,   381,   371,   371,   351,   371,   378,   379,
     381,   351,   322,   351,   297,   301,   258,   360,     9,   372,
     258,   381,   351,   351,   351,   258,   351,   351,   351,   258,
     351,   351,   351,   351,   351,   351,   351,   371,   351,   351,
     351,   351,   365,   258,   247,   351,   366,   367,   262,   365,
     364,   371,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   258,   260,   292,
     292,   292,   292,   292,   292,   258,   292,   292,   258,   316,
     317,   317,   317,   292,   292,     5,   262,   262,   132,   316,
     316,   258,   292,   292,   258,   258,   258,   351,   262,   351,
     366,   351,   351,   263,   367,   358,   381,   194,     5,   262,
       8,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   257,
       9,   258,   260,   264,   291,   292,   351,   367,   367,   258,
     258,   258,   364,   365,   365,   365,   315,   258,   262,   258,
     258,   364,   262,   262,   351,     4,   364,   262,   368,   262,
     262,   361,   361,   361,   351,   351,   246,   247,   262,   262,
     361,   246,   247,   258,   322,   361,   262,   258,   262,   258,
     258,   258,   258,   258,   258,   258,   367,   351,   365,   365,
     365,   258,   262,     4,   260,   262,     6,   260,   322,     6,
       6,   262,   262,   262,   262,   365,   351,     8,     7,   262,
     260,   260,   260,     6,     6,   258,   351,   258,   351,   351,
     264,   351,   262,   194,   351,   351,   351,   351,   292,   292,
     292,   258,   258,   258,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   258,   258,   292,   258,   260,     6,
       6,   262,     6,     8,   322,     6,     8,   322,   258,   292,
     351,   248,   262,     9,   258,   260,   264,   371,   367,   351,
     322,   364,   364,   262,   372,   316,     7,   351,   351,     4,
      36,    37,   111,   112,   191,   192,   294,   364,     6,   259,
     261,   262,   293,   262,     6,   262,     6,     9,   258,   260,
     264,   381,   263,   132,   137,   139,   140,   142,   314,   316,
     351,     6,   259,   267,     9,   258,   260,   264,   259,   267,
     259,   267,   267,   259,   267,     9,   258,   264,   267,   263,
     267,   261,   267,   296,   261,   296,    97,   359,   357,   381,
     267,   351,   267,   259,   259,   259,   351,   259,   259,   259,
     351,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   263,     7,   351,   248,   263,   267,   351,     6,
       6,   259,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   366,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   366,
     366,   381,   262,   351,   351,   371,   351,   371,   364,   371,
     371,   378,   262,   262,   262,   262,   351,   293,   381,     8,
     351,   351,   365,   364,   371,   371,   366,   358,   372,   358,
     367,   259,   263,   264,   292,    67,     8,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   262,   351,   366,   351,   351,   351,   351,   351,   381,
     351,   351,   294,   262,   293,   259,   263,   263,   351,   351,
     351,     7,     7,   344,   344,   258,   351,   351,   351,   351,
       6,   167,   367,   367,   262,   259,     6,   322,   262,   322,
     322,   267,   267,   267,   361,   361,   321,   321,   267,   351,
     263,   335,   267,   322,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   263,   259,     7,   345,     6,     7,   351,
     351,     6,   351,   322,   351,   263,   367,   367,   367,   351,
       6,   259,   263,   351,   367,   351,   351,   351,   351,   259,
     351,   259,   259,   191,   267,   322,   262,     8,   259,   259,
     261,   378,   371,   378,   371,   371,   371,   371,   371,   371,
     351,   371,   371,   371,   371,   265,   374,   381,   372,   371,
     371,   371,   358,   381,   367,   263,   263,   263,   263,   351,
     351,   351,   322,   381,   294,   261,   263,   259,   146,   164,
     339,   259,   263,   267,   351,     6,   262,   364,   259,   261,
     264,     7,     7,   290,   291,     6,   367,     7,   234,   290,
     351,   275,   381,   351,   351,   294,   260,   258,   132,   316,
     317,   316,   262,   263,     6,   241,   242,   272,   367,   381,
     351,   351,   294,     6,   367,     6,   367,   351,     6,   371,
     379,   381,   259,   294,   351,   351,     6,   381,     6,   371,
     351,   259,   260,   351,   267,   372,     7,     7,     7,   259,
       7,     7,     7,   259,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,   351,   259,   262,   351,   366,   263,
       6,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   267,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   267,   267,   267,   267,   267,   259,   261,   261,
     367,   267,   267,   293,   267,   293,   267,   267,   267,   259,
     367,   351,   351,   351,   353,   293,   263,   263,   263,   267,
     267,   293,   293,   259,   264,   259,   264,   267,   292,   354,
     263,     7,   294,   293,   364,   263,     8,     8,   367,   264,
     259,   261,   258,   260,   291,   292,   367,     7,   262,   262,
     259,   259,   259,   351,   364,     4,   343,     6,   310,   351,
     372,   259,   263,   259,   259,   351,   263,   263,   367,   264,
     263,   322,   263,   263,   361,   351,   351,   263,   263,   351,
     361,   143,   143,   161,   171,   172,   173,   177,   178,   336,
     337,   361,   263,   332,   259,   263,   259,   259,   259,   259,
     259,   259,   259,   262,     7,   351,     6,   351,   259,   263,
     261,   263,   261,   263,   263,   263,   263,     6,   263,   261,
     261,   267,   259,     7,   259,     7,     7,   264,   351,   263,
     351,   351,     7,   264,   293,   267,   293,   293,   259,   259,
     267,   293,   293,   267,   267,   293,   293,   293,   293,   351,
     293,     9,   373,   267,   259,   267,   293,   264,   267,   355,
     261,   263,   259,   263,   264,   258,   260,   266,   194,     7,
     164,     6,   351,   263,   262,     6,   364,   263,   351,     6,
       7,   290,   291,   264,   290,   291,   294,   262,   369,   381,
     372,   351,     6,   263,    49,    49,   364,   263,     4,   181,
     182,   183,   184,   263,   278,   282,   285,   287,   288,   330,
     264,   259,   261,   258,   351,   351,   258,   262,   258,   262,
       8,   367,   371,   259,   264,   259,   261,   258,   259,   259,
     267,   264,   258,   263,   267,     7,   292,     4,    36,    37,
     304,   305,   306,   293,   351,   293,   361,   364,   364,     7,
     364,   364,   364,     7,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,     6,     7,   367,   351,   351,   351,
     351,   351,   351,   263,   351,   351,   351,   364,   371,   371,
     263,   263,   263,   263,   267,   303,   351,   351,   294,   294,
     351,   351,   259,   364,   292,   351,   351,   263,   294,   291,
     264,   291,   351,   351,   293,   263,   364,   367,   367,     7,
       7,     7,   143,   342,     6,   259,   267,     7,     7,     7,
       6,     7,     7,   263,     4,   294,   263,   267,   267,   267,
     263,   263,   120,     4,     6,   351,   262,     6,   258,     6,
     179,     6,   179,   263,   337,   267,   336,     7,     6,     7,
       7,     7,     7,     7,     7,     7,   321,   364,     6,   262,
     102,     6,     6,     6,   108,     7,     7,     6,     6,   351,
       7,   364,     7,   364,   364,     4,   267,     8,     8,   259,
     294,   294,   367,   371,   351,   371,   265,   267,   307,   371,
     371,   294,   371,   259,   267,     6,   294,   262,   316,   262,
       6,   351,     6,   262,   364,   263,   263,   351,     6,   191,
     192,   294,   351,     6,     7,   368,   370,     6,   260,     6,
       6,   293,   292,   292,     6,   279,   258,   258,   262,   289,
       6,   294,   264,   371,   351,   261,   259,   351,     8,   367,
     351,   367,   263,   263,     6,     6,   272,   294,   264,   351,
       6,     6,   351,   294,   259,     6,   351,   262,   351,   372,
     293,    49,   262,   364,   372,   375,   351,   351,   261,   267,
       6,   259,     6,     6,   136,   312,   312,   364,     6,     6,
       6,   364,   143,   194,   311,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     5,   263,   293,   293,   293,   293,
     293,   293,   293,   267,   267,   267,   259,   293,   293,   305,
     293,   259,   293,   259,   292,   354,   293,     6,   293,   258,
     260,   292,   294,   259,   261,   293,     6,   263,   263,   364,
     364,   364,     4,     6,   290,   351,   364,   364,   364,   262,
     262,     7,     6,     7,   351,   351,   351,   262,   262,   262,
     260,     6,   351,   364,   351,     6,     6,   351,   361,   263,
       5,   364,   262,   262,   262,   262,   262,   262,   262,   364,
     263,     6,   367,   262,   262,   351,   351,   261,   364,     6,
     364,     6,   190,   351,   351,   351,     6,     6,     7,   293,
     267,   267,   293,   267,   351,     4,   206,   308,   309,   293,
     259,   293,   355,   372,   258,   260,   351,   262,   322,     6,
     322,   267,     6,     6,   264,     7,     7,   290,   291,     6,
     368,   263,   267,   351,   290,   262,   293,   376,   377,   378,
     376,   258,   351,   351,   363,   364,   262,   258,     4,     6,
     259,     6,   259,   263,   263,   259,   263,     6,     6,   371,
     258,     4,   259,   267,   258,   263,   267,   364,   372,     7,
     292,   302,   351,   366,   306,     6,   361,     6,     6,     6,
     143,   313,   102,   121,   106,     6,     5,   262,   351,   351,
     351,   351,   259,   354,   351,   351,   293,   291,   262,   262,
       6,   311,     6,   351,   364,   143,   143,     4,     6,   367,
     367,   351,   351,   372,   263,   259,   263,   267,   321,   321,
     351,   351,   263,   267,   259,   263,   267,     6,     6,   363,
     361,   361,   361,   361,   361,   247,   361,     6,   263,   367,
     351,     6,     6,     6,     6,     6,   364,   263,   267,     8,
     263,   259,   262,   351,   372,   371,   351,   371,   351,   372,
     375,   377,   372,   267,   259,   267,   263,   351,   339,   339,
     364,   294,   369,   372,   351,     6,     6,   368,   261,   364,
     378,     6,   293,   293,   276,   351,   267,   267,   263,   267,
     277,   351,   351,     6,     6,     6,     6,   351,   351,   259,
       6,   351,   298,   300,   262,   377,   263,   267,     7,     7,
     147,     6,   262,   262,   262,     5,   363,   293,   293,   267,
     293,   259,   259,   261,   367,   367,     6,     6,   351,   351,
     262,   263,   263,   262,     6,     6,   262,   351,   263,   263,
     263,   261,     6,   364,     7,   262,   351,   263,   267,   267,
     267,   267,   267,   267,     6,   263,   263,   189,   351,   351,
     367,     6,     6,   259,   293,   293,   309,   372,   263,   263,
     263,   263,     7,     6,     6,     6,   264,     6,   263,     6,
       6,   259,   267,   351,   351,   262,   364,   263,   267,   259,
     259,   267,   263,   303,   307,   364,   293,   351,   372,   381,
     367,   367,   351,     6,   263,   351,   354,   263,   263,     6,
       6,   363,   148,   149,   154,   346,   148,   149,   346,   367,
     321,   263,   267,     6,   263,   364,   322,   263,     6,   367,
     361,   361,   361,   361,   361,     6,   351,   263,   263,   263,
     259,     6,   262,     6,   368,   192,   280,   351,   267,   267,
     363,     6,   351,   351,     6,   263,   263,   299,     7,   258,
     263,   263,   263,   262,   267,   259,   262,   263,   262,   361,
     364,     6,   262,   361,     6,   263,   263,   351,     6,   143,
     263,   333,   262,   263,   267,   267,   267,   267,   267,     6,
       6,     6,   322,     6,   262,   351,   351,   263,   267,   303,
     372,   259,   351,   351,   367,     6,   361,     6,   361,     6,
       6,   263,   351,   336,   322,     6,   367,   367,   367,   367,
     361,   367,   339,   277,   259,   267,     6,   262,   351,   263,
     267,   267,   263,   267,   267,     6,   263,   263,   334,   263,
     263,   263,   263,   267,   263,   263,   263,   283,   351,   363,
     263,   351,   351,   361,   361,   336,     6,     6,     6,     6,
     367,     6,     6,     6,   262,   259,   263,     6,   263,   293,
     267,   267,   263,   263,   281,   371,   286,   262,     6,   351,
     351,     6,   263,   267,   262,   363,   263,   263,     6,   371,
     284,   371,   263,     6,     6,   263,   267,     6,     6,   371
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 276 "Gmsh.y"
    { yyerrok; return 1; ;}
    break;

  case 6:
#line 287 "Gmsh.y"
    { return 1; ;}
    break;

  case 7:
#line 288 "Gmsh.y"
    { return 1; ;}
    break;

  case 8:
#line 289 "Gmsh.y"
    { return 1; ;}
    break;

  case 9:
#line 291 "Gmsh.y"
    {
      // synchronize with GModel before switching kernel
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      gmsh_yyfactory = (yyvsp[(3) - (5)].c);
      if(gmsh_yyfactory == "OpenCASCADE"){
        if(!GModel::current()->getOCCInternals())
          GModel::current()->createOCCInternals();
        for(int dim = -2; dim <= 3; dim++)
          GModel::current()->getOCCInternals()->setMaxTag
            (dim, std::max(GModel::current()->getOCCInternals()->getMaxTag(dim),
                           GModel::current()->getGEOInternals()->getMaxTag(dim)));
      }
      else {
        if(gmsh_yyfactory != "Built-in" && gmsh_yyfactory != "Gmsh")
          yymsg(1, "Unknown factory \"%s\" - using \"Built-in\" instead", (yyvsp[(3) - (5)].c));
        if(GModel::current()->getOCCInternals()){
          for(int dim = -2; dim <= 3; dim++)
            GModel::current()->getGEOInternals()->setMaxTag
              (dim, std::max(GModel::current()->getGEOInternals()->getMaxTag(dim),
                             GModel::current()->getOCCInternals()->getMaxTag(dim)));
        }
      }
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 10:
#line 319 "Gmsh.y"
    { return 1; ;}
    break;

  case 11:
#line 320 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 12:
#line 321 "Gmsh.y"
    { return 1; ;}
    break;

  case 13:
#line 322 "Gmsh.y"
    { return 1; ;}
    break;

  case 14:
#line 323 "Gmsh.y"
    { return 1; ;}
    break;

  case 15:
#line 324 "Gmsh.y"
    { return 1; ;}
    break;

  case 16:
#line 325 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 17:
#line 326 "Gmsh.y"
    { List_Delete((yyvsp[(1) - (1)].l)); return 1; ;}
    break;

  case 18:
#line 327 "Gmsh.y"
    { return 1; ;}
    break;

  case 19:
#line 328 "Gmsh.y"
    { return 1; ;}
    break;

  case 20:
#line 329 "Gmsh.y"
    { return 1; ;}
    break;

  case 21:
#line 330 "Gmsh.y"
    { return 1; ;}
    break;

  case 22:
#line 331 "Gmsh.y"
    { return 1; ;}
    break;

  case 23:
#line 332 "Gmsh.y"
    { return 1; ;}
    break;

  case 24:
#line 333 "Gmsh.y"
    { return 1; ;}
    break;

  case 25:
#line 334 "Gmsh.y"
    { return 1; ;}
    break;

  case 26:
#line 339 "Gmsh.y"
    {
      (yyval.c) = (char*)"w";
    ;}
    break;

  case 27:
#line 343 "Gmsh.y"
    {
      (yyval.c) = (char*)"a";
    ;}
    break;

  case 28:
#line 350 "Gmsh.y"
    {
      Msg::Direct((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 29:
#line 355 "Gmsh.y"
    {
      Msg::Warning((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 30:
#line 360 "Gmsh.y"
    {
      Msg::Error((yyvsp[(3) - (5)].c));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 31:
#line 365 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(6) - (7)].c));
      FILE *fp = Fopen(tmp.c_str(), (yyvsp[(5) - (7)].c));
      if(!fp){
	yymsg(0, "Unable to open file '%s'", tmp.c_str());
      }
      else{
	fprintf(fp, "%s\n", (yyvsp[(3) - (7)].c));
	fclose(fp);
      }
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 32:
#line 379 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Printf");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Printf", i, (i > 1) ? "s" : "");
      else
	Msg::Direct(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 33:
#line 392 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(1, "Too few arguments in Error");
      else if(i > 0)
	yymsg(1, "%d extra argument%s in Error", i, (i > 1) ? "s" : "");
      else
	Msg::Warning(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 34:
#line 405 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Error");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Error", i, (i > 1) ? "s" : "");
      else
	Msg::Error(tmpstring);
      Free((yyvsp[(3) - (7)].c));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 35:
#line 418 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (9)].c), (yyvsp[(5) - (9)].l), tmpstring);
      if(i < 0)
	yymsg(0, "Too few arguments in Printf");
      else if(i > 0)
	yymsg(0, "%d extra argument%s in Printf", i, (i > 1) ? "s" : "");
      else{
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(8) - (9)].c));
	FILE *fp = Fopen(tmp.c_str(), (yyvsp[(7) - (9)].c));
	if(!fp){
	  yymsg(0, "Unable to open file '%s'", tmp.c_str());
	}
	else{
	  fprintf(fp, "%s\n", tmpstring);
	  fclose(fp);
	}
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(8) - (9)].c));
      List_Delete((yyvsp[(5) - (9)].l));
    ;}
    break;

  case 36:
#line 446 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(1) - (6)].c), "View") && ViewData->finalize()){
	ViewData->setName((yyvsp[(2) - (6)].c));
	ViewData->setFileName(gmsh_yyname);
	ViewData->setFileIndex(gmsh_yyviewindex++);
	new PView(ViewData);
      }
      else
	delete ViewData;
#endif
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 37:
#line 460 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  new PView(PView::list[index], false);
        else
	  yymsg(0, "Unknown view %d", index);
      }
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 38:
#line 473 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  new PView(PView::list[index], true);
        else
	  yymsg(0, "Unknown view %d", index);
      }
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 39:
#line 486 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (8)].c), "View")){
	int index = (int)(yyvsp[(4) - (8)].d), index2 = (int)(yyvsp[(6) - (8)].d);
	if(index >= 0 && index < (int)PView::list.size() &&
           index2 >= 0 && index2 < (int)PView::list.size()){
          PView::list[index2]->setOptions(PView::list[index]->getOptions());
        }
        else
	  yymsg(0, "Unknown view %d or %d", index, index2);
      }
#endif
      Free((yyvsp[(2) - (8)].c));
    ;}
    break;

  case 40:
#line 504 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData = new PViewDataList();
#endif
    ;}
    break;

  case 47:
#line 519 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 48:
#line 521 "Gmsh.y"
    { ViewCoord.push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 49:
#line 526 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(1) - (1)].d)); ;}
    break;

  case 50:
#line 528 "Gmsh.y"
    { if(ViewValueList) ViewValueList->push_back((yyvsp[(3) - (3)].d)); ;}
    break;

  case 51:
#line 533 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strncmp((yyvsp[(1) - (1)].c), "SP", 2)){
	ViewValueList = &ViewData->SP; ViewNumList = &ViewData->NbSP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VP", 2)){
	ViewValueList = &ViewData->VP; ViewNumList = &ViewData->NbVP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TP", 2)){
	ViewValueList = &ViewData->TP; ViewNumList = &ViewData->NbTP;
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SL", 2)){
	ViewValueList = &ViewData->SL; ViewNumList = &ViewData->NbSL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VL", 2)){
	ViewValueList = &ViewData->VL; ViewNumList = &ViewData->NbVL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TL", 2)){
	ViewValueList = &ViewData->TL; ViewNumList = &ViewData->NbTL;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_LIN);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "ST", 2)){
	ViewValueList = &ViewData->ST; ViewNumList = &ViewData->NbST;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VT", 2)){
	ViewValueList = &ViewData->VT; ViewNumList = &ViewData->NbVT;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TT", 2)){
	ViewValueList = &ViewData->TT; ViewNumList = &ViewData->NbTT;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SQ", 2)){
	ViewValueList = &ViewData->SQ; ViewNumList = &ViewData->NbSQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VQ", 2)){
	ViewValueList = &ViewData->VQ; ViewNumList = &ViewData->NbVQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TQ", 2)){
	ViewValueList = &ViewData->TQ; ViewNumList = &ViewData->NbTQ;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_QUA);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SS", 2)){
	ViewValueList = &ViewData->SS; ViewNumList = &ViewData->NbSS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VS", 2)){
	ViewValueList = &ViewData->VS; ViewNumList = &ViewData->NbVS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TS", 2)){
	ViewValueList = &ViewData->TS; ViewNumList = &ViewData->NbTS;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_TET);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SH", 2)){
	ViewValueList = &ViewData->SH; ViewNumList = &ViewData->NbSH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VH", 2)){
	ViewValueList = &ViewData->VH; ViewNumList = &ViewData->NbVH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TH", 2)){
	ViewValueList = &ViewData->TH; ViewNumList = &ViewData->NbTH;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_HEX);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SI", 2)){
	ViewValueList = &ViewData->SI; ViewNumList = &ViewData->NbSI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VI", 2)){
	ViewValueList = &ViewData->VI; ViewNumList = &ViewData->NbVI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TI", 2)){
	ViewValueList = &ViewData->TI; ViewNumList = &ViewData->NbTI;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PRI);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "SY", 2)){
	ViewValueList = &ViewData->SY; ViewNumList = &ViewData->NbSY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "VY", 2)){
	ViewValueList = &ViewData->VY; ViewNumList = &ViewData->NbVY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else if(!strncmp((yyvsp[(1) - (1)].c), "TY", 2)){
	ViewValueList = &ViewData->TY; ViewNumList = &ViewData->NbTY;
        if(strlen((yyvsp[(1) - (1)].c)) > 2) ViewData->setOrder2(TYPE_PYR);
      }
      else{
	yymsg(0, "Unknown element type '%s'", (yyvsp[(1) - (1)].c));
	ViewValueList = 0; ViewNumList = 0;
      }
#endif
      ViewCoord.clear();
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 52:
#line 637 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList){
	for(int i = 0; i < 3; i++)
	  for(std::size_t j = 0; j < ViewCoord.size() / 3; j++)
	    ViewValueList->push_back(ViewCoord[3 * j + i]);
      }
#endif
    ;}
    break;

  case 53:
#line 647 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(ViewValueList) (*ViewNumList)++;
#endif
    ;}
    break;

  case 54:
#line 656 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 55:
#line 663 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T2C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 56:
#line 673 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T2D.push_back((yyvsp[(3) - (8)].d));
      ViewData->T2D.push_back((yyvsp[(5) - (8)].d));
      ViewData->T2D.push_back((yyvsp[(7) - (8)].d));
      ViewData->T2D.push_back(ViewData->T2C.size());
#endif
    ;}
    break;

  case 57:
#line 682 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT2++;
#endif
    ;}
    break;

  case 58:
#line 691 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(1) - (1)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(1) - (1)].c)[i]);
#endif
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 59:
#line 698 "Gmsh.y"
    {
#if defined(HAVE_POST)
      for(int i = 0; i < (int)strlen((yyvsp[(3) - (3)].c)) + 1; i++) ViewData->T3C.push_back((yyvsp[(3) - (3)].c)[i]);
#endif
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 60:
#line 708 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->T3D.push_back((yyvsp[(3) - (10)].d)); ViewData->T3D.push_back((yyvsp[(5) - (10)].d));
      ViewData->T3D.push_back((yyvsp[(7) - (10)].d)); ViewData->T3D.push_back((yyvsp[(9) - (10)].d));
      ViewData->T3D.push_back(ViewData->T3C.size());
#endif
    ;}
    break;

  case 61:
#line 716 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewData->NbT3++;
#endif
    ;}
    break;

  case 62:
#line 726 "Gmsh.y"
    {
#if defined(HAVE_POST)
      int type =
	(ViewData->NbSL || ViewData->NbVL) ? TYPE_LIN :
	(ViewData->NbST || ViewData->NbVT) ? TYPE_TRI :
	(ViewData->NbSQ || ViewData->NbVQ) ? TYPE_QUA :
	(ViewData->NbSS || ViewData->NbVS) ? TYPE_TET :
	(ViewData->NbSY || ViewData->NbVY) ? TYPE_PYR :
	(ViewData->NbSI || ViewData->NbVI) ? TYPE_PRI :
      	(ViewData->NbSH || ViewData->NbVH) ? TYPE_HEX :
	0;
      ViewData->setInterpolationMatrices(type, ListOfListOfDouble2Matrix((yyvsp[(3) - (8)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(6) - (8)].l)));
#endif
    ;}
    break;

  case 63:
#line 745 "Gmsh.y"
    {
#if defined(HAVE_POST)
      int type =
	(ViewData->NbSL || ViewData->NbVL) ? TYPE_LIN :
	(ViewData->NbST || ViewData->NbVT) ? TYPE_TRI :
	(ViewData->NbSQ || ViewData->NbVQ) ? TYPE_QUA :
	(ViewData->NbSS || ViewData->NbVS) ? TYPE_TET :
      	(ViewData->NbSH || ViewData->NbVH) ? TYPE_HEX :
	0;
      ViewData->setInterpolationMatrices(type, ListOfListOfDouble2Matrix((yyvsp[(3) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(6) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(9) - (14)].l)),
                                         ListOfListOfDouble2Matrix((yyvsp[(12) - (14)].l)));
#endif
    ;}
    break;

  case 64:
#line 764 "Gmsh.y"
    {
#if defined(HAVE_POST)
      ViewValueList = &ViewData->Time;
#endif
    ;}
    break;

  case 65:
#line 770 "Gmsh.y"
    {
    ;}
    break;

  case 66:
#line 777 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 67:
#line 778 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 68:
#line 779 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 69:
#line 780 "Gmsh.y"
    { (yyval.i) = 3; ;}
    break;

  case 70:
#line 781 "Gmsh.y"
    { (yyval.i) = 4; ;}
    break;

  case 71:
#line 785 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 72:
#line 786 "Gmsh.y"
    { (yyval.i) = -1; ;}
    break;

  case 73:
#line 792 "Gmsh.y"
    { (yyval.c) = (char*)"("; ;}
    break;

  case 74:
#line 792 "Gmsh.y"
    { (yyval.c) = (char*)"["; ;}
    break;

  case 75:
#line 794 "Gmsh.y"
    { (yyval.c) = (char*)")"; ;}
    break;

  case 76:
#line 794 "Gmsh.y"
    { (yyval.c) = (char*)"]"; ;}
    break;

  case 77:
#line 799 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 78:
#line 800 "Gmsh.y"
    { (yyval.c) = (char *)Malloc(4 * sizeof(char)); strcpy((yyval.c), "Min"); ;}
    break;

  case 79:
#line 801 "Gmsh.y"
    { (yyval.c) = (char *)Malloc(4 * sizeof(char)); strcpy((yyval.c), "Max"); ;}
    break;

  case 80:
#line 802 "Gmsh.y"
    { (yyval.c) = (char *)Malloc(4 * sizeof(char)); strcpy((yyval.c), "Box"); ;}
    break;

  case 81:
#line 803 "Gmsh.y"
    { (yyval.c) = (char *)Malloc(9 * sizeof(char)); strcpy((yyval.c), "Cylinder"); ;}
    break;

  case 85:
#line 813 "Gmsh.y"
    {
      Msg::SetOnelabNumber((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].d));
      Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 86:
#line 818 "Gmsh.y"
    {
      Msg::SetOnelabString((yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].c));
      Free((yyvsp[(3) - (7)].c));
      Free((yyvsp[(5) - (7)].c));
    ;}
    break;

  case 87:
#line 824 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (4)].c)) && (yyvsp[(2) - (4)].i) && List_Nbr((yyvsp[(3) - (4)].l)) == 1){
        yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (4)].c));
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (4)].c)]);
        if(!(yyvsp[(2) - (4)].i)) s.list = (List_Nbr((yyvsp[(3) - (4)].l)) != 1); // list if 0 or > 1 elements
        if(!s.list){ // single expression
          if(List_Nbr((yyvsp[(3) - (4)].l)) != 1){
            yymsg(0, "Cannot assign list to variable '%s'", (yyvsp[(1) - (4)].c));
          }
          else{
            double d;
            List_Read((yyvsp[(3) - (4)].l), 0, &d);
            if(s.value.empty()){
              if((yyvsp[(2) - (4)].i)) yymsg(1, "Uninitialized variable '%s'", (yyvsp[(1) - (4)].c));
              s.value.resize(1, 0.);
            }
            switch((yyvsp[(2) - (4)].i)){
            case 0 : s.value[0] = d; break;
            case 1 : s.value[0] += d; break;
            case 2 : s.value[0] -= d; break;
            case 3 : s.value[0] *= d; break;
            case 4 :
              if(d) s.value[0] /= d;
              else yymsg(0, "Division by zero in '%s /= %g'", (yyvsp[(1) - (4)].c), d);
              break;
            }
          }
        }
        else{
          // list of expressions; this is not recommended (should use [] or ()
          // notation instead)
          switch((yyvsp[(2) - (4)].i)){
          case 0: // affect
            s.value.clear(); // fall-through
          case 1: // append
            for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
              double d;
              List_Read((yyvsp[(3) - (4)].l), i, &d);
              s.value.push_back(d);
            }
            break;
          case 2: // remove
            for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
              double d;
              List_Read((yyvsp[(3) - (4)].l), i, &d);
              auto it = std::find(s.value.begin(), s.value.end(), d);
              if(it != s.value.end()) s.value.erase(it);
            }
            break;
          default:
            yymsg(0, "Operators *= and /= not available for lists");
            break;
          }
        }
      }
      Free((yyvsp[(1) - (4)].c));
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 88:
#line 885 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
        if(!s.list && s.value.empty())
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (3)].c));
        else if(!s.list)
          s.value[0] += (yyvsp[(2) - (3)].i);
        else
          yymsg(0, "Variable '%s' is a list", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 89:
#line 900 "Gmsh.y"
    {
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
      s.list = true;
      double d;
      switch((yyvsp[(4) - (6)].i)){
      case 0: // affect
        s.value.clear(); // fall-through
      case 1: // append
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          s.value.push_back(d);
        }
        break;
      case 2: // remove
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (6)].l)); i++){
          List_Read((yyvsp[(5) - (6)].l), i, &d);
          auto it = std::find(s.value.begin(), s.value.end(), d);
          if(it != s.value.end()) s.value.erase(it);
        }
        break;
      default:
        yymsg(0, "Operators *= and /= not available for lists");
        break;
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 90:
#line 928 "Gmsh.y"
    {
      assignVariables((yyvsp[(1) - (9)].c), (yyvsp[(4) - (9)].l), (yyvsp[(7) - (9)].i), (yyvsp[(8) - (9)].l));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(4) - (9)].l));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 91:
#line 938 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 92:
#line 943 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 93:
#line 951 "Gmsh.y"
    {
      assignVariable((yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(5) - (7)].i), (yyvsp[(6) - (7)].d));
      Free((yyvsp[(1) - (7)].c));
    ;}
    break;

  case 94:
#line 956 "Gmsh.y"
    {
      incrementVariable((yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].i));
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 95:
#line 964 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)] = std::vector<std::string>(1, (yyvsp[(3) - (4)].c));
      Free((yyvsp[(1) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 96:
#line 973 "Gmsh.y"
    {
      gmsh_yystringsymbols[(yyvsp[(1) - (8)].c)] = std::vector<std::string>();
      Free((yyvsp[(1) - (8)].c));
    ;}
    break;

  case 97:
#line 978 "Gmsh.y"
    {
      std::vector<std::string> s;
      for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
        char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
        s.push_back(*c);
        Free(*c);
      }
      gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)] = s;
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 98:
#line 990 "Gmsh.y"
    {
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (9)].c))){
        for(int i = 0; i < List_Nbr((yyvsp[(7) - (9)].l)); i++){
          char **c = (char**)List_Pointer((yyvsp[(7) - (9)].l), i);
          gmsh_yystringsymbols[(yyvsp[(1) - (9)].c)].push_back(*c);
          Free(*c);
        }
      }
      else
        yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (9)].c));
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 99:
#line 1007 "Gmsh.y"
    {
      std::string tmp((yyvsp[(5) - (6)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), tmp);
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 100:
#line 1013 "Gmsh.y"
    {
      std::string tmp((yyvsp[(8) - (9)].c));
      StringOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), tmp);
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 101:
#line 1022 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), d)){
	switch((yyvsp[(4) - (6)].i)){
	case 0 : d = (yyvsp[(5) - (6)].d); break;
	case 1 : d += (yyvsp[(5) - (6)].d); break;
	case 2 : d -= (yyvsp[(5) - (6)].d); break;
	case 3 : d *= (yyvsp[(5) - (6)].d); break;
	case 4 :
	  if((yyvsp[(5) - (6)].d)) d /= (yyvsp[(5) - (6)].d);
	  else yymsg(0, "Division by zero in '%s.%s /= %g'", (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
	  break;
	}
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (6)].c), 0, (yyvsp[(3) - (6)].c), d);
      }
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 102:
#line 1040 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), d)){
	switch((yyvsp[(7) - (9)].i)){
	case 0 : d = (yyvsp[(8) - (9)].d); break;
	case 1 : d += (yyvsp[(8) - (9)].d); break;
	case 2 : d -= (yyvsp[(8) - (9)].d); break;
	case 3 : d *= (yyvsp[(8) - (9)].d); break;
	case 4 :
	  if((yyvsp[(8) - (9)].d)) d /= (yyvsp[(8) - (9)].d);
	  else yymsg(0, "Division by zero in '%s[%d].%s /= %g'", (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].d));
	  break;
	}
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (9)].c), (int)(yyvsp[(3) - (9)].d), (yyvsp[(6) - (9)].c), d);
      }
      Free((yyvsp[(1) - (9)].c)); Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 103:
#line 1058 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(3) - (5)].c), d)){
	d += (yyvsp[(4) - (5)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (5)].c), 0, (yyvsp[(3) - (5)].c), d);
      }
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 104:
#line 1067 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (8)].c), (int)(yyvsp[(3) - (8)].d), (yyvsp[(6) - (8)].c), d)){
	d += (yyvsp[(7) - (8)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), (int)(yyvsp[(3) - (8)].d), (yyvsp[(6) - (8)].c), d);
      }
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(6) - (8)].c));
    ;}
    break;

  case 105:
#line 1079 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (8)].c), 0, (yyvsp[(5) - (8)].c), (yyvsp[(7) - (8)].u));
      Free((yyvsp[(1) - (8)].c)); Free((yyvsp[(5) - (8)].c));
    ;}
    break;

  case 106:
#line 1084 "Gmsh.y"
    {
      ColorOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (11)].c), (int)(yyvsp[(3) - (11)].d), (yyvsp[(8) - (11)].c), (yyvsp[(10) - (11)].u));
      Free((yyvsp[(1) - (11)].c)); Free((yyvsp[(8) - (11)].c));
    ;}
    break;

  case 107:
#line 1092 "Gmsh.y"
    {
      GmshColorTable *ct = GetColorTable(0);
      if(!ct)
	yymsg(0, "View[%d] does not exist", 0);
      else{
	ct->size = List_Nbr((yyvsp[(5) - (6)].l));
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  yymsg(0, "Too many (%d>%d) colors in View[%d].ColorTable",
		ct->size, COLORTABLE_NBMAX_COLOR, 0);
	else
	  for(int i = 0; i < ct->size; i++) List_Read((yyvsp[(5) - (6)].l), i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 108:
#line 1112 "Gmsh.y"
    {
      GmshColorTable *ct = GetColorTable((int)(yyvsp[(3) - (9)].d));
      if(!ct)
	yymsg(0, "View[%d] does not exist", (int)(yyvsp[(3) - (9)].d));
      else{
	ct->size = List_Nbr((yyvsp[(8) - (9)].l));
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  yymsg(0, "Too many (%d>%d) colors in View[%d].ColorTable",
		   ct->size, COLORTABLE_NBMAX_COLOR, (int)(yyvsp[(3) - (9)].d));
	else
	  for(int i = 0; i < ct->size; i++) List_Read((yyvsp[(8) - (9)].l), i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      Free((yyvsp[(1) - (9)].c));
      List_Delete((yyvsp[(8) - (9)].l));
    ;}
    break;

  case 109:
#line 1135 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(4) - (5)].l), tags);
      if(!strcmp((yyvsp[(1) - (5)].c),"Background")) {
	if(tags.size() > 1)
	  yymsg(0, "Only 1 field can be set as a background field.");
	else if(tags.size() == 0)
	  yymsg(1, "No field given (Background Field).");
	else
	  GModel::current()->getFields()->setBackgroundFieldId((int)tags[0]);
      }
      else if(!strcmp((yyvsp[(1) - (5)].c),"BoundaryLayer"))
	GModel::current()->getFields()->addBoundaryLayerFieldId(tags);
      else
	yymsg(0, "Unknown command '%s Field'", (yyvsp[(1) - (5)].c));
#endif
      Free((yyvsp[(1) - (5)].c));
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 110:
#line 1155 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      if(!GModel::current()->getFields()->newField((int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c)))
	yymsg(0, "Cannot create field %i of type '%s'", (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 111:
#line 1163 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (9)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (9)].c)];
	if(option){
	  try { option->numericalValue((yyvsp[(8) - (9)].d)); }
	  catch(...){
	    yymsg(0, "Cannot assign a numerical value to option '%s' "
		  "in field %i of type '%s'", (yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (9)].d));
#endif
      Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 112:
#line 1185 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (9)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (9)].c)];
	if(option){
	  try { option->string((yyvsp[(8) - (9)].c)); }
	  catch (...){
	    yymsg(0, "Cannot assign a string value to  option '%s' "
		  "in field %i of type '%s'", (yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (9)].c), (int)(yyvsp[(3) - (9)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (9)].d));
#endif
      Free((yyvsp[(6) - (9)].c));
      Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 113:
#line 1208 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (11)].d));
      if(field){
	FieldOption *option = field->options[(yyvsp[(6) - (11)].c)];
	if(option){
	  if(option->getType() == FIELD_OPTION_LIST) {
	    std::list<int> vl = option->list();
	    vl.clear();
	    for(int i = 0; i < List_Nbr((yyvsp[(9) - (11)].l)); i++){
	      double id;
	      List_Read((yyvsp[(9) - (11)].l), i, &id);
	      vl.push_back((int)id);
	    }
	    option->list(vl);
	  }
	  else {
	    std::list<double> vl = option->listdouble();
	    vl.clear();
	    for(int i = 0; i < List_Nbr((yyvsp[(9) - (11)].l)); i++){
	      double id;
	      List_Read((yyvsp[(9) - (11)].l), i, &id);
	      vl.push_back(id);
	    }
	    option->listdouble(vl);
	  }
	}
	else
	  yymsg(0, "Unknown option '%s' in field %i of type '%s'",
		(yyvsp[(6) - (11)].c), (int)(yyvsp[(3) - (11)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (11)].d));
#endif
      Free((yyvsp[(6) - (11)].c));
      List_Delete((yyvsp[(9) - (11)].l));
    ;}
    break;

  case 114:
#line 1246 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      Field *field = GModel::current()->getFields()->get((int)(yyvsp[(3) - (7)].d));
      if(field){
        FieldCallback *callback = field->callbacks[(yyvsp[(6) - (7)].c)];
        if(callback) {
          callback->run();
        }
        else
          yymsg(0, "Unknown callback '%s' in field %i of type '%s'",
              (yyvsp[(6) - (7)].c), (int)(yyvsp[(3) - (7)].d), field->getName());
      }
      else
	yymsg(0, "No field with id %i", (int)(yyvsp[(3) - (7)].d));
#endif
      Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 115:
#line 1267 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
      try {
	PluginManager::instance()->setPluginOption((yyvsp[(3) - (9)].c), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].d));
      }
      catch (...) {
	yymsg(0, "Unknown option '%s' or plugin '%s'", (yyvsp[(6) - (9)].c), (yyvsp[(3) - (9)].c));
      }
#endif
      Free((yyvsp[(3) - (9)].c)); Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 116:
#line 1279 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
      try {
	PluginManager::instance()->setPluginOption((yyvsp[(3) - (9)].c), (yyvsp[(6) - (9)].c), (yyvsp[(8) - (9)].c));
      }
      catch (...) {
	yymsg(0, "Unknown option '%s' or plugin '%s'", (yyvsp[(6) - (9)].c), (yyvsp[(3) - (9)].c));
      }
#endif
      Free((yyvsp[(3) - (9)].c)); Free((yyvsp[(6) - (9)].c)); Free((yyvsp[(8) - (9)].c));
    ;}
    break;

  case 120:
#line 1297 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (3)].c));
      std::vector<double> val(1, 0.);
      if(!gmsh_yysymbols.count(key)){
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 121:
#line 1306 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (5)].c));
      std::vector<double> val(1, (yyvsp[(5) - (5)].d));
      if(!gmsh_yysymbols.count(key)){
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 122:
#line 1315 "Gmsh.y"
    { init_options(); ;}
    break;

  case 123:
#line 1317 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(6) - (9)].l)) != 1)
	yymsg(1, "List notation should be used to define list '%s[]'", (yyvsp[(3) - (9)].c));
      std::string key((yyvsp[(3) - (9)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(6) - (9)].l)); i++){
        double d;
        List_Read((yyvsp[(6) - (9)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (9)].c));
      List_Delete((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 124:
#line 1335 "Gmsh.y"
    { init_options(); ;}
    break;

  case 125:
#line 1337 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (11)].c));
      std::vector<double> val;
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (11)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (11)].l), i, &d);
        val.push_back(d);
      }
      if(!gmsh_yysymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yysymbols[key].value = val;
      }
      Free((yyvsp[(3) - (11)].c));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 126:
#line 1353 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (5)].c)), val((yyvsp[(5) - (5)].c));
      if(!gmsh_yystringsymbols.count(key)){
        gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      }
      Free((yyvsp[(3) - (5)].c));
      Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 127:
#line 1362 "Gmsh.y"
    { init_options(); ;}
    break;

  case 128:
#line 1364 "Gmsh.y"
    {
      std::string key((yyvsp[(3) - (9)].c)), val((yyvsp[(6) - (9)].c));
      if(!gmsh_yystringsymbols.count(key)){
        Msg::ExchangeOnelabParameter(key, val, floatOptions, charOptions);
        gmsh_yystringsymbols[key] = std::vector<std::string>(1, val);
      }
      Free((yyvsp[(3) - (9)].c));
      Free((yyvsp[(6) - (9)].c));
    ;}
    break;

  case 130:
#line 1378 "Gmsh.y"
    {
      std::string name((yyvsp[(3) - (3)].c));
      Msg::UndefineOnelabParameter(name);
      Free((yyvsp[(3) - (3)].c));
    ;}
    break;

  case 131:
#line 1386 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      doubleXstring v = {(yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 132:
#line 1392 "Gmsh.y"
    {
      doubleXstring v = {(yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].c)};
      List_Add((yyval.l), &v);
    ;}
    break;

  case 133:
#line 1397 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(doubleXstring));
      int n = List_Nbr((yyvsp[(1) - (5)].l));
      if(!gmsh_yystringsymbols.count((yyvsp[(3) - (5)].c))){
	yymsg(0, "Unknown string variable '%s'", (yyvsp[(3) - (5)].c));
      }
      else{
        std::vector<std::string> &s(gmsh_yystringsymbols[(yyvsp[(3) - (5)].c)]);
        int m = s.size();
        if(n == m){
          for(int i = 0; i < n; i++){
            double d;
            List_Read((yyvsp[(1) - (5)].l), i, &d);
            doubleXstring v = {d, strsave((char*)s[i].c_str())};
            List_Add((yyval.l), &v);
          }
        }
        else{
          yymsg(0, "Size mismatch in enumeration: %d != %d", n, m);
        }
      }
      List_Delete((yyvsp[(1) - (5)].l));
      Free((yyvsp[(3) - (5)].c));
    ;}
    break;

  case 140:
#line 1440 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(2) - (2)].l)); i++){
        double v;
        List_Read((yyvsp[(2) - (2)].l), i, &v);
        floatOptions[key].push_back(v);
        if(flag_Enum && !i) { member_ValMax = (int)v; }
      }
      Free((yyvsp[(1) - (2)].c));
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 141:
#line 1452 "Gmsh.y"
    {
      floatOptions["Min"].push_back((yyvsp[(2) - (2)].d));
    ;}
    break;

  case 142:
#line 1456 "Gmsh.y"
    {
      floatOptions["Max"].push_back((yyvsp[(2) - (2)].d));
    ;}
    break;

  case 143:
#line 1460 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (1)].c));
      double v;
      if(!flag_Enum) {
        v = 1.;
        if(key == "Enum") flag_Enum = 1;
      }
      else
        v = (double)++member_ValMax;
      floatOptions[key].push_back(v);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 144:
#line 1473 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (4)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        doubleXstring v;
        List_Read((yyvsp[(3) - (4)].l), i, &v);
        floatOptions[key].push_back(v.d);
        charOptions[key].push_back(v.s);
      }
      Free((yyvsp[(1) - (4)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        Free(((doubleXstring*)List_Pointer((yyvsp[(3) - (4)].l), i))->s);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 145:
#line 1487 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 146:
#line 1495 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(2) - (2)].l)); i++){
        char *v;
        List_Read((yyvsp[(2) - (2)].l), i, &v);
        charOptions[key].push_back(v);
      }
      Free((yyvsp[(1) - (2)].c));
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 151:
#line 1520 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      double val = (yyvsp[(2) - (2)].d);
      floatOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
    ;}
    break;

  case 152:
#line 1528 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(1) - (2)].c));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 153:
#line 1537 "Gmsh.y"
    {
      std::string key("Macro");
      std::string val((yyvsp[(2) - (2)].c));
      charOptions[key].push_back(val);
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 154:
#line 1545 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(2) - (2)].l)); i++){
        char *s;
        List_Read((yyvsp[(2) - (2)].l), i, &s);
        std::string val(s);
        Free(s);
        charOptions[key].push_back(val);
      }
      Free((yyvsp[(1) - (2)].c));
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 155:
#line 1559 "Gmsh.y"
    {
      std::string key((yyvsp[(1) - (2)].c));
      for(int i = 0; i < List_Nbr((yyvsp[(2) - (2)].l)); i++){
        char *s;
        List_Read((yyvsp[(2) - (2)].l), i, &s);
        std::string val(s);
        Free(s);
        charOptions[key].push_back(val);
      }
      Free((yyvsp[(1) - (2)].c));
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 156:
#line 1577 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(1) - (1)].d);
    ;}
    break;

  case 157:
#line 1581 "Gmsh.y"
    {
      int t = GModel::current()->getGEOInternals()->getMaxPhysicalTag();
      GModel::current()->getGEOInternals()->setMaxPhysicalTag(t + 1);
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (1)].c)), dim_entity, t + 1);
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 158:
#line 1588 "Gmsh.y"
    {
      (yyval.i) = GModel::current()->setPhysicalName(std::string((yyvsp[(1) - (3)].c)), dim_entity, (yyvsp[(3) - (3)].d));
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 159:
#line 1596 "Gmsh.y"
    {
      (yyval.l) = 0;
    ;}
    break;

  case 160:
#line 1600 "Gmsh.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(double));
      double p = (yyvsp[(4) - (5)].d);
      List_Add((yyval.l), &p);
    ;}
    break;

  case 161:
#line 1606 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 162:
#line 1610 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      double flag = -1;
      List_Add((yyval.l), &flag);
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (5)].l)); i++)
        List_Add((yyval.l), List_Pointer((yyvsp[(4) - (5)].l), i));
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 163:
#line 1621 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = 0.;
    ;}
    break;

  case 164:
#line 1625 "Gmsh.y"
    {
      for(int i = 0; i < 4; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 165:
#line 1631 "Gmsh.y"
    {
      (yyval.d) = 0;
    ;}
    break;

  case 166:
#line 1635 "Gmsh.y"
    {
      (yyval.d) = 1;
    ;}
    break;

  case 167:
#line 1641 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      double x = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[0];
      double y = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[1];
      double z = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[2];
      double lc = CTX::instance()->geom.scalingFactor * (yyvsp[(6) - (7)].v)[3];
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addVertex(num, x, y, z, lc);
      }
      else{
        if(!myGmshSurface)
          r = GModel::current()->getGEOInternals()->addVertex(num, x, y, z, lc);
        else
          r = GModel::current()->getGEOInternals()->addVertex(num, x, y,
                                                              myGmshSurface, lc);
      }
      if(!r) yymsg(0, "Could not add point");
      AddToTemporaryBoundingBox(x, y, z);
      (yyval.s).Type = MSH_POINT;
      (yyval.s).Num = num;
    ;}
    break;

  case 168:
#line 1664 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addLine(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addLine(num, tags);
      }
      if(!r) yymsg(0, "Could not add line");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_LINE;
      (yyval.s).Num = num;
    ;}
    break;

  case 169:
#line 1680 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addSpline(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addSpline(num, tags);
      }
      if(!r) yymsg(0, "Could not add spline");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_SPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 170:
#line 1696 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (10)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (10)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Compound spline only available with built-in geometry kernel");
      }
      else{
        r = GModel::current()->getGEOInternals()->addCompoundSpline(num, tags,
                                                                    (int)(yyvsp[(9) - (10)].d));
      }
      if(!r) yymsg(0, "Could not add compound spline");
      List_Delete((yyvsp[(7) - (10)].l));
      (yyval.s).Type = MSH_SEGM_SPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 171:
#line 1713 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (10)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (10)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Compound spline only available with built-in geometry kernel");
      }
      else{
        r = GModel::current()->getGEOInternals()->addCompoundBSpline(num, tags,
                                                                     (int)(yyvsp[(9) - (10)].d));
      }
      if(!r) yymsg(0, "Could not add compound spline");
      List_Delete((yyvsp[(7) - (10)].l));
      (yyval.s).Type = MSH_SEGM_BSPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 172:
#line 1730 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (8)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (8)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(tags.size() == 3){
          r = GModel::current()->getOCCInternals()->addCircleArc
            (num, tags[0], tags[1], tags[2]);
        }
        else if(param.size() >= 4 && param.size() <= 6){
          double r = param[3];
          double a1 = (param.size() == 6) ? param[4] : 0.;
          double a2 = (param.size() == 6) ? param[5] :
            (param.size() == 5) ? param[4] : 2.*M_PI;
          r = GModel::current()->getOCCInternals()->addCircle
            (num, param[0], param[1], param[2], r, a1, a2);
        }
        else{
          yymsg(0, "Circle requires 3 points or 4 to 6 parameters");
        }
      }
      else{
        if(tags.size() == 3){
          r = GModel::current()->getGEOInternals()->addCircleArc
            (num, tags[0], tags[1], tags[2], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else{
          yymsg(0, "Circle requires 3 points");
        }
      }
      if(!r) yymsg(0, "Could not add circle");
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SEGM_CIRC;
      (yyval.s).Num = num;
    ;}
    break;

  case 173:
#line 1767 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (8)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (8)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(tags.size() == 3){ // keep this for backward compatibility
          r = GModel::current()->getOCCInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[0], tags[2]);
        }
        else if(tags.size() == 4){
          r = GModel::current()->getOCCInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[2], tags[3]);
        }
        else if(param.size() >= 5 && param.size() <= 7){
          double a1 = (param.size() == 7) ? param[5] : 0.;
          double a2 = (param.size() == 7) ? param[6] :
            (param.size() == 6) ? param[5] : 2.*M_PI;
          r = GModel::current()->getOCCInternals()->addEllipse
            (num, param[0], param[1], param[2], param[3], param[4], a1, a2);
        }
        else{
          yymsg(0, "Ellipse requires 4 points, or 5 to 7 parameters");
        }
      }
      else{
        if(tags.size() == 3){ // to match occ
          r = GModel::current()->getGEOInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[0], tags[2], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else if(tags.size() == 4){
          r = GModel::current()->getGEOInternals()->addEllipseArc
            (num, tags[0], tags[1], tags[2], tags[3], (yyvsp[(7) - (8)].v)[0], (yyvsp[(7) - (8)].v)[1], (yyvsp[(7) - (8)].v)[2]);
        }
        else{
          yymsg(0, "Ellipse requires 4 points");
        }
      }
      if(!r) yymsg(0, "Could not add ellipse");
      List_Delete((yyvsp[(6) - (8)].l));
      (yyval.s).Type = MSH_SEGM_ELLI;
      (yyval.s).Num = num;
    ;}
    break;

  case 174:
#line 1811 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addBSpline(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addBSpline(num, tags);
      }
      if(!r) yymsg(0, "Could not add BSpline");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_BSPLN;
      (yyval.s).Num = num;
    ;}
    break;

  case 175:
#line 1827 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addBezier(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addBezier(num, tags);
      }
      if(!r) yymsg(0, "Could not add Bezier");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_BEZIER;
      (yyval.s).Num = num;
    ;}
    break;

  case 176:
#line 1844 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (11)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (11)].l), tags);
      std::vector<double> seqknots; ListOfDouble2Vector((yyvsp[(8) - (11)].l), seqknots);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        int degree = (int)(yyvsp[(10) - (11)].d);
        std::vector<double> weights, knots;
        std::vector<int> mults;
        for(std::size_t i = 0; i < seqknots.size(); i++){
          if(!i || (i && fabs(seqknots[i] - seqknots[i - 1]) > 1e-12)){
            knots.push_back(seqknots[i]);
            mults.push_back(1);
          }
          else{
            mults.back() += 1;
          }
        }
        r = GModel::current()->getOCCInternals()->addBSpline
          (num, tags, degree, weights, knots, mults);
      }
      else{
        r = GModel::current()->getGEOInternals()->addBSpline(num, tags, seqknots);
      }
      if(!r) yymsg(0, "Could not add nurbs");
      List_Delete((yyvsp[(6) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
      (yyval.s).Type = MSH_SEGM_NURBS;
      (yyval.s).Num = num;
    ;}
    break;

  case 177:
#line 1875 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addWire(num, tags, false);
      }
      else{
        yymsg(0, "Wire only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add wire");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SEGM_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 178:
#line 1891 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addCurveLoop(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addCurveLoop(num, tags);
      }
      if(!r) yymsg(0, "Could not add curve loop");
      List_Delete((yyvsp[(7) - (8)].l));
      Free((yyvsp[(2) - (8)].c));
      (yyval.s).Type = MSH_SEGM_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 179:
#line 1908 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (8)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addPlaneSurface(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addPlaneSurface(num, tags);
      }
      if(!r) yymsg(0, "Could not add plane surface");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 180:
#line 1924 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(6) - (8)].l), wires);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(wires.size() != 1){
          yymsg(0, "OpenCASCADE surface filling requires a single curve loop");
        }
        else{
          std::vector<int> constraints; ListOfDouble2Vector((yyvsp[(7) - (8)].l), constraints);
          std::vector<int> points, surfaces, continuity;
          if(constraints.size() >= 3 && constraints[0] < 0){
            // {-1, type, ent, type, ent, ...}
            for(std::size_t i = 2; i < constraints.size(); i+=2){
              int type = constraints[i - 1];
              if(type == 0){
                points.push_back(constraints[i]);
              }
              else if(type == 1 || type == 2){
                surfaces.push_back(constraints[i]);
                continuity.push_back(type);
              }
              else
                yymsg(0, "Unknown type of constraint for surface filling");
            }
          }
          else if(constraints.size() > 0){
            // {point, point, ...}
            points = constraints;
          }
          r = GModel::current()->getOCCInternals()->addSurfaceFilling
            (num, wires[0], points, surfaces, continuity);
        }
      }
      else{
        int sphereCenter = -1;
        if(List_Nbr((yyvsp[(7) - (8)].l)) == 1){
          double d; List_Read((yyvsp[(7) - (8)].l), 0, &d);
          sphereCenter = (int)d;
        }
        r = GModel::current()->getGEOInternals()->addSurfaceFilling
          (num, wires, sphereCenter);
      }
      if(!r) yymsg(0, "Could not add surface");
      List_Delete((yyvsp[(6) - (8)].l));
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 181:
#line 1974 "Gmsh.y"
    {
      yymsg(2, "'Ruled Surface' command is deprecated: use 'Surface' instead");
      int num = (int)(yyvsp[(4) - (9)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (9)].l), wires);
      int sphereCenter = -1;
      if(List_Nbr((yyvsp[(8) - (9)].l)) == 1){
        double d; List_Read((yyvsp[(8) - (9)].l), 0, &d);
        sphereCenter = (int)d;
      }
      bool r = GModel::current()->getGEOInternals()->addSurfaceFilling
        (num, wires, sphereCenter);
      if(!r) yymsg(0, "Could not add surface");
      List_Delete((yyvsp[(7) - (9)].l));
      List_Delete((yyvsp[(8) - (9)].l));
      (yyval.s).Type =  MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 182:
#line 1992 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (8)].l), wires);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(wires.size() != 1) {
          yymsg(0, "OpenCASCADE BSpline filling requires a single curve loop");
        }
        else {
          r = GModel::current()->getOCCInternals()->addBSplineFilling(num, wires[0]);
        }
      }
      else{
        yymsg(0, "BSpline surface only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add BSpline surface");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 183:
#line 2013 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (8)].l), wires);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(wires.size() != 1) {
          yymsg(0, "OpenCASCADE BSpline filling requires a single curve loop");
        }
        else {
          r = GModel::current()->getOCCInternals()->addBezierFilling(num, wires[0]);
        }
      }
      else{
        yymsg(0, "Bezier surface only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add Bezier surface");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_SURF_REGL;
      (yyval.s).Num = num;
    ;}
    break;

  case 184:
#line 2034 "Gmsh.y"
    {
      myGmshSurface = 0;
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 185:
#line 2040 "Gmsh.y"
    {
      myGmshSurface = gmshSurface::getSurface((int)(yyvsp[(3) - (4)].d));
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 186:
#line 2046 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (10)].d);
      myGmshSurface = gmshParametricSurface::NewParametricSurface(num, (yyvsp[(7) - (10)].c), (yyvsp[(8) - (10)].c), (yyvsp[(9) - (10)].c));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 187:
#line 2053 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      (yyval.s).Type = 0;
      bool r = true;
      if(param.size() >= 4 && param.size() <= 7){
        if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          double a1 = (param.size() >= 5) ? param[4] : -M_PI/2;
          double a2 = (param.size() >= 6) ? param[5] : M_PI/2;
          double a3 = (param.size() >= 7) ? param[6] : 2.*M_PI;
          r = GModel::current()->getOCCInternals()->addSphere
            (num, param[0], param[1], param[2], param[3], a1, a2, a3);
        }
        else{
          yymsg(0, "Sphere only available with OpenCASCADE geometry kernel");
        }
        (yyval.s).Type = MSH_VOLUME;
      }
      else if(tags.size() == 2){
        myGmshSurface = GModel::current()->getGEOInternals()->newGeometrySphere
          (num, tags[0], tags[1]);
      }
      else{
        yymsg(0, "Sphere requires 2 points or from 4 to 7 parameters");
      }
      if(!r) yymsg(0, "Could not add sphere");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Num = num;
    ;}
    break;

  case 188:
#line 2084 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      if(tags.size() == 2){
        myGmshSurface = GModel::current()->getGEOInternals()->newGeometryPolarSphere
          (num, tags[0], tags[1]);
      }
      else{
        yymsg(0, "PolarSphere requires 2 points");
      }
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = 0;
      (yyval.s).Num = num;
    ;}
    break;

  case 189:
#line 2099 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 6){
          r = GModel::current()->getOCCInternals()->addBox
            (num, param[0], param[1], param[2], param[3], param[4], param[5]);
        }
        else{
          yymsg(0, "Box requires 6 parameters");
        }
      }
      else{
        yymsg(0, "Box only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add block");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 190:
#line 2121 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 5 || param.size() == 6){
          double alpha = (param.size() == 6) ? param[5] : 2*M_PI;
          r = GModel::current()->getOCCInternals()->addTorus
            (num, param[0], param[1], param[2], param[3], param[4], alpha);
        }
        else{
          yymsg(0, "Torus requires 5 ou 6 parameters");
        }
      }
      else{
        yymsg(0, "Torus only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add torus");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 191:
#line 2144 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 5 || param.size() == 6){
          double r = (param.size() == 6) ? param[5] : 0.;
          r = GModel::current()->getOCCInternals()->addRectangle
            (num, param[0], param[1], param[2], param[3], param[4], r);
        }
        else{
          yymsg(0, "Rectangle requires 5 ou 6 parameters");
        }
      }
      else{
        yymsg(0, "Rectangle only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add rectangle");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 192:
#line 2167 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 4 || param.size() == 5){
          double ry = (param.size() == 5) ? param[4] : param[3];
          r = GModel::current()->getOCCInternals()->addDisk
            (num, param[0], param[1], param[2], param[3], ry);
        }
        else{
          yymsg(0, "Disk requires 4 or 5 parameters");
        }
      }
      else{
        yymsg(0, "Disk only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add disk");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_SURF_PLAN;
      (yyval.s).Num = num;
    ;}
    break;

  case 193:
#line 2190 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 7 || param.size() == 8){
          double angle = (param.size() == 8) ? param[7] : 2*M_PI;
          r = GModel::current()->getOCCInternals()->addCylinder
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6], angle);
        }
        else{
          yymsg(0, "Cylinder requires 7 or 8 parameters");
        }
      }
      else{
        yymsg(0, "Cylinder only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add cylinder");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 194:
#line 2214 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 8 || param.size() == 9){
          double alpha = (param.size() == 9) ? param[8] : 2*M_PI;
          r = GModel::current()->getOCCInternals()->addCone
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             param[6], param[7], alpha);
        }
        else{
          yymsg(0, "Cone requires 8 or 9 parameters");
        }
      }
      else{
        yymsg(0, "Cone only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add cone");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 195:
#line 2238 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() == 6 || param.size() == 7){
          double ltx = (param.size() == 7) ? param[6] : 0.;
          r = GModel::current()->getOCCInternals()->addWedge
            (num, param[0], param[1], param[2], param[3], param[4], param[5],
             ltx);
        }
        else{
          yymsg(0, "Wedge requires 7 parameters");
        }
      }
      else{
        yymsg(0, "Wedge only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add wedge");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 196:
#line 2262 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<double> param; ListOfDouble2Vector((yyvsp[(6) - (7)].l), param);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        if(param.size() >= 2){
          int in = (int)param[0];
          double offset = param[1];
          std::vector<int> exclude;
          for(std::size_t i = 2; i < param.size(); i++)
            exclude.push_back(param[i]);
          std::vector<std::pair<int, int> > outDimTags;
          r = GModel::current()->getOCCInternals()->addThickSolid
            (num, in, exclude, offset, outDimTags);
        }
        else{
          yymsg(0, "ThickSolid requires at least 2 parameters");
        }
      }
      else{
        yymsg(0, "ThickSolid only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add thick solid");
      List_Delete((yyvsp[(6) - (7)].l));
    ;}
    break;

  case 197:
#line 2288 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (9)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(7) - (9)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addSurfaceLoop(num, tags, (yyvsp[(8) - (9)].d));
      }
      else{
        r = GModel::current()->getGEOInternals()->addSurfaceLoop(num, tags);
      }
      if(!r) yymsg(0, "Could not add surface loop");
      List_Delete((yyvsp[(7) - (9)].l));
      Free((yyvsp[(2) - (9)].c));
      (yyval.s).Type = MSH_SURF_LOOP;
      (yyval.s).Num = num;
    ;}
    break;

  case 198:
#line 2305 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (7)].l), tags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addVolume(num, tags);
      }
      else{
        r = GModel::current()->getGEOInternals()->addVolume(num, tags);
      }
      if(!r) yymsg(0, "Could not add volume");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 199:
#line 2321 "Gmsh.y"
    {
      int num = (int)(yyvsp[(3) - (7)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(6) - (7)].l), wires);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (num, wires, true, false, outDimTags);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add thrusections");
      List_Delete((yyvsp[(6) - (7)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 200:
#line 2339 "Gmsh.y"
    {
      int num = (int)(yyvsp[(4) - (8)].d);
      std::vector<int> wires; ListOfDouble2Vector((yyvsp[(7) - (8)].l), wires);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (num, wires, true, true, outDimTags);
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add ruled thrusections");
      List_Delete((yyvsp[(7) - (8)].l));
      (yyval.s).Type = MSH_VOLUME;
      (yyval.s).Num = num;
    ;}
    break;

  case 201:
#line 2357 "Gmsh.y"
    {
      if((yyvsp[(2) - (8)].i) == 1)
        yymsg(0, "`Compound Line (...) = {...};' is deprecated: use `Compound "
              "Spline|BSpline (...) = {...} Using ...;' instead, or the compound "
              "meshing constraint `Compound Curve {...};'");
      else
        yymsg(0, "`Compound Surface (...) = {...};' is deprecated: use the "
              "compound meshing constraint `Compound Surface {...};' instead");
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 202:
#line 2370 "Gmsh.y"
    {
      if((yyvsp[(2) - (12)].i) == 1)
        yymsg(0, "`Compound Line (...) = {...};' is deprecated: use `Compound "
              "Spline|BSpline (...) = {...} Using ...;' instead, or the compound "
              "meshing constraint `Compound Curve {...};'");
      else
        yymsg(0, "`Compound Surface (...) = {...};' is deprecated: use the "
              "compound meshing constraint `Compound Surface {...};' instead");
      (yyval.s).Type = 0;
      (yyval.s).Num = 0;
    ;}
    break;

  case 203:
#line 2382 "Gmsh.y"
    {
      dim_entity = (yyvsp[(2) - (2)].i);
    ;}
    break;

  case 204:
#line 2386 "Gmsh.y"
    {
      int num = (int)(yyvsp[(5) - (9)].i);
      int op = (yyvsp[(7) - (9)].i);
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(8) - (9)].l), tags);
      bool r = GModel::current()->getGEOInternals()->modifyPhysicalGroup
        ((yyvsp[(2) - (9)].i), num, op, tags);
      if(!r)
        switch ((yyvsp[(2) - (9)].i)) {
        case 0: yymsg(0, "Could not modify physical point"); break;
        case 1: yymsg(0, "Could not modify physical line"); break;
        case 2: yymsg(0, "Could not modify physical surface"); break;
        case 3: yymsg(0, "Could not modify physical volume"); break;
        }
      List_Delete((yyvsp[(8) - (9)].l));
      switch ((yyvsp[(2) - (9)].i)) {
      case 0: (yyval.s).Type = MSH_PHYSICAL_POINT  ; break;
      case 1: (yyval.s).Type = MSH_PHYSICAL_LINE   ; break;
      case 2: (yyval.s).Type = MSH_PHYSICAL_SURFACE; break;
      case 3: (yyval.s).Type = MSH_PHYSICAL_VOLUME ; break;
      }
      (yyval.s).Num = num;
    ;}
    break;

  case 205:
#line 2412 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 206:
#line 2414 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 207:
#line 2416 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 208:
#line 2418 "Gmsh.y"
    { (yyval.i) = 3; ;}
    break;

  case 209:
#line 2420 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(3) - (4)].d);
      if((yyval.i) < 0 || (yyval.i) > 3) yymsg(0, "GeoEntity dim out of range [0,3]");
    ;}
    break;

  case 210:
#line 2428 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 211:
#line 2430 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 212:
#line 2432 "Gmsh.y"
    { (yyval.i) = 3; ;}
    break;

  case 213:
#line 2434 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(3) - (4)].d);
      if((yyval.i)<1 || (yyval.i)>3) yymsg(0, "GeoEntity dim out of range [1,3]");
    ;}
    break;

  case 214:
#line 2442 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 215:
#line 2444 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 216:
#line 2446 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(3) - (4)].d);
      if((yyval.i)<1 || (yyval.i)>2) yymsg(0, "GeoEntity dim out of range [1,2]");
    ;}
    break;

  case 217:
#line 2454 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 218:
#line 2456 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 219:
#line 2458 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 220:
#line 2460 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(3) - (4)].d);
      if((yyval.i) < 0 || (yyval.i) > 2) yymsg(0, "GeoEntity dim out of range [0,2]");
    ;}
    break;

  case 221:
#line 2470 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->translate
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      else{
        r = GModel::current()->getGEOInternals()->translate
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2]);
      }
      if(!r) yymsg(0, "Could not translate shapes");
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 222:
#line 2486 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (11)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->rotate
          (dimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      else{
        r = GModel::current()->getGEOInternals()->rotate
          (dimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d));
      }
      if(!r) yymsg(0, "Could not rotate shapes");
      (yyval.l) = (yyvsp[(10) - (11)].l);
    ;}
    break;

  case 223:
#line 2502 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->symmetry
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], (yyvsp[(2) - (5)].v)[3]);
      }
      else{
        r = GModel::current()->getGEOInternals()->symmetry
          (dimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], (yyvsp[(2) - (5)].v)[3]);
      }
      if(!r) yymsg(0, "Could not apply symmetry transform");
      (yyval.l) = (yyvsp[(4) - (5)].l);
    ;}
    break;

  case 224:
#line 2518 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(8) - (9)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d));
      }
      else{
        r = GModel::current()->getGEOInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(5) - (9)].d));
      }
      if(!r) yymsg(0, "Could not dilate shapes");
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 225:
#line 2534 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(8) - (9)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].v)[0], (yyvsp[(5) - (9)].v)[1], (yyvsp[(5) - (9)].v)[2]);
      }
      else{
        r = GModel::current()->getGEOInternals()->dilate
          (dimTags, (yyvsp[(3) - (9)].v)[0], (yyvsp[(3) - (9)].v)[1], (yyvsp[(3) - (9)].v)[2], (yyvsp[(5) - (9)].v)[0], (yyvsp[(5) - (9)].v)[1], (yyvsp[(5) - (9)].v)[2]);
      }
      if(!r) yymsg(0, "Could not dilate shapes");
      (yyval.l) = (yyvsp[(8) - (9)].l);
    ;}
    break;

  case 226:
#line 2550 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(6) - (7)].l), dimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<double> mat;
        ListOfDouble2Vector((yyvsp[(3) - (7)].l), mat);
        r = GModel::current()->getOCCInternals()->affine(dimTags, mat);
      }
      else{
        yymsg(0, "Affine transform only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not transform shapes");
      List_Delete((yyvsp[(3) - (7)].l));
      (yyval.l) = (yyvsp[(6) - (7)].l);
    ;}
    break;

  case 227:
#line 2567 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), inDimTags);
      (yyval.l) = (yyvsp[(3) - (4)].l);
      List_Reset((yyval.l));
      std::string action((yyvsp[(1) - (4)].c));
      bool r = true;
      if(action == "Duplicata"){
        if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
          r = GModel::current()->getOCCInternals()->copy(inDimTags, outDimTags);
        }
        else{
          r = GModel::current()->getGEOInternals()->copy(inDimTags, outDimTags);
        }
      }
      else if(action == "Boundary" || action == "CombinedBoundary" ||
              action == "PointsOf"){
        // boundary operations are performed directly on GModel, which enables
        // to compute the boundary of hybrid CAD models; this also automatically
        // binds all boundary entities for OCC models
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        r = GModel::current()->getBoundaryTags
          (inDimTags, outDimTags, action == "CombinedBoundary", true,
           action == "PointsOf");
      }
      else{
        yymsg(0, "Unknown action on multiple shapes '%s'", (yyvsp[(1) - (4)].c));
      }
      if(!r) yymsg(0, "Could not apply operation on shapes");
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 228:
#line 2604 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Intersect line not available with OpenCASCADE geometry kernel");
      }
      else{
        std::vector<int> in, out; ListOfDouble2Vector((yyvsp[(4) - (9)].l), in);
        r = GModel::current()->getGEOInternals()->intersectCurvesWithSurface
          (in, (int)(yyvsp[(8) - (9)].d), out);
        for(std::size_t i = 0; i < out.size(); i++){
          Shape s;
          s.Type = MSH_POINT;
          s.Num = out[i];
          List_Add((yyval.l), &s);
        }
      }
      if(!r) yymsg(0, "Could not intersect line");
      List_Delete((yyvsp[(4) - (9)].l));
    ;}
    break;

  case 229:
#line 2625 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Split Curve not available with OpenCASCADE geometry kernel");
      }
      else{
        std::vector<int> vertices, curves; ListOfDouble2Vector((yyvsp[(8) - (10)].l), vertices);
        r = GModel::current()->getGEOInternals()->splitCurve
          ((int)(yyvsp[(4) - (10)].d), vertices, curves);
        for(std::size_t i = 0; i < curves.size(); i++){
          Shape s;
          s.Type = MSH_SEGM_LINE;
          s.Num = curves[i];
          List_Add((yyval.l), &s);
        }
      }
      if(!r) yymsg(0, "Could not split curve");
      List_Delete((yyvsp[(8) - (10)].l));
    ;}
    break;

  case 230:
#line 2646 "Gmsh.y"
    {
      yymsg(2, "'Split Curve(c) {...}' is deprecated: "
            "use 'Split Curve {c} Point {...}' instead");
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Split Curve not available with OpenCASCADE geometry kernel");
      }
      else{
        std::vector<int> vertices, curves; ListOfDouble2Vector((yyvsp[(7) - (9)].l), vertices);
        r = GModel::current()->getGEOInternals()->splitCurve
          ((int)(yyvsp[(4) - (9)].d), vertices, curves);
        for(std::size_t i = 0; i < curves.size(); i++){
          Shape s;
          s.Type = MSH_SEGM_LINE;
          s.Num = curves[i];
          List_Add((yyval.l), &s);
        }
      }
      if(!r) yymsg(0, "Could not split curve");
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 231:
#line 2671 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 232:
#line 2672 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 233:
#line 2677 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 3, sizeof(Shape));
    ;}
    break;

  case 234:
#line 2681 "Gmsh.y"
    {
      List_Add((yyval.l), &(yyvsp[(2) - (2)].s));
    ;}
    break;

  case 235:
#line 2685 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	double d;
	List_Read((yyvsp[(4) - (6)].l), i, &d);
	Shape s;
	s.Num = (int)d;
        switch ((yyvsp[(2) - (6)].i)) {
        case 0: s.Type = MSH_POINT    ; break;
        case 1: s.Type = MSH_SEGM_LINE; break;
        case 2: s.Type = MSH_SURF_PLAN; break; // we don't care about the actual type
        case 3: s.Type = MSH_VOLUME   ; break;
        }
        List_Add((yyval.l), &s);
      }
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 236:
#line 2702 "Gmsh.y"
    {
      List_T *tmp = List_Create(10, 10, sizeof(double));
      getElementaryTagsForPhysicalGroups((yyvsp[(3) - (7)].i), (yyvsp[(5) - (7)].l), tmp);
      for(int i = 0; i < List_Nbr(tmp); i++){
	double d;
	List_Read(tmp, i, &d);
 	Shape s;
	s.Num = (int)d; // FIXME
        switch ((yyvsp[(3) - (7)].i)) {
        case 0: s.Type = MSH_POINT    ; break;
        case 1: s.Type = MSH_SEGM_LINE; break;
        case 2: s.Type = MSH_SURF_PLAN; break; // we don't care about the actual type
        case 3: s.Type = MSH_VOLUME   ; break;
        }
        List_Add((yyval.l), &s);
      }
      List_Delete(tmp);
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 237:
#line 2722 "Gmsh.y"
    {
      List_T *tmp = List_Create(10, 10, sizeof(double));
      getParentTags((yyvsp[(3) - (7)].i), (yyvsp[(5) - (7)].l), tmp);
      for(int i = 0; i < List_Nbr(tmp); i++){
	double d;
	List_Read(tmp, i, &d);
 	Shape s;
	s.Num = (int)d; // FIXME
        switch ((yyvsp[(3) - (7)].i)) {
        case 0: s.Type = MSH_POINT    ; break;
        case 1: s.Type = MSH_SEGM_LINE; break;
        case 2: s.Type = MSH_SURF_PLAN; break; // we don't care about the actual type
        case 3: s.Type = MSH_VOLUME   ; break;
        }
        List_Add((yyval.l), &s);
      }
      List_Delete(tmp);
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 238:
#line 2742 "Gmsh.y"
    {
      List_T *tmp = List_Create(10, 10, sizeof(double));
      getAllElementaryTags((yyvsp[(2) - (6)].i), tmp);
      for(int i = 0; i < List_Nbr(tmp); i++){
	double d;
	List_Read(tmp, i, &d);
	Shape s;
	s.Num = (int)d;
        switch ((yyvsp[(2) - (6)].i)) {
        case 0: s.Type = MSH_POINT    ; break;
        case 1: s.Type = MSH_SEGM_LINE; break;
        case 2: s.Type = MSH_SURF_PLAN; break; // we don't care about the actual type
        case 3: s.Type = MSH_VOLUME   ; break;
        }
        List_Add((yyval.l), &s);
      }
      List_Delete(tmp);
    ;}
    break;

  case 239:
#line 2761 "Gmsh.y"
    {
      List_T *tmp = List_Create(10, 10, sizeof(double));
      List_T *tmp2 = List_Create(10, 10, sizeof(double));
      getAllPhysicalTags((yyvsp[(3) - (7)].i), tmp2);
      getElementaryTagsForPhysicalGroups((yyvsp[(3) - (7)].i), tmp2, tmp);
      for(int i = 0; i < List_Nbr(tmp); i++){
	double d;
	List_Read(tmp, i, &d);
 	Shape s;
	s.Num = (int)d; // FIXME
        switch ((yyvsp[(3) - (7)].i)) {
        case 0: s.Type = MSH_POINT    ; break;
        case 1: s.Type = MSH_SEGM_LINE; break;
        case 2: s.Type = MSH_SURF_PLAN; break; // we don't care about the actual type
        case 3: s.Type = MSH_VOLUME   ; break;
        }
        List_Add((yyval.l), &s);
      }
      List_Delete(tmp);
      List_Delete(tmp2);
    ;}
    break;

  case 240:
#line 2788 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(7) - (8)].l)) == 4){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[4];
          for(int i = 0; i < 4; i++)
            List_Read((yyvsp[(7) - (8)].l), i, &d[i]);
          gLevelset *ls = new gLevelsetPlane(d[0], d[1], d[2], d[3], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(7) - (8)].l));
    ;}
    break;

  case 241:
#line 2807 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (10)].d);
      if(gLevelset::find(t)){
	yymsg(0, "Levelset %d already exists", t);
      }
      else {
	fullMatrix<double> centers(List_Nbr((yyvsp[(8) - (10)].l)),3);
	for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++){
	  List_T *l = *(List_T**)List_Pointer((yyvsp[(8) - (10)].l), i);
	  for(int j = 0; j < List_Nbr(l); j++){
	    centers(i,j) = (double)(*(double*)List_Pointer(l, j));
	  }
	}
        gLevelset *ls = new gLevelsetPoints(centers, t);
        gLevelset::add(ls);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(8) - (10)].l), i));
      List_Delete((yyvsp[(8) - (10)].l));
    ;}
    break;

  case 242:
#line 2829 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (14)].d);
      if(gLevelset::find(t)){
        yymsg(0, "Levelset %d already exists", t);
      }
      else {
        double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
        double n[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
        gLevelset *ls = new gLevelsetPlane(pt, n, t);
        gLevelset::add(ls);
      }
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 243:
#line 2844 "Gmsh.y"
    {
      int t = (int)(yyvsp[(4) - (16)].d);
      if(gLevelset::find(t)){
        yymsg(0, "Levelset %d already exists", t);
      }
      else {
        double pt1[3] = {(yyvsp[(8) - (16)].v)[0], (yyvsp[(8) - (16)].v)[1], (yyvsp[(8) - (16)].v)[2]};
        double pt2[3] = {(yyvsp[(10) - (16)].v)[0], (yyvsp[(10) - (16)].v)[1], (yyvsp[(10) - (16)].v)[2]};
        double pt3[3] = {(yyvsp[(12) - (16)].v)[0], (yyvsp[(12) - (16)].v)[1], (yyvsp[(12) - (16)].v)[2]};
        gLevelset *ls = new gLevelsetPlane(pt1, pt2, pt3, t);
        gLevelset::add(ls);
      }
      List_Delete((yyvsp[(14) - (16)].l));
    ;}
    break;

  case 244:
#line 2859 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(10) - (12)].l)) == 1){
        int t = (int)(yyvsp[(4) - (12)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(10) - (12)].l), 0, &d);
          gLevelset *ls = new gLevelsetSphere((yyvsp[(8) - (12)].v)[0], (yyvsp[(8) - (12)].v)[1], (yyvsp[(8) - (12)].v)[2], d, t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(10) - (12)].l));
    ;}
    break;

  case 245:
#line 2878 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 1){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(12) - (14)].l), 0, &d);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetGenCylinder(pt, dir, d, t);
          gLevelset::add(ls);
        }
      }
      else if(List_Nbr((yyvsp[(12) - (14)].l)) == 2){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[2];
          for(int i = 0; i < 2; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCylinder(pt, dir, d[0], d[1], t);
          gLevelset::add(ls);
        }
      }
      else if(List_Nbr((yyvsp[(12) - (14)].l)) == 3){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[3];
          for(int i = 0; i < 3; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCylinder(pt, dir, d[0], d[1], d[2], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 246:
#line 2929 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 1){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(12) - (14)].l), 0, &d);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetCone(pt, dir, d, t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 247:
#line 2950 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 3){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[3];
          for(int i = 0; i < 3; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetEllipsoid(pt, dir, d[0], d[1], d[2], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 248:
#line 2972 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(12) - (14)].l)) == 5){
        int t = (int)(yyvsp[(4) - (14)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d[5];
          for(int i = 0; i < 5; i++)
            List_Read((yyvsp[(12) - (14)].l), i, &d[i]);
          double pt[3] = {(yyvsp[(8) - (14)].v)[0], (yyvsp[(8) - (14)].v)[1], (yyvsp[(8) - (14)].v)[2]};
          double dir[3] = {(yyvsp[(10) - (14)].v)[0], (yyvsp[(10) - (14)].v)[1], (yyvsp[(10) - (14)].v)[2]};
          gLevelset *ls = new gLevelsetGeneralQuadric(pt, dir, d[0], d[1],
                                                      d[2], d[3], d[4], t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      List_Delete((yyvsp[(12) - (14)].l));
    ;}
    break;

  case 249:
#line 2994 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (8)].c), "Union")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetUnion(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Intersection")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetIntersection(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Cut")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetCut(vl, true, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Crack")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          std::vector<gLevelset *> vl;
          for(int i = 0; i < List_Nbr((yyvsp[(7) - (8)].l)); i++) {
            double d; List_Read((yyvsp[(7) - (8)].l), i, &d);
            gLevelset *pl = gLevelset::find((int)d);
	    if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
            else vl.push_back(pl);
          }
          gLevelset *ls = new gLevelsetCrack(vl, false, t);
          gLevelset::add(ls);
        }
      }
      else if(!strcmp((yyvsp[(2) - (8)].c), "Reverse")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          double d;
          List_Read((yyvsp[(7) - (8)].l), 0, &d);
          gLevelset *pl = gLevelset::find((int)d);
          gLevelset *ls = nullptr;
          if(!pl) yymsg(0, "Unknown levelset %d", (int)d);
          else ls = new gLevelsetReverse(pl, t);
          if(ls) gLevelset::add(ls);
        }
      }
#if defined(HAVE_POST)
      else if(!strcmp((yyvsp[(2) - (8)].c), "PostView")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          if(List_Nbr((yyvsp[(7) - (8)].l)) > 0){
            double d; List_Read((yyvsp[(7) - (8)].l), 0, &d);
            gLevelset *ls = new gLevelsetPostView((int)d, t);
            gLevelset::add(ls);
          }
        }
      }
#endif
      else
        yymsg(0, "Wrong number of arguments for levelset definition");
      Free((yyvsp[(2) - (8)].c));
      List_Delete((yyvsp[(7) - (8)].l));
    ;}
    break;

  case 250:
#line 3099 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (8)].c), "MathEval")){
        int t = (int)(yyvsp[(4) - (8)].d);
        if(gLevelset::find(t)){
	  yymsg(0, "Levelset %d already exists", t);
        }
        else {
          gLevelset *ls = new gLevelsetMathEval((yyvsp[(7) - (8)].c), t);
          gLevelset::add(ls);
        }
      }
      else
        yymsg(0, "Unknown levelset '%s'", (yyvsp[(2) - (8)].c));
      Free((yyvsp[(2) - (8)].c)); Free((yyvsp[(7) - (8)].c));
    ;}
    break;

  case 251:
#line 3115 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (6)].c), "CutMesh")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), true, false);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else if(!strcmp((yyvsp[(2) - (6)].c), "CutMeshTri")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), true, true);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else if(!strcmp((yyvsp[(2) - (6)].c), "SplitMesh")){
        int t = (int)(yyvsp[(4) - (6)].d);
        if(gLevelset::find(t)){
          GModel::current()->buildCutGModel(gLevelset::find(t), false, true);
        }
        else
          yymsg(0, "Unknown levelset %d", t);
      }
      else
        yymsg(0, "Unknown levelset '%s'", (yyvsp[(2) - (6)].c));
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 252:
#line 3150 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      bool changed = false;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->remove(dimTags);
        changed = GModel::current()->getOCCInternals()->getChanged();
        if(changed)
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
      }
      else{
        GModel::current()->getGEOInternals()->remove(dimTags);
        changed = GModel::current()->getGEOInternals()->getChanged();
        if(changed)
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
      }
      if(!changed){
        GModel::current()->remove(dimTags);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 253:
#line 3172 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      bool changed = false;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->remove(dimTags, true);
        changed = GModel::current()->getOCCInternals()->getChanged();
        if(changed)
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
      }
      else{
        GModel::current()->getGEOInternals()->remove(dimTags, true);
        changed = GModel::current()->getGEOInternals()->getChanged();
        if(changed)
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
      }
      if(!changed){
        GModel::current()->remove(dimTags, true);
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 254:
#line 3194 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      if(!strcmp((yyvsp[(2) - (5)].c), "Embedded")){
        removeEmbedded(dimTags, -1);
      }
      else
	yymsg(0, "Unknown command 'Delete %s'", (yyvsp[(2) - (5)].c));
      List_Delete((yyvsp[(4) - (5)].l));
      Free((yyvsp[(2) - (5)].c));
    ;}
    break;

  case 255:
#line 3206 "Gmsh.y"
    {
#if defined(HAVE_MESH)
      GModel::current()->getFields()->deleteField((int)(yyvsp[(4) - (6)].d));
#endif
    ;}
    break;

  case 256:
#line 3212 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (6)].c), "View")){
	int index = (int)(yyvsp[(4) - (6)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  delete PView::list[index];
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command 'Delete %s'", (yyvsp[(2) - (6)].c));
#endif
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 257:
#line 3227 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "All")){
        ClearProject();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Meshes")){
	GModel::current()->deleteMesh();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Model")){
	GModel::current()->destroy(true); // destroy, but keep name/filename
	GModel::current()->getGEOInternals()->destroy();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Physicals")){
	GModel::current()->getGEOInternals()->resetPhysicalGroups();
	GModel::current()->removePhysicalGroups();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Variables")){
	gmsh_yysymbols.clear();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Options")){
        ReInitOptions(0);
        InitOptionsGUI(0);
      }
      else{
	if(gmsh_yysymbols.count((yyvsp[(2) - (3)].c)))
	  gmsh_yysymbols.erase((yyvsp[(2) - (3)].c));
	else
	  yymsg(0, "Unknown object or expression to delete '%s'", (yyvsp[(2) - (3)].c));
      }
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 258:
#line 3258 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (4)].c), "Empty") && !strcmp((yyvsp[(3) - (4)].c), "Views")){
	for(int i = PView::list.size() - 1; i >= 0; i--)
	  if(PView::list[i]->getData()->empty()) delete PView::list[i];
      }
      else
	yymsg(0, "Unknown command 'Delete %s %s'", (yyvsp[(2) - (4)].c), (yyvsp[(3) - (4)].c));
#endif
      Free((yyvsp[(2) - (4)].c)); Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 259:
#line 3270 "Gmsh.y"
    {
      gmsh_yynamespaces.clear();
    ;}
    break;

  case 260:
#line 3279 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setColor(dimTags, (yyvsp[(2) - (5)].u), false);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 261:
#line 3286 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(5) - (6)].l), dimTags);
      setColor(dimTags, (yyvsp[(3) - (6)].u), true);
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 262:
#line 3298 "Gmsh.y"
    {
      yymsg(2, "'SetPartition' command is deprecated");
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      for(std::size_t i = 0; i < dimTags.size(); i++){
        GEntity *ge = GModel::current()->getEntityByTag
          (dimTags[i].first, dimTags[i].second);
        if(ge){
          for(std::size_t j = 0; j < ge->getNumMeshElements(); j++)
            ge->getMeshElement(j)->setPartition((int)(yyvsp[(2) - (5)].d));
        }
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 263:
#line 3318 "Gmsh.y"
    {
      setVisibility(-1, 1, false);
    ;}
    break;

  case 264:
#line 3322 "Gmsh.y"
    {
      setVisibility(-1, 1, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 265:
#line 3327 "Gmsh.y"
    {
      setVisibility(-1, 0, false);
    ;}
    break;

  case 266:
#line 3331 "Gmsh.y"
    {
      setVisibility(-1, 0, false);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 267:
#line 3336 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      setVisibility(dimTags, 1, false);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 268:
#line 3343 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setVisibility(dimTags, 1, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 269:
#line 3350 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      setVisibility(dimTags, 0, false);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 270:
#line 3357 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), dimTags);
      setVisibility(dimTags, 0, true);
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 271:
#line 3369 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (3)].c), "Include")){
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	Msg::StatusBar(true, "Reading '%s'...", tmp.c_str());
	// Warning: we explicitly ask ParseFile not to fclose() the included
        // file, in order to allow user functions definitions in these files.
        // The files will be closed in the next time OpenFile terminates. If
        // you need to include many many files and don't have functions in
        // the files, use "Merge" instead of "Include", as some OSes limit
        // the number of files a process can open simultaneously. (A better
        // solution would be to modify FunctionManager to reopen the files
        // instead of using the FILE pointer...)
	ParseFile(tmp, false, true);
	SetBoundingBox();
	Msg::StatusBar(true, "Done reading '%s'", tmp.c_str());
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Print")){
	// make sure we have the latest data from CAD internals in GModel (fixes
	// bug where we would have no geometry in the picture if the print
	// command is in the same file as the geometry)
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateOutputFile(tmp, CTX::instance()->print.fileFormat);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Save")){
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateOutputFile(tmp, CTX::instance()->mesh.fileFormat);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Merge") || !strcmp((yyvsp[(1) - (3)].c), "MergeWithBoundingBox")){
	// sync CAD internals here, so that if we e.g. import a STEP file, we
        // have the correct entity tags and the numberings don't clash
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
        MergeFile(tmp, true);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "NonBlockingSystemCall")){
	SystemCall((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "System") || !strcmp((yyvsp[(1) - (3)].c), "SystemCall")){
	SystemCall((yyvsp[(2) - (3)].c), true);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetName")){
	GModel::current()->setName((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "CreateDir")){
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(2) - (3)].c));
	CreateSingleDir(tmp);
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "OnelabRun")){
        Msg::RunOnelabClient((yyvsp[(2) - (3)].c));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "OptimizeMesh")){
        GModel::current()->optimizeMesh((yyvsp[(2) - (3)].c));
      }
      else{
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c)); Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 272:
#line 3442 "Gmsh.y"
    {
      int n = List_Nbr((yyvsp[(3) - (5)].l));
      if(n == 1){
        char *s; List_Read((yyvsp[(3) - (5)].l), 0, &s);
        Msg::RunOnelabClient(s);
        Free(s);
      }
      else if(n == 2){
        char *s, *t; List_Read((yyvsp[(3) - (5)].l), 0, &s); List_Read((yyvsp[(3) - (5)].l), 1, &t);
        Msg::RunOnelabClient(s, t);
        Free(s); Free(t);
      }
      else{
        yymsg(0, "OnelabRun takes one or two arguments");
      }
      List_Delete((yyvsp[(3) - (5)].l));
    ;}
    break;

  case 273:
#line 3460 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (7)].c), "View")){
	int index = (int)(yyvsp[(4) - (7)].d);
	if(index >= 0 && index < (int)PView::list.size()){
          if(!strcmp((yyvsp[(1) - (7)].c), "Save")){
            std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(6) - (7)].c));
            PView::list[index]->write(tmp, CTX::instance()->post.fileFormat);
          }
          else if(!strcmp((yyvsp[(1) - (7)].c), "SendToServer")){
            PView::list[index]->sendToServer((yyvsp[(6) - (7)].c));
          }
          else{
            yymsg(0, "Unknown operation '%s' on view %d", (yyvsp[(1) - (7)].c), index);
          }
	}
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command '%s %s'", (yyvsp[(1) - (7)].c), (yyvsp[(2) - (7)].c));
#endif
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(2) - (7)].c)); Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 274:
#line 3485 "Gmsh.y"
    {
#if defined(HAVE_POST) && defined(HAVE_MESH)
      if(!strcmp((yyvsp[(1) - (7)].c), "Background") && !strcmp((yyvsp[(2) - (7)].c), "Mesh") && !strcmp((yyvsp[(3) - (7)].c), "View")){
	int index = (int)(yyvsp[(5) - (7)].d);
	if(index >= 0 && index < (int)PView::list.size())
	  GModel::current()->getFields()->setBackgroundMesh(index);
	else
	  yymsg(0, "Unknown view %d", index);
      }
      else
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (7)].c));
#endif
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(2) - (7)].c)); Free((yyvsp[(3) - (7)].c));
    ;}
    break;

  case 275:
#line 3500 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (3)].c), "Sleep")) {
	SleepInSeconds((yyvsp[(2) - (3)].d));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Remesh")) {
	yymsg(0, "Surface remeshing must be reinterfaced");
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "Mesh")) {
	int lock = CTX::instance()->lock;
	CTX::instance()->lock = 0;
        if(GModel::current()->getOCCInternals() &&
           GModel::current()->getOCCInternals()->getChanged())
          GModel::current()->getOCCInternals()->synchronize(GModel::current());
        if(GModel::current()->getGEOInternals()->getChanged())
          GModel::current()->getGEOInternals()->synchronize(GModel::current());
	GModel::current()->mesh((int)(yyvsp[(2) - (3)].d));
	CTX::instance()->lock = lock;
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetOrder")) {
#if defined(HAVE_MESH)
        SetOrderN(GModel::current(), (yyvsp[(2) - (3)].d), CTX::instance()->mesh.secondOrderLinear,
                  CTX::instance()->mesh.secondOrderIncomplete,
                  CTX::instance()->mesh.meshOnlyVisible);
#endif
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "PartitionMesh")) {
        GModel::current()->partitionMesh((yyvsp[(2) - (3)].d));
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SetCurrentWindow")) {
#if defined(HAVE_FLTK)
        FlGui::instance()->setCurrentOpenglWindow((int)(yyvsp[(2) - (3)].d));
#endif
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SplitCurrentWindowHorizontal")) {
#if defined(HAVE_FLTK)
        FlGui::instance()->splitCurrentOpenglWindow('h', (yyvsp[(2) - (3)].d));
#endif
      }
      else if(!strcmp((yyvsp[(1) - (3)].c), "SplitCurrentWindowVertical")) {
#if defined(HAVE_FLTK)
        FlGui::instance()->splitCurrentOpenglWindow('v', (yyvsp[(2) - (3)].d));
#endif
      }
      else {
	yymsg(0, "Unknown command '%s'", (yyvsp[(1) - (3)].c));
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 276:
#line 3549 "Gmsh.y"
    {
#if defined(HAVE_FLTK)
      FlGui::instance()->splitCurrentOpenglWindow('u');
#endif
    ;}
    break;

  case 277:
#line 3555 "Gmsh.y"
    {
#if defined(HAVE_PLUGINS)
       try {
	 PluginManager::instance()->action((yyvsp[(3) - (7)].c), (yyvsp[(6) - (7)].c), 0);
       }
       catch(...) {
	 yymsg(0, "Unknown action '%s' or plugin '%s'", (yyvsp[(6) - (7)].c), (yyvsp[(3) - (7)].c));
       }
#endif
       Free((yyvsp[(3) - (7)].c)); Free((yyvsp[(6) - (7)].c));
     ;}
    break;

  case 278:
#line 3567 "Gmsh.y"
    {
#if defined(HAVE_POST)
      if(!strcmp((yyvsp[(2) - (3)].c), "ElementsFromAllViews"))
	PView::combine(false, 1, CTX::instance()->post.combineRemoveOrig,
                       CTX::instance()->post.combineCopyOptions);
      else if(!strcmp((yyvsp[(2) - (3)].c), "ElementsFromVisibleViews"))
	PView::combine(false, 0, CTX::instance()->post.combineRemoveOrig,
                       CTX::instance()->post.combineCopyOptions);
      else if(!strcmp((yyvsp[(2) - (3)].c), "ElementsByViewName"))
	PView::combine(false, 2, CTX::instance()->post.combineRemoveOrig,
                       CTX::instance()->post.combineCopyOptions);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsFromAllViews"))
	PView::combine(true, 1, CTX::instance()->post.combineRemoveOrig,
                       CTX::instance()->post.combineCopyOptions);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsFromVisibleViews"))
	PView::combine(true, 0, CTX::instance()->post.combineRemoveOrig,
                       CTX::instance()->post.combineCopyOptions);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeStepsByViewName"))
	PView::combine(true, 2, CTX::instance()->post.combineRemoveOrig,
                       CTX::instance()->post.combineCopyOptions);
      else if(!strcmp((yyvsp[(2) - (3)].c), "Views"))
	PView::combine(false, 1, CTX::instance()->post.combineRemoveOrig,
                       CTX::instance()->post.combineCopyOptions);
      else if(!strcmp((yyvsp[(2) - (3)].c), "TimeSteps"))
	PView::combine(true, 2, CTX::instance()->post.combineRemoveOrig,
                       CTX::instance()->post.combineCopyOptions);
      else
	yymsg(0, "Unknown 'Combine' command");
#endif
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 279:
#line 3599 "Gmsh.y"
    {
      Msg::Exit(0);
    ;}
    break;

  case 280:
#line 3603 "Gmsh.y"
    {
      gmsh_yyerrorstate = 999; // this will be checked when yyparse returns
      YYABORT;
    ;}
    break;

  case 281:
#line 3608 "Gmsh.y"
    {
      // force sync
      if(GModel::current()->getOCCInternals())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      GModel::current()->getGEOInternals()->synchronize(GModel::current());
    ;}
    break;

  case 282:
#line 3615 "Gmsh.y"
    {
      new GModel();
      GModel::current(GModel::list.size() - 1);
    ;}
    break;

  case 283:
#line 3620 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 0;
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      SetBoundingBox();
    ;}
    break;

  case 284:
#line 3630 "Gmsh.y"
    {
      CTX::instance()->forcedBBox = 1;
      SetBoundingBox((yyvsp[(3) - (15)].d), (yyvsp[(5) - (15)].d), (yyvsp[(7) - (15)].d), (yyvsp[(9) - (15)].d), (yyvsp[(11) - (15)].d), (yyvsp[(13) - (15)].d));
    ;}
    break;

  case 285:
#line 3635 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
      drawContext::global()->draw();
#endif
    ;}
    break;

  case 286:
#line 3641 "Gmsh.y"
    {
#if defined(HAVE_OPENGL)
     CTX::instance()->mesh.changed = ENT_ALL;
     for(std::size_t index = 0; index < PView::list.size(); index++)
       PView::list[index]->setChanged(true);
#endif
    ;}
    break;

  case 287:
#line 3649 "Gmsh.y"
    {
      if((yyvsp[(3) - (7)].d)) {
        GModel::current()->makeDiscreteRegionsSimplyConnected();
        GModel::current()->makeDiscreteFacesSimplyConnected();
      }
      GModel::current()->createTopologyFromMesh();
      if((yyvsp[(5) - (7)].d)) {
        GModel::current()->exportDiscreteGEOInternals();
      }
    ;}
    break;

  case 288:
#line 3660 "Gmsh.y"
    {
      GModel::current()->makeDiscreteRegionsSimplyConnected();
      GModel::current()->makeDiscreteFacesSimplyConnected();
      GModel::current()->createTopologyFromMesh();
      // Warning: this clears GEO_Internals!
      GModel::current()->exportDiscreteGEOInternals();
    ;}
    break;

  case 289:
#line 3668 "Gmsh.y"
    {
      GModel::current()->classifySurfaces((yyvsp[(3) - (9)].d), (yyvsp[(5) - (9)].d), (yyvsp[(7) - (9)].d), M_PI);
    ;}
    break;

  case 290:
#line 3672 "Gmsh.y"
    {
      GModel::current()->classifySurfaces((yyvsp[(3) - (11)].d), (yyvsp[(5) - (11)].d), (yyvsp[(7) - (11)].d), (yyvsp[(9) - (11)].d));
    ;}
    break;

  case 291:
#line 3676 "Gmsh.y"
    {
      GModel::current()->createGeometryOfDiscreteEntities();
    ;}
    break;

  case 292:
#line 3680 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > dimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (4)].l), dimTags);
      GModel::current()->createGeometryOfDiscreteEntities(dimTags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 293:
#line 3687 "Gmsh.y"
    {
      GModel::current()->renumberMeshVertices();
    ;}
    break;

  case 294:
#line 3691 "Gmsh.y"
    {
      GModel::current()->renumberMeshElements();
    ;}
    break;

  case 295:
#line 3695 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      GModel::current()->refineMesh(CTX::instance()->mesh.secondOrderLinear,
                                    CTX::instance()->mesh.algoSubdivide == 1,
                                    CTX::instance()->mesh.algoSubdivide == 2,
                                    CTX::instance()->mesh.algoSubdivide == 3);
    ;}
    break;

  case 296:
#line 3707 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      GModel::current()->recombineMesh();
    ;}
    break;

  case 297:
#line 3717 "Gmsh.y"
    {
      int lock = CTX::instance()->lock;
      CTX::instance()->lock = 0;
      std::vector<int> technique;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (16)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (16)].l), i, &d);
        technique.push_back((int)d);
      }
      if(technique.empty()){
        yymsg(0, "Need at least one adaptation technique");
      }
      else{
        std::vector<simpleFunction<double>*> f;
        for(int i = 0; i < List_Nbr((yyvsp[(6) - (16)].l)); i++){
          double d;
          List_Read((yyvsp[(6) - (16)].l), i, &d);
          gLevelset *l = gLevelset::find((int)d);
          if(l) f.push_back(l);
          else yymsg(0, "Unknown levelset %d", (int)d);
        }
        if(technique.size() != f.size()){
          yymsg(0, "Number of techniques != number of levelsets");
        }
        else{
          if(List_Nbr((yyvsp[(9) - (16)].l)) != (int)f.size()){
            yymsg(0, "Number of parameters != number of levelsets");
          }
          else{
            std::vector<std::vector<double> > parameters;
            parameters.resize(List_Nbr((yyvsp[(9) - (16)].l)));
            for(int i = 0; i < List_Nbr((yyvsp[(9) - (16)].l)); i++){
              List_T *l = *(List_T**)List_Pointer((yyvsp[(9) - (16)].l), i);
              for(int j = 0; j < List_Nbr(l); j++){
                double d;
                List_Read(l, j, &d);
                parameters[i].push_back(d);
              }
            }
            int niter = (int)(yyvsp[(12) - (16)].d);
            bool meshAll = ((yyvsp[(14) - (16)].d) == 0) ? false : true;
            if(GModel::current()->getOCCInternals() &&
               GModel::current()->getOCCInternals()->getChanged())
              GModel::current()->getOCCInternals()->synchronize(GModel::current());
            if(GModel::current()->getGEOInternals()->getChanged())
              GModel::current()->getGEOInternals()->synchronize(GModel::current());
            GModel::current()->adaptMesh(technique, f, parameters, niter, meshAll);
          }
        }
      }
      List_Delete((yyvsp[(3) - (16)].l));
      List_Delete((yyvsp[(6) - (16)].l));
      for(int i = 0; i < List_Nbr((yyvsp[(9) - (16)].l)); i++)
        List_Delete(*(List_T**)List_Pointer((yyvsp[(9) - (16)].l), i));
      List_Delete((yyvsp[(9) - (16)].l));
      CTX::instance()->lock = lock;
    ;}
    break;

  case 298:
#line 3780 "Gmsh.y"
    {
#if defined(HAVE_POPPLER)
       std::vector<int> is;
       for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
	 double d;
	 List_Read((yyvsp[(4) - (11)].l), i, &d);
	 is.push_back ((int) d);
       }
       gmshPopplerWrapper::instance()->setMacroForPages(is, (yyvsp[(7) - (11)].c), (yyvsp[(9) - (11)].c) );
#endif
     ;}
    break;

  case 299:
#line 3796 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (6)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (6)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = "";
      fgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if((yyvsp[(3) - (6)].d) > (yyvsp[(5) - (6)].d))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
    ;}
    break;

  case 300:
#line 3813 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(3) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(5) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(7) - (8)].d);
      LoopControlVariablesNameTab[ImbricatedLoop] = "";
      fgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if(((yyvsp[(7) - (8)].d) > 0. && (yyvsp[(3) - (8)].d) > (yyvsp[(5) - (8)].d)) || ((yyvsp[(7) - (8)].d) < 0. && (yyvsp[(3) - (8)].d) < (yyvsp[(5) - (8)].d)))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
    ;}
    break;

  case 301:
#line 3830 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (8)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0;
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (8)].c);
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (8)].c)]);
      s.list = false;
      s.value.resize(1);
      s.value[0] = (yyvsp[(5) - (8)].d);
      fgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if((yyvsp[(5) - (8)].d) > (yyvsp[(7) - (8)].d))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
      Free((yyvsp[(2) - (8)].c));
    ;}
    break;

  case 302:
#line 3852 "Gmsh.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = (yyvsp[(5) - (10)].d);
      LoopControlVariablesTab[ImbricatedLoop][1] = (yyvsp[(7) - (10)].d);
      LoopControlVariablesTab[ImbricatedLoop][2] = (yyvsp[(9) - (10)].d);
      LoopControlVariablesNameTab[ImbricatedLoop] = (yyvsp[(2) - (10)].c);
      gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (10)].c)]);
      s.list = false;
      s.value.resize(1);
      s.value[0] = (yyvsp[(5) - (10)].d);
      fgetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = gmsh_yylineno;
      if(((yyvsp[(9) - (10)].d) > 0. && (yyvsp[(5) - (10)].d) > (yyvsp[(7) - (10)].d)) || ((yyvsp[(9) - (10)].d) < 0. && (yyvsp[(5) - (10)].d) < (yyvsp[(7) - (10)].d)))
	skip("For", "EndFor");
      else
	ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS - 1){
	yymsg(0, "Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS - 1;
      }
      Free((yyvsp[(2) - (10)].c));
    ;}
    break;

  case 303:
#line 3874 "Gmsh.y"
    {
      if(ImbricatedLoop <= 0){
	yymsg(0, "Invalid For/EndFor loop");
	ImbricatedLoop = 0;
      }
      else{
	double step = LoopControlVariablesTab[ImbricatedLoop - 1][2];
        std::string name = LoopControlVariablesNameTab[ImbricatedLoop - 1];
        if(name.size()){
          if(!gmsh_yysymbols.count(name))
            yymsg(0, "Unknown loop variable '%s'", name.c_str());
          else{
            gmsh_yysymbol &s(gmsh_yysymbols[name]);
            if(!s.list && s.value.size()){
              s.value[0] += step;
              LoopControlVariablesTab[ImbricatedLoop - 1][0] = s.value[0];
            }
            else
              yymsg(0, "Bad loop variable %s", name.c_str());
          }
        }
        else{
          LoopControlVariablesTab[ImbricatedLoop - 1][0] += step;
        }
	double x0 = LoopControlVariablesTab[ImbricatedLoop - 1][0];
	double x1 = LoopControlVariablesTab[ImbricatedLoop - 1][1];
        if((step > 0. && x0 <= x1) || (step < 0. && x0 >= x1)){
	  fsetpos(gmsh_yyin, &yyposImbricatedLoopsTab[ImbricatedLoop - 1]);
	  gmsh_yylineno = yylinenoImbricatedLoopsTab[ImbricatedLoop - 1];
	}
	else
	  ImbricatedLoop--;
      }
    ;}
    break;

  case 304:
#line 3909 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip(nullptr, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 305:
#line 3917 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->createFunction
         (std::string((yyvsp[(2) - (2)].c)), gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Redefinition of function %s", (yyvsp[(2) - (2)].c));
      skip(nullptr, "Return");
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 306:
#line 3925 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->leaveFunction
         (&gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Error while exiting function");
    ;}
    break;

  case 307:
#line 3931 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function '%s'", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 308:
#line 3938 "Gmsh.y"
    {
      if(!FunctionManager::Instance()->enterFunction
         (std::string((yyvsp[(2) - (3)].c)), &gmsh_yyin, gmsh_yyname, gmsh_yylineno))
	yymsg(0, "Unknown function '%s'", (yyvsp[(2) - (3)].c));
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 309:
#line 3945 "Gmsh.y"
    {
      ImbricatedTest++;
      if(ImbricatedTest > MAX_RECUR_TESTS-1){
	yymsg(0, "Reached maximum number of imbricated tests");
        ImbricatedTest = MAX_RECUR_TESTS-1;
      }

      if((yyvsp[(3) - (4)].d)){
        // Current test is true
        statusImbricatedTests[ImbricatedTest] = 1;
      }
      else{
        statusImbricatedTests[ImbricatedTest] = 0;
        // Go after the next ElseIf or Else or EndIf
        int type_until2 = 0;
        skipTest("If", "EndIf", "ElseIf", 4, &type_until2);
        if(!type_until2) ImbricatedTest--; // EndIf reached
      }
    ;}
    break;

  case 310:
#line 3965 "Gmsh.y"
    {
      if(ImbricatedTest > 0){
        if(statusImbricatedTests[ImbricatedTest]){
          // Last test (If or ElseIf) was true, thus go after EndIf (out of If EndIf)
          skip("If", "EndIf");
          ImbricatedTest--;
        }
        else{
          // Previous test(s) (If and ElseIf) not yet true
          if((yyvsp[(3) - (4)].d)){
            statusImbricatedTests[ImbricatedTest] = 1;
          }
          else{
            // Current test still not true: statusImbricatedTests[ImbricatedTest] = 0;
            // Go after the next ElseIf or Else or EndIf
            int type_until2 = 0;
            skipTest("If", "EndIf", "ElseIf", 4, &type_until2);
            if(!type_until2) ImbricatedTest--;
          }
        }
      }
      else{
	yymsg(0, "Orphan ElseIf");
      }
    ;}
    break;

  case 311:
#line 3991 "Gmsh.y"
    {
      if(ImbricatedTest > 0){
        if(statusImbricatedTests[ImbricatedTest]){
          skip("If", "EndIf");
          ImbricatedTest--;
        }
      }
      else{
	yymsg(0, "Orphan Else");
      }
    ;}
    break;

  case 312:
#line 4003 "Gmsh.y"
    {
      ImbricatedTest--;
      if(ImbricatedTest < 0)
        yymsg(1, "Orphan EndIf");
    ;}
    break;

  case 313:
#line 4014 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (5)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->extrude
          (inDimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], outDimTags);
      }
      else{
        r = GModel::current()->getGEOInternals()->extrude
          (inDimTags, (yyvsp[(2) - (5)].v)[0], (yyvsp[(2) - (5)].v)[1], (yyvsp[(2) - (5)].v)[2], outDimTags);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(4) - (5)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 314:
#line 4032 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (11)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->revolve
          (inDimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d), outDimTags);
      }
      else{
        r = GModel::current()->getGEOInternals()->revolve
          (inDimTags, (yyvsp[(5) - (11)].v)[0], (yyvsp[(5) - (11)].v)[1], (yyvsp[(5) - (11)].v)[2], (yyvsp[(3) - (11)].v)[0], (yyvsp[(3) - (11)].v)[1], (yyvsp[(3) - (11)].v)[2], (yyvsp[(7) - (11)].d), outDimTags);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(10) - (11)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 315:
#line 4050 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(12) - (13)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Twisting extrude not available with OpenCASCADE geometry kernel");
      }
      else{
        r = GModel::current()->getGEOInternals()->twist
          (inDimTags, (yyvsp[(7) - (13)].v)[0], (yyvsp[(7) - (13)].v)[1], (yyvsp[(7) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2],
           (yyvsp[(9) - (13)].d), outDimTags);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(12) - (13)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 316:
#line 4068 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 317:
#line 4074 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(4) - (7)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->extrude
          (inDimTags, (yyvsp[(2) - (7)].v)[0], (yyvsp[(2) - (7)].v)[1], (yyvsp[(2) - (7)].v)[2], outDimTags, &extr);
      }
      else{
        r = GModel::current()->getGEOInternals()->extrude
          (inDimTags, (yyvsp[(2) - (7)].v)[0], (yyvsp[(2) - (7)].v)[1], (yyvsp[(2) - (7)].v)[2], outDimTags, &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(4) - (7)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 318:
#line 4092 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 319:
#line 4098 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(10) - (13)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->revolve
          (inDimTags, (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(7) - (13)].d), outDimTags,
           &extr);
      }
      else{
        r = GModel::current()->getGEOInternals()->revolve
          (inDimTags, (yyvsp[(5) - (13)].v)[0], (yyvsp[(5) - (13)].v)[1], (yyvsp[(5) - (13)].v)[2], (yyvsp[(3) - (13)].v)[0], (yyvsp[(3) - (13)].v)[1], (yyvsp[(3) - (13)].v)[2], (yyvsp[(7) - (13)].d), outDimTags,
           &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(10) - (13)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 320:
#line 4118 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 321:
#line 4124 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(12) - (15)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Twisting extrude not available with OpenCASCADE geometry kernel");
      }
      else{
        r = GModel::current()->getGEOInternals()->twist
          (inDimTags, (yyvsp[(7) - (15)].v)[0], (yyvsp[(7) - (15)].v)[1], (yyvsp[(7) - (15)].v)[2], (yyvsp[(3) - (15)].v)[0], (yyvsp[(3) - (15)].v)[1], (yyvsp[(3) - (15)].v)[2], (yyvsp[(5) - (15)].v)[0], (yyvsp[(5) - (15)].v)[1], (yyvsp[(5) - (15)].v)[2],
           (yyvsp[(9) - (15)].d),  outDimTags, &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(12) - (15)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 322:
#line 4142 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = extr.mesh.Recombine = false;
      extr.mesh.QuadToTri = NO_QUADTRI;
      extr.mesh.ScaleLast = false;
    ;}
    break;

  case 323:
#line 4148 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (6)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        yymsg(0, "Boundary layer extrusion not available with OpenCASCADE geometry kernel");
      }
      else{
        r = GModel::current()->getGEOInternals()->boundaryLayer
          (inDimTags, outDimTags, &extr);
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(3) - (6)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 324:
#line 4165 "Gmsh.y"
    {
      std::vector<std::pair<int, int> > inDimTags, outDimTags;
      ListOfShapes2VectorOfPairs((yyvsp[(3) - (9)].l), inDimTags);
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        r = GModel::current()->getOCCInternals()->addPipe(inDimTags, (int)(yyvsp[(8) - (9)].d), outDimTags);
      }
      else{
        yymsg(0, "Pipe only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not extrude shapes");
      (yyval.l) = (yyvsp[(3) - (9)].l);
      List_Reset((yyval.l));
      VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
    ;}
    break;

  case 325:
#line 4181 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires; ListOfDouble2Vector((yyvsp[(2) - (2)].l), wires);
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (-1, wires, false, false, outDimTags);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add thrusections");
      List_Delete((yyvsp[(2) - (2)].l));
    ;}
    break;

  case 326:
#line 4198 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> wires; ListOfDouble2Vector((yyvsp[(3) - (3)].l), wires);
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->addThruSections
          (-1, wires, false, true, outDimTags);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "ThruSections only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not add ruled thrusections");
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 327:
#line 4216 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> regions, edges;
        ListOfDouble2Vector((yyvsp[(3) - (10)].l), regions); ListOfDouble2Vector((yyvsp[(6) - (10)].l), edges);
        std::vector<double> radii;
        ListOfDouble2Vector((yyvsp[(9) - (10)].l), radii);
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->fillet
          (regions, edges, radii, outDimTags, true);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "Fillet only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not fillet shapes");
      List_Delete((yyvsp[(3) - (10)].l));
      List_Delete((yyvsp[(6) - (10)].l));
      List_Delete((yyvsp[(9) - (10)].l));
    ;}
    break;

  case 328:
#line 4239 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<int> regions, edges, surfaces;
        ListOfDouble2Vector((yyvsp[(3) - (13)].l), regions); ListOfDouble2Vector((yyvsp[(6) - (13)].l), edges);
        ListOfDouble2Vector((yyvsp[(9) - (13)].l), surfaces);
        std::vector<double> distances;
        ListOfDouble2Vector((yyvsp[(12) - (13)].l), distances);
        std::vector<std::pair<int, int> > outDimTags;
        r = GModel::current()->getOCCInternals()->chamfer
          (regions, edges, surfaces, distances, outDimTags, true);
        VectorOfPairs2ListOfShapes(outDimTags, (yyval.l));
      }
      else{
        yymsg(0, "Chamfer only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not chamfer shapes");
      List_Delete((yyvsp[(3) - (13)].l));
      List_Delete((yyvsp[(6) - (13)].l));
      List_Delete((yyvsp[(9) - (13)].l));
      List_Delete((yyvsp[(12) - (13)].l));
    ;}
    break;

  case 329:
#line 4266 "Gmsh.y"
    {
    ;}
    break;

  case 330:
#line 4269 "Gmsh.y"
    {
    ;}
    break;

  case 331:
#line 4275 "Gmsh.y"
    {
      int n = (int)fabs((yyvsp[(3) - (5)].d));
      if(n){ // we accept n==0 to easily disable layers
        extr.mesh.ExtrudeMesh = true;
        extr.mesh.NbLayer = 1;
        extr.mesh.NbElmLayer.clear();
        extr.mesh.hLayer.clear();
        extr.mesh.NbElmLayer.push_back((int)fabs((yyvsp[(3) - (5)].d)));
        extr.mesh.hLayer.push_back(1.);
      }
    ;}
    break;

  case 332:
#line 4287 "Gmsh.y"
    {
      extr.mesh.ExtrudeMesh = true;
      extr.mesh.NbLayer = List_Nbr((yyvsp[(3) - (7)].l));
      if(List_Nbr((yyvsp[(3) - (7)].l)) == List_Nbr((yyvsp[(5) - (7)].l))){
	extr.mesh.NbElmLayer.clear();
	extr.mesh.hLayer.clear();
	for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
	  double d;
	  List_Read((yyvsp[(3) - (7)].l), i, &d);
	  extr.mesh.NbElmLayer.push_back((d > 0) ? (int)d : 1);
	  List_Read((yyvsp[(5) - (7)].l), i, &d);
	  extr.mesh.hLayer.push_back(d);
	}
      }
      else
	yymsg(0, "Wrong layer definition {%d, %d}", List_Nbr((yyvsp[(3) - (7)].l)), List_Nbr((yyvsp[(5) - (7)].l)));
      List_Delete((yyvsp[(3) - (7)].l));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 333:
#line 4307 "Gmsh.y"
    {
      extr.mesh.ScaleLast = true;
    ;}
    break;

  case 334:
#line 4311 "Gmsh.y"
    {
      extr.mesh.Recombine = true;
    ;}
    break;

  case 335:
#line 4315 "Gmsh.y"
    {
      extr.mesh.Recombine = (yyvsp[(2) - (3)].d) ? true : false;
    ;}
    break;

  case 336:
#line 4319 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1;
    ;}
    break;

  case 337:
#line 4323 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_ADDVERTS_1_RECOMB;
    ;}
    break;

  case 338:
#line 4327 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1;
    ;}
    break;

  case 339:
#line 4331 "Gmsh.y"
    {
      extr.mesh.QuadToTri = QUADTRI_NOVERTS_1_RECOMB;
    ;}
    break;

  case 340:
#line 4335 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(6) - (9)].l), tags);
      int num = (int)(yyvsp[(3) - (9)].d);
      GModel::current()->getGEOInternals()->addDiscreteSurface(num);
      extr.mesh.Holes[num].first = (yyvsp[(8) - (9)].d);
      extr.mesh.Holes[num].second = tags;
      List_Delete((yyvsp[(6) - (9)].l));
    ;}
    break;

  case 341:
#line 4344 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (6)].c), "Index"))
        extr.mesh.BoundaryLayerIndex = (yyvsp[(4) - (6)].d);
      else if(!strcmp((yyvsp[(2) - (6)].c), "View"))
        extr.mesh.ViewIndex = (yyvsp[(4) - (6)].d);
      Free((yyvsp[(2) - (6)].c));
    ;}
    break;

  case 342:
#line 4356 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Union; ;}
    break;

  case 343:
#line 4357 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Intersection; ;}
    break;

  case 344:
#line 4358 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Difference; ;}
    break;

  case 345:
#line 4359 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Section; ;}
    break;

  case 346:
#line 4360 "Gmsh.y"
    { (yyval.i) = OCC_Internals::Fragments; ;}
    break;

  case 347:
#line 4364 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 348:
#line 4365 "Gmsh.y"
    { (yyval.i) = 1; ;}
    break;

  case 349:
#line 4366 "Gmsh.y"
    { (yyval.i) = 2; ;}
    break;

  case 350:
#line 4367 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].d) ? 1 : 0; ;}
    break;

  case 351:
#line 4368 "Gmsh.y"
    { (yyval.i) = (yyvsp[(3) - (4)].d) ? 2 : 0; ;}
    break;

  case 352:
#line 4373 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int > > object, tool, out;
        std::vector<std::vector<std::pair<int, int > > > outMap;
        ListOfShapes2VectorOfPairs((yyvsp[(3) - (9)].l), object);
        ListOfShapes2VectorOfPairs((yyvsp[(7) - (9)].l), tool);
        // currently we don't distinguish between Delete and Recursive Delete:
        // we always delete recursively. Let us know if you have examples where
        // having the choice would be interesting
        r = GModel::current()->getOCCInternals()->booleanOperator
          (-1, (OCC_Internals::BooleanOperator)(yyvsp[(1) - (9)].i), object, tool, out, outMap, (yyvsp[(4) - (9)].i), (yyvsp[(8) - (9)].i));
        VectorOfPairs2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "Boolean operators only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could not apply boolean operator");
      List_Delete((yyvsp[(3) - (9)].l));
      List_Delete((yyvsp[(7) - (9)].l));
    ;}
    break;

  case 353:
#line 4396 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(Shape));
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > out;
        std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
        GModel::current()->getOCCInternals()->importShapes(tmp, true, out);
        VectorOfPairs2ListOfShapes(out, (yyval.l));
      }
      else{
        yymsg(0, "ShapeFromFile only available with OpenCASCADE geometry kernel");
      }
      if(!r) yymsg(0, "Could import shape");
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 354:
#line 4416 "Gmsh.y"
    {
      bool r = true;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<std::pair<int, int> > object, tool, out;
        std::vector<std::vector<std::pair<int, int > > > outMap;
        ListOfShapes2VectorOfPairs((yyvsp[(7) - (14)].l), object);
        ListOfShapes2VectorOfPairs((yyvsp[(11) - (14)].l), tool);
        // currently we don't distinguish between Delete and Recursive Delete:
        // we always delete recursively. Let us know if you have examples where
        // having the choice would be interesting
        r = GModel::current()->getOCCInternals()->booleanOperator
          ((int)(yyvsp[(3) - (14)].d), (OCC_Internals::BooleanOperator)(yyvsp[(1) - (14)].i), object, tool, out, outMap, (yyvsp[(8) - (14)].i), (yyvsp[(12) - (14)].i));
      }
      if(!r) yymsg(0, "Could not apply boolean operator");
      List_Delete((yyvsp[(7) - (14)].l));
      List_Delete((yyvsp[(11) - (14)].l));
    ;}
    break;

  case 355:
#line 4437 "Gmsh.y"
    {
      (yyval.v)[0] = (yyval.v)[1] = 1.;
    ;}
    break;

  case 356:
#line 4441 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Progression") || !strcmp((yyvsp[(2) - (3)].c), "Power"))
        (yyval.v)[0] = 1.;
      else if(!strcmp((yyvsp[(2) - (3)].c), "Bump"))
        (yyval.v)[0] = 2.;
      else if(!strcmp((yyvsp[(2) - (3)].c), "Beta"))
        (yyval.v)[0] = 3.;
      else{
        yymsg(0, "Unknown transfinite mesh type");
        (yyval.v)[0] = 1.;
      }
      (yyval.v)[1] = (yyvsp[(3) - (3)].d);
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 357:
#line 4458 "Gmsh.y"
    {
      (yyval.i) = -1; // left
    ;}
    break;

  case 358:
#line 4462 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "Right"))
        (yyval.i) = 1;
      else if(!strcmp((yyvsp[(1) - (1)].c), "Left"))
	(yyval.i) = -1;
      else if(!strcmp((yyvsp[(1) - (1)].c), "AlternateRight"))
	(yyval.i) = 2;
      else if(!strcmp((yyvsp[(1) - (1)].c), "AlternateLeft"))
	(yyval.i) = -2;
      else // "Alternate" -> "Alternate Right"
	(yyval.i) = 2;
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 359:
#line 4478 "Gmsh.y"
    {
     (yyval.l) = List_Create(1, 1, sizeof(double));
   ;}
    break;

  case 360:
#line 4482 "Gmsh.y"
    {
     (yyval.l) = (yyvsp[(2) - (2)].l);
   ;}
    break;

  case 361:
#line 4487 "Gmsh.y"
    {
      (yyval.i) = 45;
    ;}
    break;

  case 362:
#line 4491 "Gmsh.y"
    {
      (yyval.i) = (int)(yyvsp[(2) - (2)].d);
    ;}
    break;

  case 363:
#line 4497 "Gmsh.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(double));
    ;}
    break;

  case 364:
#line 4501 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
    ;}
    break;

  case 365:
#line 4508 "Gmsh.y"
    {
      // mesh sizes at vertices are stored in internal CAD data, as they can be
      // specified during vertex creation and copied around during CAD
      // operations
      List_T *tmp = (yyvsp[(2) - (5)].l);
      if(!(yyvsp[(2) - (5)].l)){
        tmp = List_Create(100, 100, sizeof(double));
        getAllElementaryTags(0, tmp);
      }
      for(int i = 0; i < List_Nbr(tmp); i++){
        double d;
        List_Read(tmp, i, &d);
        int tag = (int)d;
        if(GModel::current()->getOCCInternals())
          GModel::current()->getOCCInternals()->setMeshSize(0, tag, (yyvsp[(4) - (5)].d));
        GModel::current()->getGEOInternals()->setMeshSize(0, tag, (yyvsp[(4) - (5)].d));
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv) gv->setPrescribedMeshSizeAtVertex((yyvsp[(4) - (5)].d));
      }
      List_Delete(tmp);
    ;}
    break;

  case 366:
#line 4531 "Gmsh.y"
    {
      List_T *tmp = (yyvsp[(3) - (6)].l);
      if(!(yyvsp[(3) - (6)].l)){
        tmp = List_Create(100, 100, sizeof(double));
        getAllElementaryTags(0, tmp);
      }
      for(int i = 0; i < List_Nbr(tmp); i++){
        double d;
        List_Read(tmp, i, &d);
        int tag = (int)d;
        if(GModel::current()->getOCCInternals())
          GModel::current()->getOCCInternals()->setMeshSize(0, tag, (yyvsp[(5) - (6)].d));
        GModel::current()->getGEOInternals()->setMeshSize(0, tag, (yyvsp[(5) - (6)].d));
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv) gv->setPrescribedMeshSizeAtVertex((yyvsp[(5) - (6)].d));
      }
      List_Delete(tmp);
    ;}
    break;

  case 367:
#line 4550 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      int type = (int)(yyvsp[(6) - (7)].v)[0];
      double coef = fabs((yyvsp[(6) - (7)].v)[1]);
      int npoints = ((int)(yyvsp[(5) - (7)].d) < 2) ? 2 : (int)(yyvsp[(5) - (7)].d);
      if(!(yyvsp[(3) - (7)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteLine
          (0, npoints, type, coef);
        for(GModel::eiter it = GModel::current()->firstEdge();
            it != GModel::current()->lastEdge(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
          (*it)->meshAttributes.nbPointsTransfinite = npoints;
          (*it)->meshAttributes.typeTransfinite = type;
          (*it)->meshAttributes.coeffTransfinite = coef;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (7)].l), i, &d);
          int j = (int)fabs(d);
          for(int sig = -1; sig <= 1; sig += 2){
            GModel::current()->getGEOInternals()->setTransfiniteLine
              (sig * j, npoints, type * gmsh_sign(d), coef);
            GEdge *ge = GModel::current()->getEdgeByTag(sig * j);
            if(ge){
              ge->meshAttributes.method = MESH_TRANSFINITE;
              ge->meshAttributes.nbPointsTransfinite = npoints;
              ge->meshAttributes.typeTransfinite = type * gmsh_sign(d);
              ge->meshAttributes.coeffTransfinite = coef;
            }
          }
        }
        List_Delete((yyvsp[(3) - (7)].l));
      }
    ;}
    break;

  case 368:
#line 4591 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      std::vector<int> corners; ListOfDouble2Vector((yyvsp[(4) - (6)].l), corners);
      if(!(yyvsp[(3) - (6)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteSurface(0, (yyvsp[(5) - (6)].i), corners);
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
          (*it)->meshAttributes.transfiniteArrangement = (yyvsp[(5) - (6)].i);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (6)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteSurface(tag, (yyvsp[(5) - (6)].i), corners);
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf){
            gf->meshAttributes.method = MESH_TRANSFINITE;
            gf->meshAttributes.transfiniteArrangement = (yyvsp[(5) - (6)].i);
            if(corners.empty() || corners.size() == 3 || corners.size() == 4){
              for(std::size_t j = 0; j < corners.size(); j++){
                GVertex *gv = GModel::current()->getVertexByTag(corners[j]);
                if(gv)
                  gf->meshAttributes.corners.push_back(gv);
                else
                  yymsg(0, "Unknown model point with tag %d", corners[j]);
              }
            }
            else{
              yymsg(0, "Transfinite surface requires 3 or 4 corners vertices");
            }
          }
        }
        List_Delete((yyvsp[(3) - (6)].l));
      }
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 369:
#line 4635 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      std::vector<int> corners; ListOfDouble2Vector((yyvsp[(4) - (5)].l), corners);
      if(!(yyvsp[(3) - (5)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteVolume(0, corners);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++){
          (*it)->meshAttributes.method = MESH_TRANSFINITE;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (5)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteVolume(tag, corners);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr){
            gr->meshAttributes.method = MESH_TRANSFINITE;
            if(corners.empty() || corners.size() == 6 || corners.size() == 8){
              for(std::size_t i = 0; i < corners.size(); i++){
                GVertex *gv = GModel::current()->getVertexByTag(corners[i]);
                if(gv)
                  gr->meshAttributes.corners.push_back(gv);
                else
                  yymsg(0, "Unknown model point with tag %d", corners[i]);
              }
            }
          }
        }
        List_Delete((yyvsp[(3) - (5)].l));
      }
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 370:
#line 4674 "Gmsh.y"
    {
      // transfinite constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(2) - (3)].l)){
        GModel::current()->getGEOInternals()->setTransfiniteVolumeQuadTri(0);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++)
          (*it)->meshAttributes.QuadTri = TRANSFINITE_QUADTRI_1;
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(2) - (3)].l)); i++){
          double d;
          List_Read((yyvsp[(2) - (3)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setTransfiniteVolumeQuadTri(tag);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr) gr->meshAttributes.QuadTri = TRANSFINITE_QUADTRI_1;
        }
        List_Delete((yyvsp[(2) - (3)].l));
      }
    ;}
    break;

  case 371:
#line 4699 "Gmsh.y"
    {
      int dim = (int)(yyvsp[(2) - (8)].i);
      int tag = (int)(yyvsp[(4) - (8)].d);
      GEntity *ge = GModel::current()->getEntityByTag(dim, tag);
      if(ge){
	int new_tag = (int)(yyvsp[(6) - (8)].d);
	ge->setTag(new_tag);
      }
      else{
	yymsg(0, "Unknown model entity of dimension %d and tag %d", dim, tag);
      }
    ;}
    break;

  case 372:
#line 4712 "Gmsh.y"
    {
      int dim = (int)(yyvsp[(2) - (6)].i);
      int tag = (int)(yyvsp[(4) - (6)].d);
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->setMaxTag(dim, tag);
      }
      else {
        GModel::current()->getGEOInternals()->setMaxTag(dim, tag);
      }
    ;}
    break;

  case 373:
#line 4723 "Gmsh.y"
    {
      // mesh algorithm constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (8)].l)); i++){
        double d;
        List_Read((yyvsp[(4) - (8)].l), i, &d);
        int tag = (int)d;
        GModel::current()->getGEOInternals()->setMeshAlgorithm(2, tag, (int)(yyvsp[(7) - (8)].d));
        GFace *gf = GModel::current()->getFaceByTag(tag);
        if(gf) gf->setMeshingAlgo((int)(yyvsp[(7) - (8)].d));
      }
      List_Delete((yyvsp[(4) - (8)].l));
    ;}
    break;

  case 374:
#line 4740 "Gmsh.y"
    {
      // lcExtendFromBoundary onstraints are stored in GEO internals in addition
      // to GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      for(int i = 0; i < List_Nbr((yyvsp[(4) - (8)].l)); i++){
        double d;
        List_Read((yyvsp[(4) - (8)].l), i, &d);
        int tag = (int)d;
        GModel::current()->getGEOInternals()->setMeshSizeFromBoundary(2, tag, (int)(yyvsp[(7) - (8)].d));
        GFace *gf = GModel::current()->getFaceByTag(tag);
        if(gf) gf->setMeshSizeFromBoundary((int)(yyvsp[(7) - (8)].d));
      }
      List_Delete((yyvsp[(4) - (8)].l));
    ;}
    break;

  case 375:
#line 4757 "Gmsh.y"
    {
      // recombine constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (5)].l)){
        GModel::current()->getGEOInternals()->setRecombine(2, 0, (yyvsp[(4) - (5)].i));
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.recombine = 1;
          (*it)->meshAttributes.recombineAngle = (yyvsp[(4) - (5)].i);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (5)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setRecombine(2, tag, (yyvsp[(4) - (5)].i));
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf){
            gf->meshAttributes.recombine = 1;
            gf->meshAttributes.recombineAngle = (yyvsp[(4) - (5)].i);
          }
        }
        List_Delete((yyvsp[(3) - (5)].l));
      }
    ;}
    break;

  case 376:
#line 4787 "Gmsh.y"
    {
      // recombine constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setRecombine(3, 0, 0.);
        for(GModel::riter it = GModel::current()->firstRegion();
            it != GModel::current()->lastRegion(); it++){
          (*it)->meshAttributes.recombine3D = 1;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setRecombine(3, tag, 0.);
          GRegion *gr = GModel::current()->getRegionByTag(tag);
          if(gr) gr->meshAttributes.recombine3D = 1;
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 377:
#line 4813 "Gmsh.y"
    {
      // smoothing constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (6)].l)){
        GModel::current()->getGEOInternals()->setSmoothing(0, (int)(yyvsp[(5) - (6)].d));
        for(GModel::fiter it = GModel::current()->firstFace();
            it != GModel::current()->lastFace(); it++){
          (*it)->meshAttributes.transfiniteSmoothing = (int)(yyvsp[(5) - (6)].d);
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (6)].l), i, &d);
          int tag = (int)d;
          GModel::current()->getGEOInternals()->setSmoothing(tag, (int)(yyvsp[(5) - (6)].d));
          GFace *gf = GModel::current()->getFaceByTag(tag);
          if(gf) gf->meshAttributes.transfiniteSmoothing = (int)(yyvsp[(5) - (6)].d);
        }
        List_Delete((yyvsp[(3) - (6)].l));
      }
    ;}
    break;

  case 378:
#line 4840 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(4) - (11)].l)) != List_Nbr((yyvsp[(8) - (11)].l))){
        yymsg(0, "Wrong number of curves in periodicity constraint (%d -> %d)",
              List_Nbr((yyvsp[(8) - (11)].l)), List_Nbr((yyvsp[(4) - (11)].l)));
      }
      else{
        std::vector<double> transfo;
        if(List_Nbr((yyvsp[(10) - (11)].l)) != 0) {
          if(List_Nbr((yyvsp[(10) - (11)].l)) < 12){
            yymsg(0, "Affine transformation requires at least 12 entries "
                  "(%d provided)", List_Nbr((yyvsp[(10) - (11)].l)));
          }
          else {
            transfo.resize(List_Nbr((yyvsp[(10) - (11)].l)));
            for(int i = 0; i < List_Nbr((yyvsp[(10) - (11)].l)); i++)
              List_Read((yyvsp[(10) - (11)].l), i, &transfo[i]);
          }
        }
        for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (11)].l), i, &d_master);
          List_Read((yyvsp[(4) - (11)].l), i, &d_slave);
          int j_master = (int)d_master;
          int j_slave  = (int)d_slave;
          addPeriodicEdge(j_slave, j_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 379:
#line 4872 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(4) - (11)].l)) != List_Nbr((yyvsp[(8) - (11)].l))){
        yymsg(0, "Wrong number surfaces in periodicity constraint (%d -> %d)",
              List_Nbr((yyvsp[(8) - (11)].l)), List_Nbr((yyvsp[(4) - (11)].l)));
      }
      else{
        if(List_Nbr((yyvsp[(10) - (11)].l)) < 12){
          // FIXME full automatic case here if List_Nbr($10) == 0)
          yymsg(0, "Affine transformation requires at least 12 entries "
                "(%d provided)", List_Nbr((yyvsp[(10) - (11)].l)));
        }
        else {
          std::vector<double> transfo(16,0);
          for(int i = 0; i < List_Nbr((yyvsp[(10) - (11)].l)); i++)
            List_Read((yyvsp[(10) - (11)].l), i, &transfo[i]);
          for(int i = 0; i < List_Nbr((yyvsp[(4) - (11)].l)); i++){
            double d_master, d_slave;
            List_Read((yyvsp[(8) - (11)].l), i, &d_master);
            List_Read((yyvsp[(4) - (11)].l), i, &d_slave);
            addPeriodicFace(d_slave, d_master, transfo);
          }
        }
      }
      List_Delete((yyvsp[(4) - (11)].l));
      List_Delete((yyvsp[(8) - (11)].l));
    ;}
    break;

  case 380:
#line 4900 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(4) - (18)].l)) != List_Nbr((yyvsp[(8) - (18)].l))){
        yymsg(0, "Wrong number of curves in periodicity constraint (%d -> %d)",
              List_Nbr((yyvsp[(8) - (18)].l)), List_Nbr((yyvsp[(4) - (18)].l)));
      }
      else{
        SPoint3 axis((yyvsp[(12) - (18)].v)[0], (yyvsp[(12) - (18)].v)[1], (yyvsp[(12) - (18)].v)[2]);
        SPoint3 origin((yyvsp[(14) - (18)].v)[0], (yyvsp[(14) - (18)].v)[1], (yyvsp[(14) - (18)].v)[2]);
        double  angle((yyvsp[(16) - (18)].d));
        SPoint3 translation(0, 0, 0);

        std::vector<double> transfo;
        computeAffineTransformation(origin, axis, angle, translation, transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (18)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (18)].l), i, &d_master);
          List_Read((yyvsp[(4) - (18)].l), i, &d_slave);
          addPeriodicEdge(d_slave,d_master,transfo);
        }
      }
      List_Delete((yyvsp[(4) - (18)].l));
      List_Delete((yyvsp[(8) - (18)].l));
    ;}
    break;

  case 381:
#line 4926 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(4) - (18)].l)) != List_Nbr((yyvsp[(8) - (18)].l))){
        yymsg(0, "Wrong number of surfaces in periodicity constraint (%d -> %d)",
              List_Nbr((yyvsp[(8) - (18)].l)), List_Nbr((yyvsp[(4) - (18)].l)));
      }
      else{
        SPoint3 origin((yyvsp[(14) - (18)].v)[0], (yyvsp[(14) - (18)].v)[1], (yyvsp[(14) - (18)].v)[2]);
        SPoint3 axis((yyvsp[(12) - (18)].v)[0], (yyvsp[(12) - (18)].v)[1], (yyvsp[(12) - (18)].v)[2]);
        double  angle((yyvsp[(16) - (18)].d));
        SPoint3 translation(0, 0, 0);

        std::vector<double> transfo;
        computeAffineTransformation(origin, axis, angle, translation, transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (18)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (18)].l), i, &d_master);
          List_Read((yyvsp[(4) - (18)].l), i, &d_slave);
          addPeriodicFace(d_slave, d_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (18)].l));
      List_Delete((yyvsp[(8) - (18)].l));
    ;}
    break;

  case 382:
#line 4952 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(4) - (12)].l)) != List_Nbr((yyvsp[(8) - (12)].l))){
        yymsg(0, "Wrong number of curves in periodicity constraint (%d -> %d)",
              List_Nbr((yyvsp[(8) - (12)].l)), List_Nbr((yyvsp[(4) - (12)].l)));
      }
      else{
        SPoint3 origin(0, 0, 0);
        SPoint3 axis(0, 0, 0);
        double  angle(0);
        SPoint3 translation((yyvsp[(11) - (12)].v)[0], (yyvsp[(11) - (12)].v)[1], (yyvsp[(11) - (12)].v)[2]);

        std::vector<double> transfo;
        computeAffineTransformation(origin, axis, angle, translation, transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (12)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (12)].l), i, &d_master);
          List_Read((yyvsp[(4) - (12)].l), i, &d_slave);
          addPeriodicEdge(d_slave,d_master,transfo);
        }
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(8) - (12)].l));
    ;}
    break;

  case 383:
#line 4978 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(4) - (12)].l)) != List_Nbr((yyvsp[(8) - (12)].l))){
        yymsg(0, "Wrong number of surfaces in periodicity constraint (%d -> %d)",
              List_Nbr((yyvsp[(8) - (12)].l)), List_Nbr((yyvsp[(4) - (12)].l)));
      }
      else{
        SPoint3 origin(0, 0, 0);
        SPoint3 axis(0, 0, 0);
        double  angle(0);
        SPoint3 translation((yyvsp[(11) - (12)].v)[0], (yyvsp[(11) - (12)].v)[1], (yyvsp[(11) - (12)].v)[2]);

        std::vector<double> transfo;
        computeAffineTransformation(origin, axis, angle, translation, transfo);

        for(int i = 0; i < List_Nbr((yyvsp[(4) - (12)].l)); i++){
          double d_master, d_slave;
          List_Read((yyvsp[(8) - (12)].l), i, &d_master);
          List_Read((yyvsp[(4) - (12)].l), i, &d_slave);
          addPeriodicFace(d_slave, d_master, transfo);
        }
      }
      List_Delete((yyvsp[(4) - (12)].l));
      List_Delete((yyvsp[(8) - (12)].l));
    ;}
    break;

  case 384:
#line 5004 "Gmsh.y"
    {
      if(List_Nbr((yyvsp[(5) - (12)].l)) != List_Nbr((yyvsp[(10) - (12)].l))){
        yymsg(0, "Wrong number of surface curves in periodicity constraint (%d -> %d)",
              List_Nbr((yyvsp[(10) - (12)].l)), List_Nbr((yyvsp[(5) - (12)].l)));
      }
      else{
        int j_master = (int)(yyvsp[(8) - (12)].d);
        int j_slave = (int)(yyvsp[(3) - (12)].d);
        std::map<int,int> edgeCounterParts;
        for(int i = 0; i < List_Nbr((yyvsp[(5) - (12)].l)); i++){
          double ds,dm;
          List_Read((yyvsp[(5) - (12)].l),i,&ds);
          List_Read((yyvsp[(10) - (12)].l),i,&dm);
          edgeCounterParts[(int) ds] = (int) dm;
        }
        addPeriodicFace(j_slave, j_master, edgeCounterParts);
      }
      List_Delete((yyvsp[(5) - (12)].l));
      List_Delete((yyvsp[(10) - (12)].l));
    ;}
    break;

  case 385:
#line 5025 "Gmsh.y"
    {
      if(((yyvsp[(6) - (10)].i) == 2 || (yyvsp[(6) - (10)].i) == 3) && (yyvsp[(1) - (10)].i) < (yyvsp[(6) - (10)].i)) {
        std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (10)].l), tags);
        addEmbedded((yyvsp[(1) - (10)].i), tags, (yyvsp[(6) - (10)].i), (int)(yyvsp[(8) - (10)].d));
      }
      else {
        yymsg(0, "Entity of dimension %d cannot be embedded in entity of dimension %d",
              (yyvsp[(1) - (10)].i), (yyvsp[(6) - (10)].i));
      }
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 386:
#line 5037 "Gmsh.y"
    {
      // reverse mesh constraints are stored in GEO internals in addition to
      // GModel, as they can be copied around during GEO operations
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        GModel::current()->getGEOInternals()->setReverseMesh((yyvsp[(2) - (4)].i), 0);
        switch ((yyvsp[(2) - (4)].i)) {
        case 1:
          for(GModel::eiter it = GModel::current()->firstEdge();
              it != GModel::current()->lastEdge(); it++){
            (*it)->meshAttributes.reverseMesh = 1;
          }
          break;
        case 2:
          for(GModel::fiter it = GModel::current()->firstFace();
              it != GModel::current()->lastFace(); it++){
            (*it)->meshAttributes.reverseMesh = 1;
          }
          break;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          int num = (int)d;
          GModel::current()->getGEOInternals()->setReverseMesh((yyvsp[(2) - (4)].i), num);
          switch ((yyvsp[(2) - (4)].i)) {
          case 1:
            {
              GEdge *ge = GModel::current()->getEdgeByTag(num);
              if(ge) ge->meshAttributes.reverseMesh = 1;
            }
            break;
          case 2:
            {
              GFace *gf = GModel::current()->getFaceByTag(num);
              if(gf) gf->meshAttributes.reverseMesh = 1;
            }
            break;
          }
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 387:
#line 5085 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      if(!(yyvsp[(3) - (4)].l)){
        switch ((yyvsp[(2) - (4)].i)) {
        case 0:
          for(GModel::viter it = GModel::current()->firstVertex();
              it != GModel::current()->lastVertex(); it++)
            (*it)->relocateMeshVertices();
          break;
        case 1:
          for(GModel::eiter it = GModel::current()->firstEdge();
              it != GModel::current()->lastEdge(); it++)
            (*it)->relocateMeshVertices();
          break;
        case 2:
          for(GModel::fiter it = GModel::current()->firstFace();
              it != GModel::current()->lastFace(); it++)
            (*it)->relocateMeshVertices();
          break;
        }
      }
      else{
        for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
          double d;
          List_Read((yyvsp[(3) - (4)].l), i, &d);
          switch ((yyvsp[(2) - (4)].i)) {
          case 0:
            {
              GVertex *gv = GModel::current()->getVertexByTag((int)d);
              if(gv) gv->relocateMeshVertices();
            }
            break;
          case 1:
            {
              GEdge *ge = GModel::current()->getEdgeByTag((int)d);
              if(ge) ge->relocateMeshVertices();
            }
            break;
          case 2:
            {
              GFace *gf = GModel::current()->getFaceByTag((int)d);
              if(gf) gf->relocateMeshVertices();
            }
            break;
          }
        }
        List_Delete((yyvsp[(3) - (4)].l));
      }
    ;}
    break;

  case 388:
#line 5139 "Gmsh.y"
    {
      if(GModel::current()->getOCCInternals() &&
         GModel::current()->getOCCInternals()->getChanged())
        GModel::current()->getOCCInternals()->synchronize(GModel::current());
      if(GModel::current()->getGEOInternals()->getChanged())
        GModel::current()->getGEOInternals()->synchronize(GModel::current());
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (4)].l), i, &d);
        GRegion *gr = GModel::current()->getRegionByTag((int)d);
        if(gr) gr->setOutwardOrientationMeshConstraint();
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 389:
#line 5154 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
	double dnum;
	List_Read((yyvsp[(3) - (4)].l), i, &dnum);
	int num = (int)dnum;
        GModel::current()->getGEOInternals()->setDegenerated(1, num);
        GEdge *ge = GModel::current()->getEdgeByTag(num);
        if(ge) ge->setTooSmall(true);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 390:
#line 5166 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (4)].l), tags);
      GModel::current()->getGEOInternals()->setCompoundMesh((yyvsp[(2) - (4)].i), tags);
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 391:
#line 5172 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(3) - (6)].l), tags);
      tags.push_back(- (int) (yyvsp[(5) - (6)].d));
      GModel::current()->getGEOInternals()->setCompoundMesh((yyvsp[(2) - (6)].i), tags);
      List_Delete((yyvsp[(3) - (6)].l));
    ;}
    break;

  case 392:
#line 5184 "Gmsh.y"
    {
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals())
        GModel::current()->getOCCInternals()->removeAllDuplicates();
      else
        GModel::current()->getGEOInternals()->removeAllDuplicates();
    ;}
    break;

  case 393:
#line 5191 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(2) - (3)].c), "Geometry")){
        if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals())
          GModel::current()->getOCCInternals()->removeAllDuplicates();
        else
          GModel::current()->getGEOInternals()->removeAllDuplicates();
      }
      else if(!strcmp((yyvsp[(2) - (3)].c), "Mesh")){
        GModel::current()->removeDuplicateMeshVertices(CTX::instance()->geom.tolerance);
      }
      else
        yymsg(0, "Unknown coherence command");
      Free((yyvsp[(2) - (3)].c));
    ;}
    break;

  case 394:
#line 5206 "Gmsh.y"
    {
      std::vector<int> tags; ListOfDouble2Vector((yyvsp[(4) - (6)].l), tags);
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals())
        GModel::current()->getOCCInternals()->mergeVertices(tags);
      else
        GModel::current()->getGEOInternals()->mergeVertices(tags);
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 395:
#line 5219 "Gmsh.y"
    { (yyval.c) = (char*)"Homology"; ;}
    break;

  case 396:
#line 5220 "Gmsh.y"
    { (yyval.c) = (char*)"Cohomology"; ;}
    break;

  case 397:
#line 5221 "Gmsh.y"
    { (yyval.c) = (char*)"Betti"; ;}
    break;

  case 398:
#line 5226 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (2)].c), domain, subdomain, dim);
    ;}
    break;

  case 399:
#line 5232 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (5)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (5)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (5)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(3) - (5)].l));
    ;}
    break;

  case 400:
#line 5244 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (7)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (7)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(5) - (7)].l)); i++){
        double d;
        List_Read((yyvsp[(5) - (7)].l), i, &d);
        subdomain.push_back((int)d);
      }
      for(int i = 0; i < 4; i++) dim.push_back(i);
      GModel::current()->addHomologyRequest((yyvsp[(1) - (7)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(3) - (7)].l));
      List_Delete((yyvsp[(5) - (7)].l));
    ;}
    break;

  case 401:
#line 5262 "Gmsh.y"
    {
      std::vector<int> domain, subdomain, dim;
      for(int i = 0; i < List_Nbr((yyvsp[(6) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(6) - (10)].l), i, &d);
        domain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(8) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(8) - (10)].l), i, &d);
        subdomain.push_back((int)d);
      }
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (10)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (10)].l), i, &d);
        dim.push_back((int)d);
      }
      GModel::current()->addHomologyRequest((yyvsp[(1) - (10)].c), domain, subdomain, dim);
      List_Delete((yyvsp[(6) - (10)].l));
      List_Delete((yyvsp[(8) - (10)].l));
      List_Delete((yyvsp[(3) - (10)].l));
    ;}
    break;

  case 402:
#line 5289 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d);           ;}
    break;

  case 403:
#line 5290 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (3)].d);           ;}
    break;

  case 404:
#line 5291 "Gmsh.y"
    { (yyval.d) = -(yyvsp[(2) - (2)].d);          ;}
    break;

  case 405:
#line 5292 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (2)].d);           ;}
    break;

  case 406:
#line 5293 "Gmsh.y"
    { (yyval.d) = !(yyvsp[(2) - (2)].d);          ;}
    break;

  case 407:
#line 5294 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d);      ;}
    break;

  case 408:
#line 5295 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d);      ;}
    break;

  case 409:
#line 5296 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d);      ;}
    break;

  case 410:
#line 5298 "Gmsh.y"
    {
      if(!(yyvsp[(3) - (3)].d))
	yymsg(0, "Division by zero in '%g / %g'", (yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));
      else
	(yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d);
    ;}
    break;

  case 411:
#line 5304 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) | (int)(yyvsp[(3) - (3)].d); ;}
    break;

  case 412:
#line 5305 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) & (int)(yyvsp[(3) - (3)].d); ;}
    break;

  case 413:
#line 5306 "Gmsh.y"
    { (yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d); ;}
    break;

  case 414:
#line 5307 "Gmsh.y"
    { (yyval.d) = pow((yyvsp[(1) - (3)].d), (yyvsp[(3) - (3)].d));  ;}
    break;

  case 415:
#line 5308 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d);      ;}
    break;

  case 416:
#line 5309 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d);      ;}
    break;

  case 417:
#line 5310 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 418:
#line 5311 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d);     ;}
    break;

  case 419:
#line 5312 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d);     ;}
    break;

  case 420:
#line 5313 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d);     ;}
    break;

  case 421:
#line 5314 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d);     ;}
    break;

  case 422:
#line 5315 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d);     ;}
    break;

  case 423:
#line 5316 "Gmsh.y"
    { (yyval.d) = ((int)(yyvsp[(1) - (3)].d) >> (int)(yyvsp[(3) - (3)].d)); ;}
    break;

  case 424:
#line 5317 "Gmsh.y"
    { (yyval.d) = ((int)(yyvsp[(1) - (3)].d) << (int)(yyvsp[(3) - (3)].d)); ;}
    break;

  case 425:
#line 5318 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (5)].d) ? (yyvsp[(3) - (5)].d) : (yyvsp[(5) - (5)].d); ;}
    break;

  case 426:
#line 5319 "Gmsh.y"
    { (yyval.d) = exp((yyvsp[(3) - (4)].d));      ;}
    break;

  case 427:
#line 5320 "Gmsh.y"
    { (yyval.d) = log((yyvsp[(3) - (4)].d));      ;}
    break;

  case 428:
#line 5321 "Gmsh.y"
    { (yyval.d) = log10((yyvsp[(3) - (4)].d));    ;}
    break;

  case 429:
#line 5322 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (4)].d));     ;}
    break;

  case 430:
#line 5323 "Gmsh.y"
    { (yyval.d) = sin((yyvsp[(3) - (4)].d));      ;}
    break;

  case 431:
#line 5324 "Gmsh.y"
    { (yyval.d) = asin((yyvsp[(3) - (4)].d));     ;}
    break;

  case 432:
#line 5325 "Gmsh.y"
    { (yyval.d) = cos((yyvsp[(3) - (4)].d));      ;}
    break;

  case 433:
#line 5326 "Gmsh.y"
    { (yyval.d) = acos((yyvsp[(3) - (4)].d));     ;}
    break;

  case 434:
#line 5327 "Gmsh.y"
    { (yyval.d) = tan((yyvsp[(3) - (4)].d));      ;}
    break;

  case 435:
#line 5328 "Gmsh.y"
    { (yyval.d) = atan((yyvsp[(3) - (4)].d));     ;}
    break;

  case 436:
#line 5329 "Gmsh.y"
    { (yyval.d) = atan2((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d));;}
    break;

  case 437:
#line 5330 "Gmsh.y"
    { (yyval.d) = sinh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 438:
#line 5331 "Gmsh.y"
    { (yyval.d) = cosh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 439:
#line 5332 "Gmsh.y"
    { (yyval.d) = tanh((yyvsp[(3) - (4)].d));     ;}
    break;

  case 440:
#line 5333 "Gmsh.y"
    { (yyval.d) = fabs((yyvsp[(3) - (4)].d));     ;}
    break;

  case 441:
#line 5334 "Gmsh.y"
    { (yyval.d) = std::abs((yyvsp[(3) - (4)].d)); ;}
    break;

  case 442:
#line 5335 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d));    ;}
    break;

  case 443:
#line 5336 "Gmsh.y"
    { (yyval.d) = ceil((yyvsp[(3) - (4)].d));     ;}
    break;

  case 444:
#line 5337 "Gmsh.y"
    { (yyval.d) = floor((yyvsp[(3) - (4)].d) + 0.5); ;}
    break;

  case 445:
#line 5338 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 446:
#line 5339 "Gmsh.y"
    { (yyval.d) = fmod((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 447:
#line 5340 "Gmsh.y"
    { (yyval.d) = sqrt((yyvsp[(3) - (6)].d) * (yyvsp[(3) - (6)].d) + (yyvsp[(5) - (6)].d) * (yyvsp[(5) - (6)].d)); ;}
    break;

  case 448:
#line 5341 "Gmsh.y"
    { (yyval.d) = (yyvsp[(3) - (4)].d) * (double)rand() / (double)RAND_MAX; ;}
    break;

  case 449:
#line 5342 "Gmsh.y"
    { (yyval.d) = std::max((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 450:
#line 5343 "Gmsh.y"
    { (yyval.d) = std::min((yyvsp[(3) - (6)].d), (yyvsp[(5) - (6)].d)); ;}
    break;

  case 451:
#line 5352 "Gmsh.y"
    { (yyval.d) = (yyvsp[(1) - (1)].d); ;}
    break;

  case 452:
#line 5353 "Gmsh.y"
    { (yyval.d) = 3.141592653589793; ;}
    break;

  case 453:
#line 5354 "Gmsh.y"
    { (yyval.d) = (double)ImbricatedTest; ;}
    break;

  case 454:
#line 5355 "Gmsh.y"
    { (yyval.d) = Msg::GetCommRank(); ;}
    break;

  case 455:
#line 5356 "Gmsh.y"
    { (yyval.d) = Msg::GetCommSize(); ;}
    break;

  case 456:
#line 5357 "Gmsh.y"
    { (yyval.d) = GetGmshMajorVersion(); ;}
    break;

  case 457:
#line 5358 "Gmsh.y"
    { (yyval.d) = GetGmshMinorVersion(); ;}
    break;

  case 458:
#line 5359 "Gmsh.y"
    { (yyval.d) = GetGmshPatchVersion(); ;}
    break;

  case 459:
#line 5360 "Gmsh.y"
    { (yyval.d) = Cpu(); ;}
    break;

  case 460:
#line 5361 "Gmsh.y"
    { (yyval.d) = GetMemoryUsage()/1024./1024.; ;}
    break;

  case 461:
#line 5362 "Gmsh.y"
    { (yyval.d) = TotalRam(); ;}
    break;

  case 462:
#line 5367 "Gmsh.y"
    { init_options(); ;}
    break;

  case 463:
#line 5369 "Gmsh.y"
    {
      std::vector<double> val(1, (yyvsp[(3) - (6)].d));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.d) = val[0];
    ;}
    break;

  case 464:
#line 5375 "Gmsh.y"
    {
      (yyval.d) = (yyvsp[(1) - (1)].d);
    ;}
    break;

  case 465:
#line 5379 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 466:
#line 5384 "Gmsh.y"
    {
      (yyval.d) = Msg::GetOnelabNumber((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 467:
#line 5389 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(1) - (1)].c2).char1, (yyvsp[(1) - (1)].c2).char2);
    ;}
    break;

  case 468:
#line 5394 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float(nullptr, (yyvsp[(1) - (4)].c), 2, (int)(yyvsp[(3) - (4)].d));
    ;}
    break;

  case 469:
#line 5399 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float(nullptr, (yyvsp[(1) - (4)].c), 2, (int)(yyvsp[(3) - (4)].d));
    ;}
    break;

  case 470:
#line 5403 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(3) - (4)].c2).char1, (yyvsp[(3) - (4)].c2).char2, 1, 0, 0., 1);
    ;}
    break;

  case 471:
#line 5407 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(3) - (6)].c2).char1, (yyvsp[(3) - (6)].c2).char2, (yyvsp[(5) - (6)].c), 0, 0., 1);
    ;}
    break;

  case 472:
#line 5411 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(3) - (5)].c2).char1, (yyvsp[(3) - (5)].c2).char2, 1, 0, (yyvsp[(4) - (5)].d), 2);
    ;}
    break;

  case 473:
#line 5415 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(3) - (7)].c2).char1, (yyvsp[(3) - (7)].c2).char2, (yyvsp[(5) - (7)].c), 0, (yyvsp[(6) - (7)].d), 2);
    ;}
    break;

  case 474:
#line 5419 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_Float((yyvsp[(3) - (8)].c2).char1, (yyvsp[(3) - (8)].c2).char2, 2, (int)(yyvsp[(5) - (8)].d), (yyvsp[(7) - (8)].d), 2);
    ;}
    break;

  case 475:
#line 5423 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(3) - (10)].c2).char1, (yyvsp[(3) - (10)].c2).char2, (yyvsp[(5) - (10)].c), (int)(yyvsp[(7) - (10)].d), (yyvsp[(9) - (10)].d), 2);
    ;}
    break;

  case 476:
#line 5427 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.d) = !StatFile(tmp);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 477:
#line 5433 "Gmsh.y"
    {
      if(gmsh_yysymbols.count((yyvsp[(2) - (4)].c))){
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(2) - (4)].c)]);
	(yyval.d) = s.value.size();
      }
      else if(gmsh_yystringsymbols.count((yyvsp[(2) - (4)].c))){
	(yyval.d) = gmsh_yystringsymbols[(yyvsp[(2) - (4)].c)].size();
      }
      else{
        yymsg(0, "Unknown variable '%s'", (yyvsp[(2) - (4)].c));
	(yyval.d) = 0.;
      }
      Free((yyvsp[(2) - (4)].c));
    ;}
    break;

  case 478:
#line 5448 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float_getDim((yyvsp[(2) - (6)].c2).char1, (yyvsp[(2) - (6)].c2).char2, (yyvsp[(4) - (6)].c));
    ;}
    break;

  case 479:
#line 5452 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(3) - (4)].c));
      (yyval.d) = (double)gmsh_yynamespaces[struct_namespace].size();
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 480:
#line 5458 "Gmsh.y"
    {
      std::string struct_namespace(std::string(""));
      (yyval.d) = (double)gmsh_yynamespaces[struct_namespace].size();
    ;}
    break;

  case 481:
#line 5463 "Gmsh.y"
    {
      if(!gmsh_yysymbols.count((yyvsp[(1) - (2)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (2)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (2)].c)]);
        if(s.value.empty()){
          yymsg(0, "Uninitialized variable '%s'", (yyvsp[(1) - (2)].c));
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[0];
          s.value[0] += (yyvsp[(2) - (2)].i);
        }
      }
      Free((yyvsp[(1) - (2)].c));
    ;}
    break;

  case 482:
#line 5482 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 483:
#line 5502 "Gmsh.y"
    {
      int index = (int)(yyvsp[(3) - (5)].d);
      if(!gmsh_yysymbols.count((yyvsp[(1) - (5)].c))){
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (5)].c));
	(yyval.d) = 0.;
      }
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (5)].c)]);
        if((int)s.value.size() < index + 1){
          yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (5)].c), index);
          (yyval.d) = 0.;
        }
        else{
          (yyval.d) = s.value[index];
          s.value[index] += (yyvsp[(5) - (5)].i);
        }
      }
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 484:
#line 5523 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float(nullptr, (yyvsp[(1) - (3)].c), (yyvsp[(3) - (3)].c));
    ;}
    break;

  case 485:
#line 5527 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c), (yyvsp[(5) - (5)].c));
    ;}
    break;

  case 486:
#line 5531 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float(nullptr, (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (int)(yyvsp[(5) - (6)].d));
    ;}
    break;

  case 487:
#line 5535 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(1) - (8)].c), (yyvsp[(3) - (8)].c), (yyvsp[(5) - (8)].c), (int)(yyvsp[(7) - (8)].d));
    ;}
    break;

  case 488:
#line 5539 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float(nullptr, (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (int)(yyvsp[(5) - (6)].d));
    ;}
    break;

  case 489:
#line 5543 "Gmsh.y"
    {
      (yyval.d) = treat_Struct_FullName_dot_tSTRING_Float((yyvsp[(1) - (8)].c), (yyvsp[(3) - (8)].c), (yyvsp[(5) - (8)].c), (int)(yyvsp[(7) - (8)].d));
    ;}
    break;

  case 490:
#line 5547 "Gmsh.y"
    {
      NumberOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), (yyval.d));
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 491:
#line 5552 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (4)].c), 0, (yyvsp[(3) - (4)].c), d)){
	d += (yyvsp[(4) - (4)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (4)].c), 0, (yyvsp[(3) - (4)].c), d);
	(yyval.d) = d;
      }
      Free((yyvsp[(1) - (4)].c)); Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 492:
#line 5562 "Gmsh.y"
    {
      double d = 0.;
      if(NumberOption(GMSH_GET, (yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c), d)){
	d += (yyvsp[(7) - (7)].i);
	NumberOption(GMSH_SET|GMSH_GUI, (yyvsp[(1) - (7)].c), (int)(yyvsp[(3) - (7)].d), (yyvsp[(6) - (7)].c), d);
	(yyval.d) = d;
      }
      Free((yyvsp[(1) - (7)].c)); Free((yyvsp[(6) - (7)].c));
    ;}
    break;

  case 493:
#line 5572 "Gmsh.y"
    {
      (yyval.d) = Msg::GetValue((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].d));
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 494:
#line 5577 "Gmsh.y"
    {
      int matches = 0;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (6)].l)); i++){
        double d;
        List_Read((yyvsp[(3) - (6)].l), i, &d);
        matches += List_Search((yyvsp[(5) - (6)].l), &d, fcmp_double);
      }
      (yyval.d) = matches;
      Free((yyvsp[(3) - (6)].l)); Free((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 495:
#line 5588 "Gmsh.y"
    {
      std::string s((yyvsp[(3) - (6)].c)), substr((yyvsp[(5) - (6)].c));
      if(s.find(substr) != std::string::npos)
        (yyval.d) = 1.;
      else
        (yyval.d) = 0.;
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 496:
#line 5597 "Gmsh.y"
    {
      (yyval.d) = strlen((yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 497:
#line 5602 "Gmsh.y"
    {
      (yyval.d) = strcmp((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      Free((yyvsp[(3) - (6)].c)); Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 498:
#line 5607 "Gmsh.y"
    {
      int align = 0, font = 0, fontsize = CTX::instance()->glFontSize;
      if(List_Nbr((yyvsp[(3) - (4)].l)) % 2){
        yymsg(0, "Number of text attributes should be even");
      }
      else{
        for(int i = 0 ; i < List_Nbr((yyvsp[(3) - (4)].l)); i += 2){
          char *s1, *s2; List_Read((yyvsp[(3) - (4)].l), i, &s1); List_Read((yyvsp[(3) - (4)].l), i + 1, &s2);
          std::string key(s1), val(s2);
          Free(s1); Free(s2);
#if defined(HAVE_OPENGL)
          if(key == "Font")
            font = drawContext::global()->getFontIndex(val.c_str());
          else if(key == "FontSize")
            fontsize = atoi(val.c_str());
          else if(key == "Align")
            align = drawContext::global()->getFontAlign(val.c_str());
#endif
        }
      }
      List_Delete((yyvsp[(3) - (4)].l));
      (yyval.d) = (double)((align<<16)|(font<<8)|(fontsize));
    ;}
    break;

  case 499:
#line 5634 "Gmsh.y"
    { (yyval.d) = 0.; ;}
    break;

  case 500:
#line 5636 "Gmsh.y"
    { (yyval.d) = (yyvsp[(2) - (2)].d);;}
    break;

  case 501:
#line 5641 "Gmsh.y"
    { (yyval.c) = nullptr; ;}
    break;

  case 502:
#line 5643 "Gmsh.y"
    { (yyval.c) = (yyvsp[(2) - (2)].c);;}
    break;

  case 503:
#line 5648 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(2) - (3)].c2).char1? (yyvsp[(2) - (3)].c2).char1 : std::string("")),
        struct_name((yyvsp[(2) - (3)].c2).char2);
      init_options
        (gmsh_yynamespaces.getMember_ValMax(struct_namespace, struct_name));
    ;}
    break;

  case 504:
#line 5655 "Gmsh.y"
    {
      std::string struct_namespace((yyvsp[(2) - (7)].c2).char1? (yyvsp[(2) - (7)].c2).char1 : std::string("")),
        struct_name((yyvsp[(2) - (7)].c2).char2);
      Free((yyvsp[(2) - (7)].c2).char1); Free((yyvsp[(2) - (7)].c2).char2);
      int tag_out;
      if(gmsh_yynamespaces.defStruct(struct_namespace, struct_name,
                                      floatOptions, charOptions,
                                      tag_out, member_ValMax, (yyvsp[(3) - (7)].i)))
        yymsg(0, "Redefinition of Struct '%s::%s'",
              struct_namespace.c_str(), struct_name.c_str());
      (yyval.d) = (double)tag_out;
    ;}
    break;

  case 505:
#line 5671 "Gmsh.y"
    { (yyval.c2).char1 = nullptr; (yyval.c2).char2 = (yyvsp[(1) - (1)].c); ;}
    break;

  case 506:
#line 5673 "Gmsh.y"
    { (yyval.c2).char1 = (yyvsp[(1) - (3)].c); (yyval.c2).char2 = (yyvsp[(3) - (3)].c); ;}
    break;

  case 507:
#line 5678 "Gmsh.y"
    { (yyval.i) = 99; ;}
    break;

  case 508:
#line 5680 "Gmsh.y"
    { (yyval.i) = (int)(yyvsp[(2) - (2)].d); ;}
    break;

  case 509:
#line 5685 "Gmsh.y"
    { (yyval.i) = 0; ;}
    break;

  case 510:
#line 5687 "Gmsh.y"
    { (yyval.i) = (yyvsp[(2) - (3)].i); ;}
    break;

  case 511:
#line 5692 "Gmsh.y"
    {
      memcpy((yyval.v), (yyvsp[(1) - (1)].v), 5*sizeof(double));
    ;}
    break;

  case 512:
#line 5696 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = -(yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 513:
#line 5700 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(2) - (2)].v)[i];
    ;}
    break;

  case 514:
#line 5704 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] - (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 515:
#line 5708 "Gmsh.y"
    {
      for(int i = 0; i < 5; i++) (yyval.v)[i] = (yyvsp[(1) - (3)].v)[i] + (yyvsp[(3) - (3)].v)[i];
    ;}
    break;

  case 516:
#line 5715 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (11)].d);  (yyval.v)[1] = (yyvsp[(4) - (11)].d);  (yyval.v)[2] = (yyvsp[(6) - (11)].d);  (yyval.v)[3] = (yyvsp[(8) - (11)].d); (yyval.v)[4] = (yyvsp[(10) - (11)].d);
    ;}
    break;

  case 517:
#line 5719 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (9)].d);  (yyval.v)[1] = (yyvsp[(4) - (9)].d);  (yyval.v)[2] = (yyvsp[(6) - (9)].d);  (yyval.v)[3] = (yyvsp[(8) - (9)].d); (yyval.v)[4] = 1.0;
    ;}
    break;

  case 518:
#line 5723 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 519:
#line 5727 "Gmsh.y"
    {
      (yyval.v)[0] = (yyvsp[(2) - (7)].d);  (yyval.v)[1] = (yyvsp[(4) - (7)].d);  (yyval.v)[2] = (yyvsp[(6) - (7)].d);  (yyval.v)[3] = 0.0; (yyval.v)[4] = 1.0;
    ;}
    break;

  case 520:
#line 5734 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(List_T*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].l)));
    ;}
    break;

  case 521:
#line 5739 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].l)));
    ;}
    break;

  case 522:
#line 5746 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 523:
#line 5751 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 524:
#line 5755 "Gmsh.y"
    {
      // creates an empty list
      (yyval.l) = List_Create(2, 1, sizeof(double));
    ;}
    break;

  case 525:
#line 5760 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 526:
#line 5764 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 527:
#line 5772 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (5)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (5)].d);
      }
    ;}
    break;

  case 528:
#line 5783 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 529:
#line 5787 "Gmsh.y"
    {
      (yyval.l) = 0;
    ;}
    break;

  case 530:
#line 5791 "Gmsh.y"
    {
      if(!strcmp((yyvsp[(1) - (1)].c), "*") || !strcmp((yyvsp[(1) - (1)].c), "all")){
        (yyval.l) = 0;
      }
      else{
        yyerror("Unknown special string for list replacement");
        (yyval.l) = List_Create(2, 1, sizeof(double));
      }
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 531:
#line 5805 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (2)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) = - (*pd);
      }
    ;}
    break;

  case 532:
#line 5813 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (3)].l);
      for(int i = 0; i < List_Nbr((yyval.l)); i++){
	double *pd = (double*)List_Pointer((yyval.l), i);
	(*pd) *= (yyvsp[(1) - (3)].d);
      }
    ;}
    break;

  case 533:
#line 5821 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      for(double d = (yyvsp[(1) - (3)].d); ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d <= (yyvsp[(3) - (3)].d)) : (d >= (yyvsp[(3) - (3)].d));
          ((yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d)) ? (d += 1.) : (d -= 1.))
	List_Add((yyval.l), &d);
    ;}
    break;

  case 534:
#line 5828 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!(yyvsp[(5) - (5)].d)){  //|| ($1 < $3 && $5 < 0) || ($1 > $3 && $5 > 0)
        yymsg(0, "Wrong increment in '%g:%g:%g'", (yyvsp[(1) - (5)].d), (yyvsp[(3) - (5)].d), (yyvsp[(5) - (5)].d));
      }
      else
	for(double d = (yyvsp[(1) - (5)].d); ((yyvsp[(5) - (5)].d) > 0) ? (d <= (yyvsp[(3) - (5)].d)) : (d >= (yyvsp[(3) - (5)].d)); d += (yyvsp[(5) - (5)].d))
	  List_Add((yyval.l), &d);
   ;}
    break;

  case 535:
#line 5838 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 1, sizeof(double));
      int tag = (int)(yyvsp[(3) - (4)].d);
      double x = 0., y = 0., z = 0.;
      bool found = GModel::current()->getGEOInternals()->getVertex(tag, x, y, z);
      if(!found && GModel::current()->getOCCInternals())
        found = GModel::current()->getOCCInternals()->getVertex(tag, x, y, z);
      if(!found){
        GVertex *gv = GModel::current()->getVertexByTag(tag);
        if(gv){
          x = gv->x();
          y = gv->y();
          z = gv->z();
        }
        else{
          yymsg(0, "Unknown model point with tag %d", tag);
        }
      }
      List_Add((yyval.l), &x);
      List_Add((yyval.l), &y);
      List_Add((yyval.l), &z);
    ;}
    break;

  case 536:
#line 5861 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(0, (yyval.l));
    ;}
    break;

  case 537:
#line 5866 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags(0, (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 538:
#line 5872 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags((yyvsp[(1) - (4)].i), (yyval.l));
    ;}
    break;

  case 539:
#line 5877 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getAllElementaryTags((yyvsp[(1) - (2)].i), (yyval.l));
      Free((yyvsp[(2) - (2)].c));
    ;}
    break;

  case 540:
#line 5883 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(!(yyvsp[(3) - (3)].l)){
        getAllPhysicalTags((yyvsp[(2) - (3)].i), (yyval.l));
      }
      else{
        getElementaryTagsForPhysicalGroups((yyvsp[(2) - (3)].i), (yyvsp[(3) - (3)].l), (yyval.l));
        List_Delete((yyvsp[(3) - (3)].l));
      }
    ;}
    break;

  case 541:
#line 5894 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getParentTags((yyvsp[(2) - (3)].i), (yyvsp[(3) - (3)].l), (yyval.l));
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 542:
#line 5900 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      if(List_Nbr((yyvsp[(4) - (4)].l)) < 6) {
        yymsg(0, "Bounding box should be {xmin, ymin, zmin, xmax, ymax, zmax}");
      }
      else {
        double bb[6];
        for(int i = 0; i < 6; i++) List_Read((yyvsp[(4) - (4)].l), i, &bb[i]);
        getElementaryTagsInBoundingBox
          ((yyvsp[(1) - (4)].i), bb[0], bb[1], bb[2], bb[3], bb[4], bb[5], (yyval.l));
      }
      List_Delete((yyvsp[(4) - (4)].l));
    ;}
    break;

  case 543:
#line 5914 "Gmsh.y"
    {
      (yyval.l) = List_Create(10, 10, sizeof(double));
      getBoundingBox((yyvsp[(2) - (5)].i), (yyvsp[(4) - (5)].l), (yyval.l));
      List_Delete((yyvsp[(4) - (5)].l));
    ;}
    break;

  case 544:
#line 5920 "Gmsh.y"
    {
      (yyval.l) = List_Create(1, 1, sizeof(double));
      double m = 0;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->getMass((yyvsp[(2) - (5)].i), (int)(yyvsp[(4) - (5)].d), m);
      }
      else{
        yymsg(0, "Mass only available with OpenCASCADE geometry kernel");
      }
      List_Add((yyval.l), &m);
    ;}
    break;

  case 545:
#line 5932 "Gmsh.y"
    {
      (yyval.l) = List_Create(3, 1, sizeof(double));
      double x = 0., y = 0., z = 0.;
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        GModel::current()->getOCCInternals()->getCenterOfMass((yyvsp[(2) - (5)].i), (int)(yyvsp[(4) - (5)].d), x, y, z);
      }
      else{
        yymsg(0, "CenterOfMass only available with OpenCASCADE geometry kernel");
      }
      List_Add((yyval.l), &x);
      List_Add((yyval.l), &y);
      List_Add((yyval.l), &z);
    ;}
    break;

  case 546:
#line 5946 "Gmsh.y"
    {
      (yyval.l) = List_Create(9, 1, sizeof(double));
      if(gmsh_yyfactory == "OpenCASCADE" && GModel::current()->getOCCInternals()){
        std::vector<double> mat;
        GModel::current()->getOCCInternals()->getMatrixOfInertia((yyvsp[(2) - (5)].i), (int)(yyvsp[(4) - (5)].d), mat);
        for(std::size_t i = 0; i < mat.size(); i++)
          List_Add((yyval.l), &mat[i]);
      }
      else{
        yymsg(0, "MatrixOfInertia only available with OpenCASCADE geometry kernel");
      }
    ;}
    break;

  case 547:
#line 5959 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 548:
#line 5969 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 549:
#line 5979 "Gmsh.y"
    {
      (yyval.l) = List_Create(List_Nbr((yyvsp[(1) - (1)].l)), 1, sizeof(double));
      for(int i = 0; i < List_Nbr((yyvsp[(1) - (1)].l)); i++){
	Shape *s = (Shape*) List_Pointer((yyvsp[(1) - (1)].l), i);
	double d = s->Num;
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(1) - (1)].l));
    ;}
    break;

  case 550:
#line 5989 "Gmsh.y"
    {
      (yyval.l) = List_Create(20, 20, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (3)].c)]);
	for(std::size_t i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 551:
#line 6001 "Gmsh.y"
    {
      (yyval.l) = treat_Struct_FullName_dot_tSTRING_ListOfFloat(nullptr, (yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 552:
#line 6005 "Gmsh.y"
    {
      (yyval.l) = treat_Struct_FullName_dot_tSTRING_ListOfFloat((yyvsp[(1) - (7)].c), (yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].c));
    ;}
    break;

  case 553:
#line 6010 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(3) - (4)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(3) - (4)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(3) - (4)].c)]);
	for(std::size_t i = 0; i < s.value.size(); i++)
	  List_Add((yyval.l), &s.value[i]);
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 554:
#line 6022 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 555:
#line 6026 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 556:
#line 6030 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(4) - (6)].l);
    ;}
    break;

  case 557:
#line 6034 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      if(!gmsh_yysymbols.count((yyvsp[(1) - (6)].c)))
	yymsg(0, "Unknown variable '%s'", (yyvsp[(1) - (6)].c));
      else{
        gmsh_yysymbol &s(gmsh_yysymbols[(yyvsp[(1) - (6)].c)]);
	for(int i = 0; i < List_Nbr((yyvsp[(4) - (6)].l)); i++){
	  int index = (int)(*(double*)List_Pointer_Fast((yyvsp[(4) - (6)].l), i));
	  if((int)s.value.size() < index + 1)
	    yymsg(0, "Uninitialized variable '%s[%d]'", (yyvsp[(1) - (6)].c), index);
	  else
	    List_Add((yyval.l), &s.value[index]);
	}
      }
      Free((yyvsp[(1) - (6)].c));
      List_Delete((yyvsp[(4) - (6)].l));
    ;}
    break;

  case 558:
#line 6052 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = (yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1);
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 559:
#line 6060 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(double));
      for(int i = 0; i < (int)(yyvsp[(7) - (8)].d); i++) {
	double d = pow(10,(yyvsp[(3) - (8)].d) + ((yyvsp[(5) - (8)].d)-(yyvsp[(3) - (8)].d))*(double)i/((yyvsp[(7) - (8)].d)-1));
	List_Add((yyval.l), &d);
      }
    ;}
    break;

  case 560:
#line 6068 "Gmsh.y"
    {
      Msg::Barrier();
      FILE *File;
      (yyval.l) = List_Create(100, 100, sizeof(double));
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      if(!(File = Fopen(tmp.c_str(), "rb"))){
        yymsg(0, "Could not open file '%s'", (yyvsp[(3) - (4)].c));
      }
      else{
	double d;
	while(!feof(File)){
          int ret = fscanf(File, "%lf", &d);
	  if(ret == 1){
	    List_Add((yyval.l), &d);
          }
          else if(ret == EOF){
            break;
          }
          else{
            char dummy[1024];
            if(fscanf(File, "%s", dummy))
              yymsg(0, "Ignoring '%s' in file '%s'", dummy, (yyvsp[(3) - (4)].c));
          }
        }
	fclose(File);
      }
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 561:
#line 6097 "Gmsh.y"
    {
      double x0 = (yyvsp[(3) - (14)].d), x1 = (yyvsp[(5) - (14)].d), y0 = (yyvsp[(7) - (14)].d), y1 = (yyvsp[(9) - (14)].d), ys = (yyvsp[(11) - (14)].d);
      int N = (int)(yyvsp[(13) - (14)].d);
      std::vector<double> y(N);
      if(!catenary(x0, x1, y0, y1, ys, N, &y[0]))
        yymsg(1, "Catenary did not converge, using linear interpolation");
      (yyval.l) = List_Create(N,10,sizeof(double));
      for(int i = 0; i < N; i++) List_Add((yyval.l), &y[i]);
    ;}
    break;

  case 562:
#line 6107 "Gmsh.y"
    {
      std::vector<double> tmp;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        double d; List_Read((yyvsp[(3) - (4)].l), i, &d);
        tmp.push_back(d);
      }
      std::sort(tmp.begin(), tmp.end());
      auto last = std::unique(tmp.begin(), tmp.end());
      tmp.erase(last, tmp.end());
      (yyval.l) = (yyvsp[(3) - (4)].l);
      List_Reset((yyval.l));
      for(std::size_t i = 0; i < tmp.size(); i++){
        List_Add((yyval.l), &tmp[i]);
      }
    ;}
    break;

  case 563:
#line 6123 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        double *d = (double*)List_Pointer((yyvsp[(3) - (4)].l), i);
        *d = std::abs(*d);
      }
      (yyval.l) = (yyvsp[(3) - (4)].l);
    ;}
    break;

  case 564:
#line 6134 "Gmsh.y"
    {
      (yyval.l) = List_Create(2, 1, sizeof(double));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].d)));
    ;}
    break;

  case 565:
#line 6139 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(1) - (1)].l);
    ;}
    break;

  case 566:
#line 6143 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].d)));
    ;}
    break;

  case 567:
#line 6147 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (3)].l)); i++){
	double d;
	List_Read((yyvsp[(3) - (3)].l), i, &d);
	List_Add((yyval.l), &d);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 568:
#line 6159 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (9)].d), (int)(yyvsp[(4) - (9)].d), (int)(yyvsp[(6) - (9)].d), (int)(yyvsp[(8) - (9)].d));
    ;}
    break;

  case 569:
#line 6163 "Gmsh.y"
    {
      (yyval.u) = CTX::instance()->packColor((int)(yyvsp[(2) - (7)].d), (int)(yyvsp[(4) - (7)].d), (int)(yyvsp[(6) - (7)].d), 255);
    ;}
    break;

  case 570:
#line 6175 "Gmsh.y"
    {
      int flag = 0;
      if(gmsh_yystringsymbols.count((yyvsp[(1) - (1)].c))){
        if(gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)].size()){
          (yyval.u) = GetColorForString(-1, gmsh_yystringsymbols[(yyvsp[(1) - (1)].c)][0].c_str(), &flag);
        }
        else{
          yymsg(0, "Unknown color '%s'", (yyvsp[(1) - (1)].c));
          (yyval.u) = 0;
        }
      }
      else
        (yyval.u) = GetColorForString(-1, (yyvsp[(1) - (1)].c), &flag);
      if(flag) yymsg(0, "Unknown color '%s'", (yyvsp[(1) - (1)].c));
      Free((yyvsp[(1) - (1)].c));
    ;}
    break;

  case 571:
#line 6192 "Gmsh.y"
    {
      unsigned int val = 0;
      ColorOption(GMSH_GET, (yyvsp[(1) - (5)].c), 0, (yyvsp[(5) - (5)].c), val);
      (yyval.u) = val;
      Free((yyvsp[(1) - (5)].c)); Free((yyvsp[(5) - (5)].c));
    ;}
    break;

  case 572:
#line 6202 "Gmsh.y"
    {
      (yyval.l) = (yyvsp[(2) - (3)].l);
    ;}
    break;

  case 573:
#line 6206 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      GmshColorTable *ct = GetColorTable((int)(yyvsp[(3) - (6)].d));
      if(!ct)
	yymsg(0, "View[%d] does not exist", (int)(yyvsp[(3) - (6)].d));
      else{
	for(int i = 0; i < ct->size; i++)
	  List_Add((yyval.l), &ct->table[i]);
      }
      Free((yyvsp[(1) - (6)].c));
    ;}
    break;

  case 574:
#line 6221 "Gmsh.y"
    {
      (yyval.l) = List_Create(256, 10, sizeof(unsigned int));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].u)));
    ;}
    break;

  case 575:
#line 6226 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].u)));
    ;}
    break;

  case 576:
#line 6233 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 577:
#line 6237 "Gmsh.y"
    {
      // No need to extend to Struct_FullName (a Tag is not a String)
      (yyval.c) = treat_Struct_FullName_String(nullptr, (yyvsp[(1) - (1)].c));
    ;}
    break;

  case 578:
#line 6242 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 579:
#line 6256 "Gmsh.y"
    {
      std::string val;
      int j = (int)(yyvsp[(3) - (4)].d);
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (4)].c)))
        yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (4)].c));
      else if(j >= 0 && j < (int)gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)].size())
        val = gmsh_yystringsymbols[(yyvsp[(1) - (4)].c)][j];
      else
        yymsg(0, "Index %d out of range", j);
      (yyval.c) = (char *)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(1) - (4)].c));
    ;}
    break;

  case 580:
#line 6270 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String(nullptr, (yyvsp[(1) - (3)].c), (yyvsp[(3) - (3)].c));
    ;}
    break;

  case 581:
#line 6274 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c), (yyvsp[(5) - (5)].c));
    ;}
    break;

  case 582:
#line 6278 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String(nullptr, (yyvsp[(1) - (6)].c), (yyvsp[(3) - (6)].c), (int)(yyvsp[(5) - (6)].d));
    ;}
    break;

  case 583:
#line 6282 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(1) - (8)].c), (yyvsp[(3) - (8)].c), (yyvsp[(5) - (8)].c), (int)(yyvsp[(7) - (8)].d));
    ;}
    break;

  case 584:
#line 6286 "Gmsh.y"
    {
      std::string out;
      StringOption(GMSH_GET, (yyvsp[(1) - (6)].c), (int)(yyvsp[(3) - (6)].d), (yyvsp[(6) - (6)].c), out);
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(1) - (6)].c)); Free((yyvsp[(6) - (6)].c));
    ;}
    break;

  case 585:
#line 6294 "Gmsh.y"
    {
      std::string name = GModel::current()->getElementaryName((yyvsp[(1) - (4)].i), (int)(yyvsp[(3) - (4)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 586:
#line 6300 "Gmsh.y"
    {
      std::string name = GModel::current()->getPhysicalName((yyvsp[(2) - (5)].i), (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char*)Malloc((name.size() + 1) * sizeof(char));
      strcpy((yyval.c), name.c_str());
    ;}
    break;

  case 587:
#line 6309 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(1) - (1)].c);
    ;}
    break;

  case 588:
#line 6313 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 589:
#line 6317 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc(32 * sizeof(char));
      time_t now;
      time(&now);
      strcpy((yyval.c), ctime(&now));
      (yyval.c)[strlen((yyval.c)) - 1] = '\0';
    ;}
    break;

  case 590:
#line 6325 "Gmsh.y"
    {
      std::string exe = Msg::GetExecutableName();
      (yyval.c) = (char *)Malloc(exe.size() + 1);
      strcpy((yyval.c), exe.c_str());
    ;}
    break;

  case 591:
#line 6331 "Gmsh.y"
    {
      std::string action = Msg::GetOnelabAction();
      (yyval.c) = (char *)Malloc(action.size() + 1);
      strcpy((yyval.c), action.c_str());
    ;}
    break;

  case 592:
#line 6337 "Gmsh.y"
    {
      (yyval.c) = strsave((char*)"Gmsh");
    ;}
    break;

  case 593:
#line 6341 "Gmsh.y"
    {
      std::string env = GetEnvironmentVar((yyvsp[(3) - (4)].c));
      (yyval.c) = (char *)Malloc((env.size() + 1) * sizeof(char));
      strcpy((yyval.c), env.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 594:
#line 6348 "Gmsh.y"
    {
      std::string s = Msg::GetString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 595:
#line 6356 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (4)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 596:
#line 6363 "Gmsh.y"
    {
      std::string s = Msg::GetOnelabString((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].c));
      (yyval.c) = (char *)Malloc((s.size() + 1) * sizeof(char));
      strcpy((yyval.c), s.c_str());
      Free((yyvsp[(3) - (6)].c));
      Free((yyvsp[(5) - (6)].c));
    ;}
    break;

  case 597:
#line 6372 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_String(nullptr, (yyvsp[(3) - (5)].c2).char2, 1, 0, (yyvsp[(4) - (5)].c), 2);
    ;}
    break;

  case 598:
#line 6376 "Gmsh.y"
    {
      (yyval.c) = treat_Struct_FullName_dot_tSTRING_String((yyvsp[(3) - (7)].c2).char1, (yyvsp[(3) - (7)].c2).char2, (yyvsp[(5) - (7)].c), 0, (yyvsp[(6) - (7)].c), 2);
    ;}
    break;

  case 599:
#line 6380 "Gmsh.y"
    {
      int size = 1;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        size += strlen(*(char**)List_Pointer((yyvsp[(3) - (4)].l), i)) + 1;
      (yyval.c) = (char*)Malloc(size * sizeof(char));
      (yyval.c)[0] = '\0';
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        strcat((yyval.c), s);
        Free(s);
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 600:
#line 6395 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (4)].c)) + 1) * sizeof(char));
      int i;
      for(i = strlen((yyvsp[(3) - (4)].c)) - 1; i >= 0; i--){
	if((yyvsp[(3) - (4)].c)[i] == '.'){
	  strncpy((yyval.c), (yyvsp[(3) - (4)].c), i);
	  (yyval.c)[i]='\0';
	  break;
	}
      }
      if(i <= 0) strcpy((yyval.c), (yyvsp[(3) - (4)].c));
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 601:
#line 6409 "Gmsh.y"
    {
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (4)].c)) + 1) * sizeof(char));
      int i;
      for(i = strlen((yyvsp[(3) - (4)].c)) - 1; i >= 0; i--){
	if((yyvsp[(3) - (4)].c)[i] == '/' || (yyvsp[(3) - (4)].c)[i] == '\\')
	  break;
      }
      if(i <= 0)
	strcpy((yyval.c), (yyvsp[(3) - (4)].c));
      else
	strcpy((yyval.c), &(yyvsp[(3) - (4)].c)[i+1]);
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 602:
#line 6423 "Gmsh.y"
    {
      std::string input = (yyvsp[(3) - (8)].c);
      std::string substr_old = (yyvsp[(5) - (8)].c);
      std::string substr_new = (yyvsp[(7) - (8)].c);
      std::string ret = ReplaceSubString(substr_old, substr_new, input);
      (yyval.c) = (char *)Malloc((ret.size() + 1) * sizeof(char));
      strcpy((yyval.c), ret.c_str());
      Free((yyvsp[(3) - (8)].c));
      Free((yyvsp[(5) - (8)].c));
      Free((yyvsp[(7) - (8)].c));
    ;}
    break;

  case 603:
#line 6435 "Gmsh.y"
    {
      int size = 1;
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++)
        size += strlen(*(char**)List_Pointer((yyvsp[(3) - (4)].l), i)) + 1;
      (yyval.c) = (char*)Malloc(size * sizeof(char));
      (yyval.c)[0] = '\0';
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (4)].l)); i++){
        char *s;
        List_Read((yyvsp[(3) - (4)].l), i, &s);
        strcat((yyval.c), s);
        Free(s);
        if(i != List_Nbr((yyvsp[(3) - (4)].l)) - 1) strcat((yyval.c), "\n");
      }
      List_Delete((yyvsp[(3) - (4)].l));
    ;}
    break;

  case 604:
#line 6451 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = toupper((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 605:
#line 6460 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 606:
#line 6469 "Gmsh.y"
    {
      int i = 0;
      while ((yyvsp[(3) - (4)].c)[i]) {
        if(i > 0 && (yyvsp[(3) - (4)].c)[i-1] != '_')
          (yyvsp[(3) - (4)].c)[i] = tolower((yyvsp[(3) - (4)].c)[i]);
        i++;
      }
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 607:
#line 6479 "Gmsh.y"
    {
      if((yyvsp[(3) - (8)].d)){
        (yyval.c) = (yyvsp[(5) - (8)].c);
        Free((yyvsp[(7) - (8)].c));
      }
      else{
        (yyval.c) = (yyvsp[(7) - (8)].c);
        Free((yyvsp[(5) - (8)].c));
      }
    ;}
    break;

  case 608:
#line 6490 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (8)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (8)].d), (int)(yyvsp[(7) - (8)].d));
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (8)].c));
    ;}
    break;

  case 609:
#line 6498 "Gmsh.y"
    {
      std::string in = (yyvsp[(3) - (6)].c);
      std::string out = in.substr((int)(yyvsp[(5) - (6)].d), std::string::npos);
      (yyval.c) = (char *)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 610:
#line 6506 "Gmsh.y"
    {
      (yyval.c) = (yyvsp[(3) - (4)].c);
    ;}
    break;

  case 611:
#line 6510 "Gmsh.y"
    {
      char tmpstring[5000];
      int i = printListOfDouble((yyvsp[(3) - (6)].c), (yyvsp[(5) - (6)].l), tmpstring);
      if(i < 0){
	yymsg(0, "Too few arguments in Sprintf");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else if(i > 0){
	yymsg(0, "%d extra argument%s in Sprintf", i, (i > 1) ? "s" : "");
	(yyval.c) = (yyvsp[(3) - (6)].c);
      }
      else{
	(yyval.c) = (char*)Malloc((strlen(tmpstring) + 1) * sizeof(char));
	strcpy((yyval.c), tmpstring);
	Free((yyvsp[(3) - (6)].c));
      }
      List_Delete((yyvsp[(5) - (6)].l));
    ;}
    break;

  case 612:
#line 6529 "Gmsh.y"
    {
      std::string tmp = FixRelativePath(gmsh_yyname, (yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 613:
#line 6536 "Gmsh.y"
    {
      std::string tmp = SplitFileName(GetAbsolutePath(gmsh_yyname))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
    ;}
    break;

  case 614:
#line 6542 "Gmsh.y"
    {
      std::string tmp = GetFileNameWithoutPath(gmsh_yyname);
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
    ;}
    break;

  case 615:
#line 6548 "Gmsh.y"
    {
      std::string tmp = SplitFileName((yyvsp[(3) - (4)].c))[0];
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 616:
#line 6555 "Gmsh.y"
    {
      std::string tmp = GetAbsolutePath((yyvsp[(3) - (4)].c));
      (yyval.c) = (char*)Malloc((tmp.size() + 1) * sizeof(char));
      strcpy((yyval.c), tmp.c_str());
      Free((yyvsp[(3) - (4)].c));
    ;}
    break;

  case 617:
#line 6562 "Gmsh.y"
    { init_options(); ;}
    break;

  case 618:
#line 6564 "Gmsh.y"
    {
      std::string val((yyvsp[(3) - (6)].c));
      Msg::ExchangeOnelabParameter("", val, floatOptions, charOptions);
      (yyval.c) = (char*)Malloc((val.size() + 1) * sizeof(char));
      strcpy((yyval.c), val.c_str());
      Free((yyvsp[(3) - (6)].c));
    ;}
    break;

  case 619:
#line 6572 "Gmsh.y"
    {
      std::string out;
      const std::string * key_struct = nullptr;
      switch (gmsh_yynamespaces.get_key_struct_from_tag(struct_namespace,
                                                        (int)(yyvsp[(3) - (4)].d), key_struct)) {
      case 0:
        out = *key_struct;
        break;
      case 1:
        yymsg(1, "Unknown NameSpace '%s' of Struct", struct_namespace.c_str());
        break;
      case 2:
        yymsg(1, "Unknown Struct of index %d", (int)(yyvsp[(3) - (4)].d));
        break;
      default:
        break;
      }
      (yyval.c) = (char*)Malloc((out.size() + 1) * sizeof(char));
      strcpy((yyval.c), out.c_str());
    ;}
    break;

  case 620:
#line 6596 "Gmsh.y"
    { struct_namespace = std::string(""); (yyval.d) = (yyvsp[(2) - (2)].d); ;}
    break;

  case 621:
#line 6598 "Gmsh.y"
    { struct_namespace = (yyvsp[(1) - (4)].c); Free((yyvsp[(1) - (4)].c)); (yyval.d) = (yyvsp[(4) - (4)].d); ;}
    break;

  case 622:
#line 6604 "Gmsh.y"
    { (yyval.l) = (yyvsp[(3) - (4)].l); ;}
    break;

  case 623:
#line 6609 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 624:
#line 6611 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 625:
#line 6616 "Gmsh.y"
    { (yyval.l) = (yyvsp[(2) - (3)].l); ;}
    break;

  case 626:
#line 6621 "Gmsh.y"
    {
      (yyval.l) = List_Create(20,20,sizeof(char*));
      List_Add((yyval.l), &((yyvsp[(1) - (1)].c)));
    ;}
    break;

  case 627:
#line 6626 "Gmsh.y"
    { (yyval.l) = (yyvsp[(1) - (1)].l); ;}
    break;

  case 628:
#line 6628 "Gmsh.y"
    {
      List_Add((yyval.l), &((yyvsp[(3) - (3)].c)));
    ;}
    break;

  case 629:
#line 6632 "Gmsh.y"
    {
      for(int i = 0; i < List_Nbr((yyvsp[(3) - (3)].l)); i++){
	char* c;
	List_Read((yyvsp[(3) - (3)].l), i, &c);
	List_Add((yyval.l), &c);
      }
      List_Delete((yyvsp[(3) - (3)].l));
    ;}
    break;

  case 630:
#line 6644 "Gmsh.y"
    {
      (yyval.l) = List_Create(20, 20, sizeof(char *));
      if(!gmsh_yystringsymbols.count((yyvsp[(1) - (3)].c)))
	yymsg(0, "Unknown string variable '%s'", (yyvsp[(1) - (3)].c));
      else{
        std::vector<std::string> &s(gmsh_yystringsymbols[(yyvsp[(1) - (3)].c)]);
	for(std::size_t i = 0; i < s.size(); i++) {
          char * val_ = strsave((char*)s.at(i).c_str());
	  List_Add((yyval.l), &val_);
        }
      }
      Free((yyvsp[(1) - (3)].c));
    ;}
    break;

  case 631:
#line 6658 "Gmsh.y"
    {
      (yyval.l) = treat_Struct_FullName_dot_tSTRING_ListOfString(nullptr, (yyvsp[(1) - (5)].c), (yyvsp[(3) - (5)].c));
    ;}
    break;

  case 632:
#line 6662 "Gmsh.y"
    {
      (yyval.l) = treat_Struct_FullName_dot_tSTRING_ListOfString((yyvsp[(1) - (7)].c), (yyvsp[(3) - (7)].c), (yyvsp[(5) - (7)].c));
    ;}
    break;

  case 633:
#line 6669 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char));
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)); strcat((yyval.c), tmpstr);
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 634:
#line 6677 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(4) - (5)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(1) - (5)].c))+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy((yyval.c), (yyvsp[(1) - (5)].c)) ; strcat((yyval.c), tmpstr) ;
      Free((yyvsp[(1) - (5)].c));
    ;}
    break;

  case 635:
#line 6685 "Gmsh.y"
    {
      char tmpstr[256];
      sprintf(tmpstr, "_%d", (int)(yyvsp[(7) - (8)].d));
      (yyval.c) = (char *)Malloc((strlen((yyvsp[(3) - (8)].c))+strlen(tmpstr)+1)*sizeof(char));
      strcpy((yyval.c), (yyvsp[(3) - (8)].c)); strcat((yyval.c), tmpstr);
      Free((yyvsp[(3) - (8)].c));
    ;}
    break;

  case 636:
#line 6696 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 637:
#line 6698 "Gmsh.y"
    { (yyval.c) = (yyvsp[(1) - (1)].c); ;}
    break;

  case 638:
#line 6701 "Gmsh.y"
    { (yyval.c) = (yyvsp[(3) - (4)].c); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 14850 "Gmsh.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 6704 "Gmsh.y"


void assignVariable(const std::string &name, int index, int assignType,
                    double value)
{
  if(!gmsh_yysymbols.count(name)){
    if(!assignType){
      gmsh_yysymbol &s(gmsh_yysymbols[name]);
      s.list = true;
      s.value.resize(index + 1, 0.);
      s.value[index] = value;
    }
    else
      yymsg(0, "Unknown variable '%s'", name.c_str());
  }
  else{
    gmsh_yysymbol &s(gmsh_yysymbols[name]);
    if(s.list){
      if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
      switch(assignType){
      case 0 : s.value[index] = value; break;
      case 1 : s.value[index] += value; break;
      case 2 : s.value[index] -= value; break;
      case 3 : s.value[index] *= value; break;
      case 4 :
        if(value) s.value[index] /= value;
        else yymsg(0, "Division by zero in '%s[%d] /= %g'",
                   name.c_str(), index, value);
        break;
      }
    }
    else
      yymsg(0, "Variable '%s' is not a list", name.c_str());
  }
}

void assignVariables(const std::string &name, List_T *indices, int assignType,
                     List_T *values)
{
  if(List_Nbr(indices) != List_Nbr(values)){
    yymsg(0, "Incompatible array dimensions in affectation");
  }
  else{
    if(!gmsh_yysymbols.count(name)){
      if(!assignType){
        gmsh_yysymbol &s(gmsh_yysymbols[name]);
        s.list = true;
        for(int i = 0; i < List_Nbr(indices); i++){
          int index = (int)(*(double*)List_Pointer(indices, i));
          s.value.resize(index + 1, 0.);
          s.value[index] = *(double*)List_Pointer(values, i);
        }
      }
      else
        yymsg(0, "Unknown variable '%s'", name.c_str());
    }
    else{
      gmsh_yysymbol &s(gmsh_yysymbols[name]);
      if(s.list){
        for(int i = 0; i < List_Nbr(indices); i++){
          int index = (int)(*(double*)List_Pointer(indices, i));
          double d = *(double*)List_Pointer(values, i);
          if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
          switch(assignType){
          case 0 : s.value[index] = d; break;
          case 1 : s.value[index] += d; break;
          case 2 : s.value[index] -= d; break;
          case 3 : s.value[index] *= d; break;
          case 4 :
            if(d) s.value[index] /= d;
            else yymsg(0, "Division by zero in '%s[%d] /= %g'", name.c_str(), index, d);
            break;
          }
        }
      }
      else
        yymsg(0, "Variable '%s' is not a list", name.c_str());
    }
  }
}

void incrementVariable(const std::string &name, int index, double value)
{
  if(!gmsh_yysymbols.count(name))
    yymsg(0, "Unknown variable '%s'", name.c_str());
  else{
    gmsh_yysymbol &s(gmsh_yysymbols[name]);
    if(s.list){
      if((int)s.value.size() < index + 1) s.value.resize(index + 1, 0.);
      s.value[index] += value;
    }
    else
      yymsg(0, "Variable '%s' is not a list", name.c_str());
  }
}

int printListOfDouble(char *format, List_T *list, char *buffer)
{
  // if format does not contain formatting characters, dump the list (useful for
  // quick debugging of lists)
  int numFormats = 0;
  for(std::size_t i = 0; i < strlen(format); i++)
    if(format[i] == '%') numFormats++;
  if(!numFormats){
    strcpy(buffer, format);
    for(int i = 0; i < List_Nbr(list); i++){
      double d;
      List_Read(list, i, &d);
      char tmp[256];
      sprintf(tmp, " [%d]%g", i, d);
      strcat(buffer, tmp);
    }
    return 0;
  }

  char tmp1[256], tmp2[256];
  int j = 0, k = 0;
  buffer[j] = '\0';

  while(j < (int)strlen(format) && format[j] != '%') j++;
  strncpy(buffer, format, j);
  buffer[j] = '\0';
  for(int i = 0; i < List_Nbr(list); i++){
    k = j;
    j++;
    if(j < (int)strlen(format)){
      if(format[j] == '%'){
	strcat(buffer, "%");
	j++;
      }
      while(j < (int)strlen(format) && format[j] != '%') j++;
      if(k != j){
	strncpy(tmp1, &(format[k]), j-k);
	tmp1[j-k] = '\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list, i));
	strcat(buffer, tmp2);
      }
    }
    else
      return List_Nbr(list) - i;
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
}

void PrintParserSymbols(bool help, std::vector<std::string> &vec)
{
  if(help){
    vec.push_back("//");
    vec.push_back("// Numbers");
    vec.push_back("//");
  }
  for(auto it = gmsh_yysymbols.begin(); it != gmsh_yysymbols.end(); it++){
    gmsh_yysymbol s(it->second);
    std::ostringstream sstream;
    sstream.precision(12);
    sstream << it->first;
    if(s.list){
      sstream << "[] = {";
      for(std::size_t i = 0; i < s.value.size(); i++){
        if(i) sstream << ", ";
        sstream << s.value[i];
      }
      sstream << "}";
    }
    else
      sstream << " = " << s.value[0];
    sstream << ";";
    vec.push_back(sstream.str());
  }
  if(help){
    vec.push_back("//");
    vec.push_back("// Strings");
    vec.push_back("//");
  }
  for(auto it = gmsh_yystringsymbols.begin(); it != gmsh_yystringsymbols.end();
      it++){
    if(it->second.size() == 1)
      vec.push_back(it->first + " = \"" + it->second[0] + "\";");
    else{
      std::string s = it->first + "[] = Str({";
      for(std::size_t i = 0; i < it->second.size(); i++){
        if(i) s += ", ";
        s += std::string("\"") + it->second[i] + "\"";
      }
      s += "});";
      vec.push_back(s);
    }
  }
  if(gmsh_yynamespaces.size()){
    if(help){
      vec.push_back("//");
      vec.push_back("// Structures");
      vec.push_back("//");
    }
    std::vector<std::string> strs;
    gmsh_yynamespaces.sprint(strs);
    vec.insert(vec.end(), strs.begin(), strs.end());
  }
}

fullMatrix<double> ListOfListOfDouble2Matrix(List_T *list)
{
  // Warning: this returns a fullMatrix copy, and deletes the input list
  int M = List_Nbr(list);
  int N = 0;
  for(int i = 0; i < M; i++){
    List_T *line = *(List_T**)List_Pointer_Fast(list, i);
    N = std::max(N, List_Nbr(line));
  }
  fullMatrix<double> mat(M, N);
  for(int i = 0; i < M; i++){
    List_T *line = *(List_T**)List_Pointer_Fast(list, i);
    for(int j = 0; j < List_Nbr(line); j++){
      double val;
      List_Read(line, j, &val);
      mat(i, j) = val;
    }
  }
  for(int i = 0; i < List_Nbr(list); i++)
    List_Delete(*(List_T**)List_Pointer(list, i));
  List_Delete(list);
  return mat;
}

void ListOfDouble2Vector(List_T *list, std::vector<int> &v)
{
  v.clear();
  if(!list) return;
  v.reserve(List_Nbr(list));
  for(int i = 0; i < List_Nbr(list); i++){
    double d;
    List_Read(list, i, &d);
    v.push_back((int)d);
  }
}

void ListOfDouble2Vector(List_T *list, std::vector<double> &v)
{
  v.clear();
  if(!list) return;
  v.reserve(List_Nbr(list));
  for(int i = 0; i < List_Nbr(list); i++){
    double d;
    List_Read(list, i, &d);
    v.push_back(d);
  }
}

void ListOfShapes2VectorOfPairs(List_T *list, std::vector<std::pair<int, int> > &v)
{
  for(int i = 0; i < List_Nbr(list); i++){
    Shape s;
    List_Read(list, i, &s);
    int dim = s.Type / 100 - 1;
    if(dim >= 0 && dim <= 3) v.push_back(std::make_pair(dim, s.Num));
  }
}

void VectorOfPairs2ListOfShapes(const std::vector<std::pair<int, int> > &v, List_T *list)
{
  for(std::size_t i = 0; i < v.size(); i++){
    int dim = v[i].first;
    int tag = v[i].second;
    Shape s;
    s.Type = (dim == 3) ? MSH_VOLUME : (dim == 2) ? MSH_SURF_PLAN :
      (dim == 1) ? MSH_SEGM_LINE : MSH_POINT;
    s.Num = tag;
    List_Add(list, &s);
  }
}

void yyerror(const char *s)
{
  if(gmsh_yyname.empty())
    Msg::Error("%s (%s)", s, gmsh_yytext);
  else
    Msg::Error("'%s', line %d: %s (%s)", gmsh_yyname.c_str(), gmsh_yylineno - 1,
               s, gmsh_yytext);
  gmsh_yyerrorstate++;
}

void yymsg(int level, const char *fmt, ...)
{
  va_list args;
  char tmp[1024];

  va_start(args, fmt);
  vsprintf(tmp, fmt, args);
  va_end(args);

  if(level == 0){
    if(gmsh_yyname.empty())
      Msg::Error("%s", tmp);
    else
      Msg::Error("'%s', line %d: %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
    gmsh_yyerrorstate++;
  }
  else if(level == 1){
    if(gmsh_yyname.empty())
      Msg::Warning("%s", tmp);
    else
      Msg::Warning("'%s', line %d: %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
  }
  else{
    if(gmsh_yyname.empty())
      Msg::Info("%s", tmp);
    else
      Msg::Info("'%s', line %d: %s", gmsh_yyname.c_str(), gmsh_yylineno - 1, tmp);
  }
}

void addPeriodicFace(int iTarget, int iSource,
                     const std::vector<double>& affineTransform)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  GFace *target = GModel::current()->getFaceByTag(std::abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(std::abs(iSource));
  if(!target || !source) {
    Msg::Error("Could not find surface %d or %d for periodic copy",
               iTarget, iSource);
    return;
  }
  target->setMeshMaster(source, affineTransform);
}

void addPeriodicFace(int iTarget, int iSource,
                     const std::map<int,int>& edgeCounterparts)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  Msg::Info("Encoding periodic connection between %d and %d", iTarget, iSource);
  for(auto sIter = edgeCounterparts.begin(); sIter != edgeCounterparts.end();
      ++sIter) {
    Msg::Info("%d - %d", sIter->first, sIter->second);
  }

  GFace *target = GModel::current()->getFaceByTag(std::abs(iTarget));
  GFace *source = GModel::current()->getFaceByTag(std::abs(iSource));
  if(!target || !source) {
    Msg::Error("Could not find surface %d or %d for periodic copy",
               iTarget,iSource);
    return;
  }
  target->setMeshMaster(source, edgeCounterparts);
}

void addPeriodicEdge(int iTarget,int iSource,
                     const std::vector<double>& affineTransform)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  GEdge *target = GModel::current()->getEdgeByTag(std::abs(iTarget));
  GEdge *source = GModel::current()->getEdgeByTag(std::abs(iSource));
  if(!target || !source) {
    Msg::Error("Could not find curve %d or %d for periodic copy",
               iTarget,iSource);
    return;
  }
  if(affineTransform.size() >= 12) {
    target->setMeshMaster(source, affineTransform);
  }
  else {
    target->setMeshMaster(source, iSource * iTarget < 0 ? -1 : 1);
  }
}

void computeAffineTransformation(SPoint3& origin, SPoint3& axis,
                                 double angle, SPoint3& translation,
                                 std::vector<double>& tfo)
{
  tfo.resize(16,0.0);

  double ca = cos(angle);
  double sa = sin(angle);

  double ux = axis.x();
  double uy = axis.y();
  double uz = axis.z();

  tfo.resize(16);

  tfo[0*4+0] = ca + ux * ux * (1. - ca);
  tfo[0*4+1] = ux * uy * (1. - ca) - uz * sa;
  tfo[0*4+2] = ux * uz * (1. - ca) + uy * sa;

  tfo[1*4+0] = ux * uy * (1. - ca) + uz * sa;
  tfo[1*4+1] = ca + uy * uy * (1. - ca);
  tfo[1*4+2] = uy * uz * (1. - ca) - ux * sa;

  tfo[2*4+0] = ux * uz * (1. - ca) - uy * sa;
  tfo[2*4+1] = uy * uz * (1. - ca) + ux * sa;
  tfo[2*4+2] = ca + uz * uz * (1. - ca);

  int idx = 0;
  for(size_t i = 0; i < 3; i++,idx++) {
    int tIdx = i * 4 + 3;
    tfo[tIdx] = origin[i] + translation[i];
    for(int j = 0; j < 3; j++,idx++) tfo[tIdx] -= tfo[idx] * origin[j];
  }

  for(int i = 0; i < 4; i++) tfo[12+i] = 0;
  tfo[15] = 1;
}

void addEmbedded(int dim, std::vector<int> tags, int dim2, int tag2)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  if(dim2 == 2){
    GFace *gf = GModel::current()->getFaceByTag(tag2);
    if(!gf){
      yymsg(0, "Unknown model surface with tag %d", tag2);
      return;
    }
    for(std::size_t i = 0; i < tags.size(); i++){
      if(dim == 0){
        GVertex *gv = GModel::current()->getVertexByTag(tags[i]);
        if(gv)
          gf->addEmbeddedVertex(gv);
        else
          yymsg(0, "Unknown model point %d", tags[i]);
      }
      else if(dim == 1){
        GEdge *ge = GModel::current()->getEdgeByTag(tags[i]);
        if(ge)
          gf->addEmbeddedEdge(ge);
        else
          yymsg(0, "Unknown model curve %d", tags[i]);
      }
    }
  }
  else if(dim2 == 3){
    GRegion *gr = GModel::current()->getRegionByTag(tag2);
    if(!gr){
      yymsg(0, "Unknown model volume with tag %d", tag2);
      return;
    }
    for(std::size_t i = 0; i < tags.size(); i++){
      if(dim == 0){
        GVertex *gv = GModel::current()->getVertexByTag(tags[i]);
        if(gv)
          gr->addEmbeddedVertex(gv);
        else
          yymsg(0, "Unknown model point with tag %d", tags[i]);
      }
      else if(dim == 1){
        GEdge *ge = GModel::current()->getEdgeByTag(tags[i]);
        if(ge)
          gr->addEmbeddedEdge(ge);
        else
          yymsg(0, "Unknown model curve with tag %d", tags[i]);
      }
      else if(dim == 2){
        GFace *gf = GModel::current()->getFaceByTag(tags[i]);
        if(gf)
          gr->addEmbeddedFace(gf);
        else
          yymsg(0, "Unknown model surface with tag %d", tags[i]);
      }
    }
  }
}

void removeEmbedded(const std::vector<std::pair<int, int> > &dimTags,
                    int rdim)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(std::size_t i = 0; i < dimTags.size(); i++){
    int dim = dimTags[i].first, tag = dimTags[i].second;
    if(dim == 2){
      GFace *gf = GModel::current()->getFaceByTag(tag);
      if(gf) {
        if(rdim < 0 || rdim == 1) gf->embeddedEdges().clear();
        if(rdim < 0 || rdim == 0) gf->embeddedVertices().clear();
      }
      else
        yymsg(0, "Unknown model surface with tag %d", tag);
    }
    else if(dimTags[i].first == 3){
      GRegion *gr = GModel::current()->getRegionByTag(tag);
      if(gr) {
        if(rdim < 0 || rdim == 2) gr->embeddedFaces().clear();
        if(rdim < 0 || rdim == 1) gr->embeddedEdges().clear();
        if(rdim < 0 || rdim == 0) gr->embeddedVertices().clear();
      }
      else
        yymsg(0, "Unknown model volume with tag %d", tag);
    }
  }
}

void getAllElementaryTags(int dim, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::vector<GEntity*> entities;
  GModel::current()->getEntities(entities, dim);
  for(std::size_t i = 0; i < entities.size(); i++){
    double tag = entities[i]->tag();
    List_Add(out, &tag);
  }
}

void getAllPhysicalTags(int dim, List_T *out)
{
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::map<int, std::vector<GEntity*> > groups;
  GModel::current()->getPhysicalGroups(dim, groups);
  for(auto it = groups.begin(); it != groups.end(); it++){
    double d = it->first;
    List_Add(out, &d);
  }
}

void getElementaryTagsForPhysicalGroups(int dim, List_T *in, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::map<int, std::vector<GEntity*> > groups;
  GModel::current()->getPhysicalGroups(dim, groups);
  for(int i = 0; i < List_Nbr(in); i++){
    double num;
    List_Read(in, i, &num);
    auto it = groups.find(num);
    if(it != groups.end()){
      for(unsigned j = 0; j < it->second.size(); j++){
        double d = it->second[j]->tag();
        List_Add(out, &d);
      }
    }
  }
}

void getElementaryTagsInBoundingBox(int dim, double x1, double y1, double z1,
                                    double x2, double y2, double z2, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  SBoundingBox3d box(x1, y1, z1, x2, y2, z2);
  std::vector<GEntity*> entities;
  GModel::current()->getEntitiesInBox(entities, box, dim);
  for(std::size_t i = 0; i < entities.size(); i++){
    double d = entities[i]->tag();
    List_Add(out, &d);
  }
}

void getParentTags(int dim, List_T *in, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(int i = 0; i < List_Nbr(in); i++){
    double num;
    List_Read(in, i, &num);
    GEntity *ge = GModel::current()->getEntityByTag(dim, (int)num);
    if(ge){
      GEntity *parent = ge->getParentEntity();
      if(parent){
        double tag = parent->tag();
        List_Add(out, &tag);
      }
    }
  }
}

void getBoundingBox(int dim, List_T *in, List_T *out)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  SBoundingBox3d box;
  for(int i = 0; i < List_Nbr(in); i++){
    double num;
    List_Read(in, i, &num);
    GEntity *ge = GModel::current()->getEntityByTag(dim, (int)num);
    if(ge) box += ge->bounds();
  }
  if(!box.empty()){
    double b[6] = {box.min().x(), box.min().y(), box.min().z(),
                   box.max().x(), box.max().y(), box.max().z()};
    for(int i = 0; i < 6; i++)
      List_Add(out, &b[i]);
  }
}

void setVisibility(int dim, int visible, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  std::vector<GEntity*> entities;
  GModel::current()->getEntities(entities, dim);
  for(std::size_t i = 0; i < entities.size(); i++){
    entities[i]->setVisibility(visible);
  }
}

void setVisibility(const std::vector<std::pair<int, int> > &dimTags,
                   int visible, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(std::size_t i = 0; i < dimTags.size(); i++){
    GEntity *ge = GModel::current()->getEntityByTag
      (dimTags[i].first, std::abs(dimTags[i].second));
    if(ge) ge->setVisibility(visible, recursive);
  }
}

void setColor(const std::vector<std::pair<int, int> > &dimTags,
              unsigned int val, bool recursive)
{
  if(GModel::current()->getOCCInternals() &&
     GModel::current()->getOCCInternals()->getChanged())
    GModel::current()->getOCCInternals()->synchronize(GModel::current());
  if(GModel::current()->getGEOInternals()->getChanged())
    GModel::current()->getGEOInternals()->synchronize(GModel::current());

  for(std::size_t i = 0; i < dimTags.size(); i++){
    GEntity *ge = GModel::current()->getEntityByTag
      (dimTags[i].first, std::abs(dimTags[i].second));
    if(ge) ge->setColor(val, recursive);
  }
}

double treat_Struct_FullName_Float
(char* c1, char* c2, int type_var, int index, double val_default, int type_treat)
{
  double out;
  if(!c1 && gmsh_yysymbols.count(c2)){
    if(type_treat == 1) out = 1.; // Exists (type_treat == 1)
    else { // Get (0) or GetForced (2)
      if(type_var == 1) {
        gmsh_yysymbol &s(gmsh_yysymbols[c2]);
        if(s.value.empty()){
          out = val_default;
          if(type_treat == 0) yymsg(0, "Uninitialized variable '%s'", c2);
        }
        else
          out = s.value[0];
      }
      else if(type_var == 2) {
        gmsh_yysymbol &s(gmsh_yysymbols[c2]);
        if(index < 0 || (int)s.value.size() < index + 1){
          out = val_default;
          if(type_treat == 0) yymsg(0, "Uninitialized variable '%s[%d]'", c2, index);
        }
        else{
          out = s.value[index];
        }
      }
      else {
        out = val_default;
      }
    }
  }
  else if(!c1 && type_treat == 1 && gmsh_yystringsymbols.count(c2)) {
    out = 1.;
  }
  else{
    if(type_var == 1) {
      std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
      if(gmsh_yynamespaces.getTag(struct_namespace, struct_name, out)) {
        out = val_default;
        if(type_treat == 0) yymsg(0, "Unknown variable '%s'", struct_name.c_str());
      }
    }
    else {
      out = val_default;
      if(type_treat == 0) yymsg(0, "Unknown variable '%s(.)'", c2);
    }
  }
  Free(c1); Free(c2);
  return out;
}

double treat_Struct_FullName_dot_tSTRING_Float
(char* c1, char* c2, char* c3, int index, double val_default, int type_treat)
{
  double out;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (gmsh_yynamespaces.getMember
          (struct_namespace, struct_name, key_member, out, index)) {
  case 0:
    if(type_treat == 1) out = 1.; // Exists (type_treat == 1)
    break;
  case 1:
    if(!NumberOption(GMSH_GET, c2, 0, c3, out, type_treat==0))
      out = val_default;
    break;
  case 2:
    if(type_treat != 0) {
      const std::string * out_dummy = nullptr;
      out = (gmsh_yynamespaces.getMember
             (struct_namespace, struct_name, key_member, out_dummy))?
        val_default : 1.;
    }
    else {
      out = val_default;
      if(type_treat == 0)
        yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    }
    break;
  case 3:
    out = val_default;
    if(type_treat == 0)
      yymsg(0, "Index %d out of range", index);
    break;
  }
  Free(c1); Free(c2);
  Free(c3);
  return out;
}

List_T * treat_Struct_FullName_dot_tSTRING_ListOfFloat
(char* c1, char* c2, char* c3)
{
  List_T * out, * val_default = nullptr;
  const std::vector<double> * out_vector; double val_;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (gmsh_yynamespaces.getMember_Vector
          (struct_namespace, struct_name, key_member, out_vector)) {
  case 0:
    out = List_Create(out_vector->size(), 1, sizeof(double));
    for(std::size_t i = 0; i < out_vector->size(); i++) {
      val_ = out_vector->at(i);
      List_Add(out, &val_);
    }
    break;
  case 1:
    yymsg(0, "Unknown Struct: %s", struct_name.c_str());
    out = val_default;
    break;
  case 2:
    out = val_default;
    yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  }
  Free(c1); Free(c2);
  Free(c3);
  return out;
}

int treat_Struct_FullName_dot_tSTRING_Float_getDim
(char* c1, char* c2, char* c3)
{
  int out;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (gmsh_yynamespaces.getMember_Dim
          (struct_namespace, struct_name, key_member, out)) {
  case 0:
    break;
  case 1:
    out = 0;
    break;
  case 2:
    out = 0;
    yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  }
  Free(c1); Free(c2);
  Free(c3);
  return out;
}

char * treat_Struct_FullName_String
(char* c1, char* c2, int type_var, int index, char * val_default, int type_treat)
{
  std::string string_default(val_default? val_default : std::string(""));
  const std::string * out = nullptr;
  std::string out_tmp;
  if(!c1 && gmsh_yystringsymbols.count(c2)){
    // Get (0) or GetForced (2)
    if(gmsh_yystringsymbols[c2].size() != 1){
      out = &string_default;
      if(type_treat == 0)
        yymsg(0, "Expected single valued string variable '%s'", c2);
    }
    else {
      out_tmp = gmsh_yystringsymbols[c2][0];
      out = &out_tmp;
    }
  }
  else{
    out = &string_default;
    if(type_treat == 0) yymsg(0, "Unknown string variable '%s'", c2);
  }
  char* out_c = (char*)Malloc((out->size() + 1) * sizeof(char));
  strcpy(out_c, out->c_str());
  Free(c1); Free(c2);
  return out_c;
}

char* treat_Struct_FullName_dot_tSTRING_String
(char* c1, char* c2, char* c3, int index, char * val_default, int type_treat)
{
  std::string string_default(val_default? val_default : std::string(""));
  const std::string * out = nullptr;
  std::string out_tmp; // PD: we should avoid that -> StringOption() to be changed
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (gmsh_yynamespaces.getMember
          (struct_namespace, struct_name, key_member, out, index)) {
  case 0:
    break;
  case 1:
    if(StringOption(GMSH_GET, c2, 0, c3, out_tmp, type_treat==0))
      out = &out_tmp;
    else
      out = &string_default;
    break;
  case 2:
    out = &string_default;
    if(type_treat == 0)
      yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  case 3:
    out = &string_default;
    if(type_treat == 0)
      yymsg(0, "Index %d out of range", index);
    break;
  }
  char* out_c = (char*)Malloc((out->size() + 1) * sizeof(char));
  strcpy(out_c, out->c_str());
  Free(c1); Free(c2);
  Free(c3);
  return out_c;
}

List_T * treat_Struct_FullName_dot_tSTRING_ListOfString
(char* c1, char* c2, char* c3)
{
  List_T * out, * val_default = nullptr;
  const std::vector<std::string> * out_vector; char * val_;
  std::string struct_namespace(c1? c1 : std::string("")), struct_name(c2);
  std::string key_member(c3);
  switch (gmsh_yynamespaces.getMember_Vector
          (struct_namespace, struct_name, key_member, out_vector)) {
  case 0:
    out = List_Create(out_vector->size(), 1, sizeof(char *));
    for(std::size_t i = 0; i < out_vector->size(); i++) {
      val_ = strsave((char*)out_vector->at(i).c_str());
      List_Add(out, &val_);
    }
    break;
  case 1:
    yymsg(0, "Unknown Struct: %s", struct_name.c_str());
    out = val_default;
    break;
  case 2:
    out = val_default;
    yymsg(0, "Unknown member '%s' of Struct %s", c3, struct_name.c_str());
    break;
  }
  Free(c1); Free(c2);
  Free(c3);
  return out;
}

