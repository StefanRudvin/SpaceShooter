#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boundary
struct  Boundary_t2244299850  : public Il2CppObject
{
public:
	// System.Single Boundary::xMin
	float ___xMin_0;
	// System.Single Boundary::xMax
	float ___xMax_1;
	// System.Single Boundary::zMin
	float ___zMin_2;
	// System.Single Boundary::zMax
	float ___zMax_3;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(Boundary_t2244299850, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(Boundary_t2244299850, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_zMin_2() { return static_cast<int32_t>(offsetof(Boundary_t2244299850, ___zMin_2)); }
	inline float get_zMin_2() const { return ___zMin_2; }
	inline float* get_address_of_zMin_2() { return &___zMin_2; }
	inline void set_zMin_2(float value)
	{
		___zMin_2 = value;
	}

	inline static int32_t get_offset_of_zMax_3() { return static_cast<int32_t>(offsetof(Boundary_t2244299850, ___zMax_3)); }
	inline float get_zMax_3() const { return ___zMax_3; }
	inline float* get_address_of_zMax_3() { return &___zMax_3; }
	inline void set_zMax_3(float value)
	{
		___zMax_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
