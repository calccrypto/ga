#ifndef _mafdecls_h
#define _mafdecls_h

/* 
 * $Id: mafdecls.h,v 1.3 1994-10-07 19:41:28 d3g681 Exp $
 */

/* 
 * Public header file for a portable dynamic memory allocator.
 *
 * This file may be included by internal and external FORTRAN files.
 */

#include "macommon.h"

/*
 * The guard ends here instead of at the end of the file because we only
 * need the cpp constants (stuff above) defined once per FORTRAN file,
 * but need the declarations (stuff below) to be defined each time this
 * file is included in a FORTRAN file.
 */

#endif /* _mafdecls_h */

/**
 ** constants
 **/

/* type declarations for datatype constants */
      integer	MT_BYTE		/* byte */
      integer	MT_INT		/* integer */
      integer	MT_LOG		/* logical */
      integer	MT_REAL		/* real */
      integer	MT_DBL		/* double precision */
      integer	MT_SCPL		/* single precision complex */
      integer	MT_DCPL		/* double precision complex */

      integer	MT_F_FIRST	/* first type */
      integer	MT_F_LAST	/* last type */

/* parameter declarations for datatype constants */
      parameter	(MT_BYTE = MT_F_BYTE)
      parameter	(MT_INT = MT_F_INT)
      parameter	(MT_LOG = MT_F_LOG)
      parameter	(MT_REAL = MT_F_REAL)
      parameter	(MT_DBL = MT_F_DBL)
      parameter	(MT_SCPL = MT_F_SCPL)
      parameter	(MT_DCPL = MT_F_DCPL)

      parameter	(MT_F_FIRST = MT_BYTE)
      parameter	(MT_F_LAST = MT_DCPL)

/**
 ** function types
 **/

#ifndef MAF_INTERNAL
      logical MA_alloc_get
      logical MA_allocate_heap
      logical MA_chop_stack
      logical MA_free_heap
      logical MA_get_index
      logical MA_get_next_memhandle
      logical MA_init
      logical MA_init_memhandle_iterator
      integer MA_inquire_avail
      integer MA_inquire_heap
      integer MA_inquire_stack
      logical MA_pop_stack
      /* subroutine MA_print_stats */
      logical MA_push_get
      logical MA_push_stack
      logical MA_set_auto_verify
      logical MA_set_error_print
      logical MA_set_hard_fail
      integer MA_sizeof
      integer MA_sizeof_overhead
      /* subroutine MA_summarize_allocated_blocks */
      logical MA_verify_allocator_stuff

      external MA_alloc_get
      external MA_allocate_heap
      external MA_chop_stack
      external MA_free_heap
      external MA_get_index
      external MA_get_next_memhandle
      external MA_init
      external MA_init_memhandle_iterator
      external MA_inquire_avail
      external MA_inquire_heap
      external MA_inquire_stack
      external MA_pop_stack
      external MA_print_stats
      external MA_push_get
      external MA_push_stack
      external MA_set_auto_verify
      external MA_set_error_print
      external MA_set_hard_fail
      external MA_sizeof
      external MA_sizeof_overhead
      external MA_summarize_allocated_blocks
      external MA_verify_allocator_stuff
#endif /* MAF_INTERNAL */

/**
 ** variables
 **/

/* common blocks */
      common /mbc_byte/		byte_mb(2)
      character*1		byte_mb
      common /mbc_int/		int_mb(2)
      integer			int_mb
      common /mbc_log/		log_mb(2)
      logical			log_mb
      common /mbc_real/		real_mb(2)
      real			real_mb
      common /mbc_dbl/		dbl_mb(2)
      double precision		dbl_mb
      common /mbc_scpl/		scpl_mb(2)
      complex			scpl_mb
      common /mbc_dcpl/		dcpl_mb(2)
      double complex		dcpl_mb

#ifdef KSR
c
c     The declarations above do not cause the common blocks to be properly
c     aligned on the KSR; the following statements are necessary.
c

c*ksr* subpage /mbc_byte/
c*ksr* subpage /mbc_int/
c*ksr* subpage /mbc_log/
c*ksr* subpage /mbc_real/
c*ksr* subpage /mbc_dbl/
c*ksr* subpage /mbc_scpl/
c*ksr* subpage /mbc_dcpl/
#endif /* KSR */
