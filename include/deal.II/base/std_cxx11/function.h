// ---------------------------------------------------------------------
//
// Copyright (C) 2009 - 2019 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE.md at
// the top level directory of deal.II.
//
// ---------------------------------------------------------------------

#ifndef dealii_std_cxx11_function_h
#define dealii_std_cxx11_function_h

#include <deal.II/base/config.h>

DEAL_II_WARNING(
  "This file is deprecated. Simply use the corresponding C++11 header <functional>.")

#include <functional>
DEAL_II_NAMESPACE_OPEN
namespace std_cxx11
{
  using std::function;
}
DEAL_II_NAMESPACE_CLOSE

#endif
