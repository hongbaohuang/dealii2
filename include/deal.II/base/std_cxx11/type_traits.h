// ---------------------------------------------------------------------
//
// Copyright (C) 2012 - 2020 by the deal.II authors
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

#ifndef dealii_std_cxx11_type_traits_h
#define dealii_std_cxx11_type_traits_h

#include <deal.II/base/config.h>

DEAL_II_WARNING(
  "This file is deprecated. Simply use the corresponding C++11 header <type_traits>.")


#include <type_traits>
DEAL_II_NAMESPACE_OPEN
namespace std_cxx11
{
  using std::enable_if;
  using std::false_type;
  using std::is_fundamental;
  using std::is_pod;
  using std::is_pointer;
  using std::is_standard_layout;
  using std::is_trivial;
  using std::true_type;
} // namespace std_cxx11
DEAL_II_NAMESPACE_CLOSE

#endif
