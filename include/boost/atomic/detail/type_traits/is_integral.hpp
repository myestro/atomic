/*
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 *
 * Copyright (c) 2017 Andrey Semashev
 */
/*!
 * \file   atomic/detail/type_traits/is_integral.hpp
 *
 * This header defines \c is_integral type trait
 */

#ifndef BOOST_ATOMIC_DETAIL_TYPE_TRAITS_IS_INTEGRAL_HPP_INCLUDED_
#define BOOST_ATOMIC_DETAIL_TYPE_TRAITS_IS_INTEGRAL_HPP_INCLUDED_

#include <boost/atomic/detail/config.hpp>
#if !defined(BOOST_ATOMIC_DETAIL_NO_CXX11_HDR_TYPE_TRAITS)
#include <type_traits>
#else
#include <boost/type_traits/is_integral.hpp>
#endif

#ifdef BOOST_HAS_PRAGMA_ONCE
#pragma once
#endif

namespace boost {
namespace atomics {
namespace detail {

#if !defined(BOOST_ATOMIC_DETAIL_NO_CXX11_HDR_TYPE_TRAITS)
using std::is_integral;
#else
using boost::is_integral;
#endif

} // namespace detail
} // namespace atomics
} // namespace boost

#endif // BOOST_ATOMIC_DETAIL_TYPE_TRAITS_IS_INTEGRAL_HPP_INCLUDED_
