//
//  Copyright (C) 2021 Schrödinger, LLC
//
//   @@ All Rights Reserved @@
//  This file is part of the RDKit.
//  The contents are covered by the terms of the BSD license
//  which is included in the file license.txt, found at the root
//  of the RDKit source tree.
//

#pragma once

#ifndef SWIG
#ifdef MSCVER
#pragma warning(disable : 4251)
#pragma warning(disable : 4275)
#endif

#ifdef BOOST_NO_CXX98_FUNCTION_BASE
#undef BOOST_NO_CXX98_FUNCTION_BASE
#ifndef SHOULD_DEFINE_BOOST_NO_CXX98_FUNCTIONBASE
#define SHOULD_DEFINE_BOOST_NO_CXX98_FUNCTIONBASE 1
#endif
#endif
#include <boost/config.hpp>
#ifdef SHOULD_DEFINE_BOOST_NO_CXX98_FUNCTIONBASE
#ifndef BOOST_NO_CXX98_FUNCTION_BASE
#define BOOST_NO_CXX98_FUNCTION_BASE 1
#endif
#endif

// RDKit export macro definitions
#ifdef RDKIT_DYN_LINK
#if defined(_WIN32) && defined(BOOST_HAS_DECLSPEC)
#define RDKIT_EXPORT_API __declspec(dllexport)
#define RDKIT_IMPORT_API __declspec(dllimport)
#elif _GNUC_ >= 4 || defined(__clang__)
#define RDKIT_EXPORT_API __attribute__((visibility("default")))
#define RDKIT_IMPORT_API __attribute__((visibility("default")))
#endif  // WIN32
#endif  // RDKIT_DYN_LINK
// RDKit end export macro definitions

#endif  // SWIG

#ifndef RDKIT_EXPORT_API
#define RDKIT_EXPORT_API
#endif
#ifndef RDKIT_IMPORT_API
#define RDKIT_IMPORT_API
#endif
