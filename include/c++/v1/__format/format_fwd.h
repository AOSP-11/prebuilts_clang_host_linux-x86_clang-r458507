// -*- C++ -*-
//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___FORMAT_FORMAT_FWD_H
#define _LIBCPP___FORMAT_FORMAT_FWD_H

#include <__availability>
#include <__config>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#  pragma GCC system_header
#endif

_LIBCPP_BEGIN_NAMESPACE_STD

#if _LIBCPP_STD_VER > 17

template <class _Context>
class _LIBCPP_TEMPLATE_VIS _LIBCPP_AVAILABILITY_FORMAT basic_format_arg;

template <class _Context, class... _Args>
struct _LIBCPP_TEMPLATE_VIS __format_arg_store;

template <class _Tp, class _CharT = char>
struct _LIBCPP_TEMPLATE_VIS _LIBCPP_AVAILABILITY_FORMAT formatter;

#endif //_LIBCPP_STD_VER > 17

_LIBCPP_END_NAMESPACE_STD

#endif // _LIBCPP___FORMAT_FORMAT_FWD_H
