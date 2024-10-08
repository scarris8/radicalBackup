############################################################################
#
#  Program:         ARPACK
#
#  Module:          ARmake.inc
#
#  Purpose:         Top-level Definitions
#
#  Creation date:   February 22, 1996
#
#  Modified:
#
#  Send bug reports, comments or suggestions to arpack@caam.rice.edu
#
############################################################################
#
# %---------------------------------%
# |  SECTION 1: PATHS AND LIBRARIES |
# %---------------------------------%
#
# %--------------------------------------%
# | You should change the definition of  |
# | home if ARPACK is built some place   |
# | other than your home directory.      |
# %--------------------------------------%
#
home          = $(HOME)/gnc/ARPACK
#
# %--------------------------------------%
# | The platform identifier to suffix to |
# | the end of library names             |
# %--------------------------------------%
#
PLAT          = LINUX
#
# %------------------------------------------------------%
# | The directories to find the various pieces of ARPACK |
# %------------------------------------------------------%
#
BLASdir      = $(home)/BLAS
LAPACKdir    = $(home)/LAPACK
UTILdir      = $(home)/UTIL
SRCdir       = $(home)/SRC
#
DIRS   = $(BLASdir) $(LAPACKdir) $(UTILdir) $(SRCdir)
#
# %-------------------------------------------------------------------%
# | Comment out the previous line and uncomment the following         |
# | if you already have the BLAS and LAPACK installed on your system. |
# | NOTE: ARPACK assumes the use of LAPACK version 2 codes.           |
# %-------------------------------------------------------------------%
#
#DIRS   = $(UTILdir) $(SRCdir)
#
# %---------------------------------------------------%
# | The name of the libraries to be created/linked to |
# %---------------------------------------------------%
#
ARPACKLIB = $(home)/libarpack_$(PLAT).a
LAPACKLIB = 
BLASLIB = 

ALIBS =  $(ARPACKLIB) $(LAPACKLIB) $(BLASLIB) 
#
#
# %---------------------------------------------------------%
# |                  SECTION 2: COMPILERS                   |
# |                                                         |
# | The following macros specify compilers, linker/loaders, |
# | the archiver, and their options.  You need to make sure |
# | these are correct for your system.                      |
# %---------------------------------------------------------%
#
#
# %------------------------------%
# | Make our own suffixes' list. |
# %------------------------------%
#
.SUFFIXES:
.SUFFIXES:	.f	.o
#
# %------------------%
# | Default command. |
# %------------------%
#
.DEFAULT:
	@$(ECHO) "Unknown target $@, try:  make help"
#
# %-------------------------------------------%
# |  Command to build .o files from .f files. |
# %-------------------------------------------%
#
.f.o:
	@$(ECHO) Making $@ from $<
	@$(FC) -c $(FFLAGS) $<
#
# %-----------------------------------------%
# | Various compilation programs and flags. |
# | You need to make sure these are correct |
# | for your system.                        |
# %-----------------------------------------%
#
FC      = gfortran
#FFLAGS	= -O -finit-real=Inf -ffpe-trap=invalid,zero,overflow
#FFLAGS	= -O
FFLAGS = -O -fallow-argument-mismatch -fallow-invalid-boz -m64
FCFLAGS = -fallow-argument-mismatch -fallow-invalid-boz -m64

LDFLAGS = 
CD      = cd

ECHO    = echo

LN      = ln
LNFLAGS = -s

MAKE    = /usr/bin/make

RM      = rm
RMFLAGS = -f

SHELL   = /bin/sh
#
# %--------------------------------------------%
# | For System V based machine without ranlib, |
# | like Cray and SGI, use touch instead.      |
# %--------------------------------------------%
#
AR = ar
ARFLAGS = r
RANLIB = ranlib
#
# %----------------------------------%
# | This is the general help target. |
# %----------------------------------%
#
help:
	@$(ECHO) "usage: make ?"
