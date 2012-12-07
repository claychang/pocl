/* cl_platform.h - fix for the Kronos header

   Copyright (c) 2012 Vincent Danjean <Vincent.Danjean@ens-lyon.org>
   
   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:
   
   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.
   
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
*/

#include_next <CL/cl_platform.h>
#ifdef __APPLE__
// We do not want warning when using 1.0 and 1.1 deprecated function:
// we use it on purpose in order to provide backward compatibility
#  undef  CL_EXTENSION_WEAK_LINK
#  define CL_EXTENSION_WEAK_LINK
#  undef  CL_EXT_SUFFIX__VERSION_1_0
#  define CL_EXT_SUFFIX__VERSION_1_0
#  undef  CL_API_SUFFIX__VERSION_1_1
#  define CL_API_SUFFIX__VERSION_1_1
#  undef  CL_EXT_SUFFIX__VERSION_1_1
#  define CL_EXT_SUFFIX__VERSION_1_1
#  undef  CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED
#  define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED
// Define macros that would otherwise be undefined on Apple systems
#  define CL_API_SUFFIX__VERSION_1_2
#  define CL_EXT_SUFFIX__VERSION_1_2
#  define CL_EXT_SUFFIX__VERSION_1_1_DEPRECATED
#else
// We do not want warning when using 1.0 and 1.1 deprecated function:
// we use it on purpose in order to provide backward compatibility
#  undef  CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED
#  define CL_EXT_SUFFIX__VERSION_1_0_DEPRECATED
#  undef  CL_EXT_SUFFIX__VERSION_1_1_DEPRECATED
#  define CL_EXT_SUFFIX__VERSION_1_1_DEPRECATED
#endif

