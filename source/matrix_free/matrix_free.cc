// ---------------------------------------------------------------------
//
// Copyright (C) 2011 - 2020 by the deal.II authors
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


#include <deal.II/base/conditional_ostream.h>
#include <deal.II/base/utilities.h>
#include <deal.II/base/vectorization.h>

#include <deal.II/matrix_free/matrix_free.templates.h>

#include <iostream>

DEAL_II_NAMESPACE_OPEN

#define SPLIT_INSTANTIATIONS_COUNT 3
#ifndef SPLIT_INSTANTIATIONS_INDEX
#  define SPLIT_INSTANTIATIONS_INDEX 0
#endif
#include "matrix_free.inst"

#if SPLIT_INSTANTIATIONS_INDEX == 0

template struct internal::MatrixFreeFunctions::ShapeInfo<double>;
template struct internal::MatrixFreeFunctions::ShapeInfo<float>;

#endif

DEAL_II_NAMESPACE_CLOSE
