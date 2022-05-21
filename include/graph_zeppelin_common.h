#pragma once

#define GROUP_NAME GraphZeppelin
#define BUFFERING_NAME GutterTree

#include <cstdint>


#ifdef __SIZEOF_INT128__
typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
#else
typedef struct {
  uint64_t low64;
  uint64_t high64;
} uint128_t;
#endif

// graph
typedef uint32_t node_id_t; // Max graph vertices is 2^32 - 1 = 4 294 967 295
typedef uint64_t edge_id_t; // Max number edges

// sketching
typedef uint128_t vec_t; //Max sketch vector size is 2^64 - 1
typedef uint32_t vec_hash_t;
