/**
 * This file belongs to the Galois project, a C++ library for exploiting
 * parallelism. The code is being released under the terms of XYZ License (a
 * copy is located in LICENSE.txt at the top-level directory).
 *
 * Copyright (C) 2018, The University of Texas at Austin. All rights reserved.
 * UNIVERSITY EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES CONCERNING THIS
 * SOFTWARE AND DOCUMENTATION, INCLUDING ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR ANY PARTICULAR PURPOSE, NON-INFRINGEMENT AND WARRANTIES OF
 * PERFORMANCE, AND ANY WARRANTY THAT MIGHT OTHERWISE ARISE FROM COURSE OF
 * DEALING OR USAGE OF TRADE.  NO WARRANTY IS EITHER EXPRESS OR IMPLIED WITH
 * RESPECT TO THE USE OF THE SOFTWARE OR DOCUMENTATION. Under no circumstances
 * shall University be liable for incidental, special, indirect, direct or
 * consequential damages or loss of profits, interruption of business, or
 * related expenses which may arise from use of Software or Documentation,
 * including but not limited to those resulting from defects in Software and/or
 * Documentation, or loss or inaccuracy of data of any kind.
 */

#include "galois/substrate/ThreadPool.h"
#include "galois/Threads.h"

#include <algorithm>
namespace galois {
namespace runtime {
unsigned int activeThreads = 1;
}
} // namespace galois

unsigned int galois::setActiveThreads(unsigned int num) noexcept {
  num = std::min(num, galois::substrate::getThreadPool().getMaxUsableThreads());
  num = std::max(num, 1U);
  galois::runtime::activeThreads = num;
  return num;
}

unsigned int galois::getActiveThreads() noexcept {
  return galois::runtime::activeThreads;
}
