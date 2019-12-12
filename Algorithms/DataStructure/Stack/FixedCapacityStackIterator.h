//
// FixedCapacityStackIterator
//

#ifndef FixedCapacityStackIterator_h
#define FixedCapacityStackIterator_h

#include <iostream>
#include <vector>
#include "../../Iterator/Simple-Iterator-Template/iterator_tpl.h"

using namespace std;

template <typename T> struct FixedCapacityStackIterator {
  vector<T> vec;

  struct it_state {
        int pos;
        inline void next(const FixedCapacityStackIterator* ref) { ++pos; }
        inline void begin(const FixedCapacityStackIterator* ref) { pos = 0; }
        inline void end(const FixedCapacityStackIterator* ref) { pos = ref->vec.size(); }
        inline T& get(FixedCapacityStackIterator* ref) { return ref->vec[pos]; }
        inline const T& get(const FixedCapacityStackIterator* ref) { return ref->vec[pos]; }
        inline bool cmp(const it_state& s) const { return pos != s.pos; }
  };

  SETUP_ITERATORS(FixedCapacityStackIterator, T&, it_state);
};

#endif

