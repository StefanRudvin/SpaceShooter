#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// Boundary
struct Boundary_t2244299850;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t3346577219 * ___rb_2;
	// System.Single PlayerController::speed
	float ___speed_3;
	// Boundary PlayerController::boundary
	Boundary_t2244299850 * ___boundary_4;
	// System.Single PlayerController::sideTilt
	float ___sideTilt_5;
	// System.Single PlayerController::frontTilt
	float ___frontTilt_6;
	// UnityEngine.GameObject PlayerController::shot
	GameObject_t3674682005 * ___shot_7;
	// UnityEngine.Transform PlayerController::shotSpawn
	Transform_t1659122786 * ___shotSpawn_8;
	// System.Single PlayerController::fireRate
	float ___fireRate_9;
	// System.Single PlayerController::nextFire
	float ___nextFire_10;
	// UnityEngine.AudioSource PlayerController::audioSource
	AudioSource_t1740077639 * ___audioSource_11;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_2)); }
	inline Rigidbody_t3346577219 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t3346577219 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___boundary_4)); }
	inline Boundary_t2244299850 * get_boundary_4() const { return ___boundary_4; }
	inline Boundary_t2244299850 ** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(Boundary_t2244299850 * value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_4, value);
	}

	inline static int32_t get_offset_of_sideTilt_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___sideTilt_5)); }
	inline float get_sideTilt_5() const { return ___sideTilt_5; }
	inline float* get_address_of_sideTilt_5() { return &___sideTilt_5; }
	inline void set_sideTilt_5(float value)
	{
		___sideTilt_5 = value;
	}

	inline static int32_t get_offset_of_frontTilt_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___frontTilt_6)); }
	inline float get_frontTilt_6() const { return ___frontTilt_6; }
	inline float* get_address_of_frontTilt_6() { return &___frontTilt_6; }
	inline void set_frontTilt_6(float value)
	{
		___frontTilt_6 = value;
	}

	inline static int32_t get_offset_of_shot_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___shot_7)); }
	inline GameObject_t3674682005 * get_shot_7() const { return ___shot_7; }
	inline GameObject_t3674682005 ** get_address_of_shot_7() { return &___shot_7; }
	inline void set_shot_7(GameObject_t3674682005 * value)
	{
		___shot_7 = value;
		Il2CppCodeGenWriteBarrier(&___shot_7, value);
	}

	inline static int32_t get_offset_of_shotSpawn_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___shotSpawn_8)); }
	inline Transform_t1659122786 * get_shotSpawn_8() const { return ___shotSpawn_8; }
	inline Transform_t1659122786 ** get_address_of_shotSpawn_8() { return &___shotSpawn_8; }
	inline void set_shotSpawn_8(Transform_t1659122786 * value)
	{
		___shotSpawn_8 = value;
		Il2CppCodeGenWriteBarrier(&___shotSpawn_8, value);
	}

	inline static int32_t get_offset_of_fireRate_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___fireRate_9)); }
	inline float get_fireRate_9() const { return ___fireRate_9; }
	inline float* get_address_of_fireRate_9() { return &___fireRate_9; }
	inline void set_fireRate_9(float value)
	{
		___fireRate_9 = value;
	}

	inline static int32_t get_offset_of_nextFire_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___nextFire_10)); }
	inline float get_nextFire_10() const { return ___nextFire_10; }
	inline float* get_address_of_nextFire_10() { return &___nextFire_10; }
	inline void set_nextFire_10(float value)
	{
		___nextFire_10 = value;
	}

	inline static int32_t get_offset_of_audioSource_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___audioSource_11)); }
	inline AudioSource_t1740077639 * get_audioSource_11() const { return ___audioSource_11; }
	inline AudioSource_t1740077639 ** get_address_of_audioSource_11() { return &___audioSource_11; }
	inline void set_audioSource_11(AudioSource_t1740077639 * value)
	{
		___audioSource_11 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
