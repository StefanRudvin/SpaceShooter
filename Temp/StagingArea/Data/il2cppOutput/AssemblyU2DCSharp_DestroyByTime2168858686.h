﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByTime
struct  DestroyByTime_t2168858686  : public MonoBehaviour_t667441552
{
public:
	// System.Single DestroyByTime::lifetime
	float ___lifetime_2;

public:
	inline static int32_t get_offset_of_lifetime_2() { return static_cast<int32_t>(offsetof(DestroyByTime_t2168858686, ___lifetime_2)); }
	inline float get_lifetime_2() const { return ___lifetime_2; }
	inline float* get_address_of_lifetime_2() { return &___lifetime_2; }
	inline void set_lifetime_2(float value)
	{
		___lifetime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
