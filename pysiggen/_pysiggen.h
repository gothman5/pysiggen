/* Generated by Cython 0.24.1 */

#ifndef __PYX_HAVE__pysiggen___pysiggen
#define __PYX_HAVE__pysiggen___pysiggen


#ifndef __PYX_HAVE_API__pysiggen___pysiggen

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C DL_IMPORT(int) drift_velocity_python(point, cyl_pt, point, float, vector *, MJD_Siggen_Setup *);

#endif /* !__PYX_HAVE_API__pysiggen___pysiggen */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC init_pysiggen(void);
#else
PyMODINIT_FUNC PyInit__pysiggen(void);
#endif

#endif /* !__PYX_HAVE__pysiggen___pysiggen */
