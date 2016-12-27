#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.GUIText
struct GUIText_t3371372606;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t2782302542  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GameController::hazard
	GameObject_t3674682005 * ___hazard_2;
	// UnityEngine.Vector3 GameController::spawnValues
	Vector3_t4282066566  ___spawnValues_3;
	// System.Int32 GameController::hazardCount
	int32_t ___hazardCount_4;
	// System.Single GameController::spawnWait
	float ___spawnWait_5;
	// System.Single GameController::startWait
	float ___startWait_6;
	// System.Single GameController::waveWait
	float ___waveWait_7;
	// UnityEngine.GUIText GameController::scoreText
	GUIText_t3371372606 * ___scoreText_8;
	// System.Int32 GameController::score
	int32_t ___score_9;
	// UnityEngine.GUIText GameController::restartText
	GUIText_t3371372606 * ___restartText_10;
	// UnityEngine.GUIText GameController::gameOverText
	GUIText_t3371372606 * ___gameOverText_11;
	// System.Boolean GameController::gameOver
	bool ___gameOver_12;
	// System.Boolean GameController::restart
	bool ___restart_13;

public:
	inline static int32_t get_offset_of_hazard_2() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___hazard_2)); }
	inline GameObject_t3674682005 * get_hazard_2() const { return ___hazard_2; }
	inline GameObject_t3674682005 ** get_address_of_hazard_2() { return &___hazard_2; }
	inline void set_hazard_2(GameObject_t3674682005 * value)
	{
		___hazard_2 = value;
		Il2CppCodeGenWriteBarrier(&___hazard_2, value);
	}

	inline static int32_t get_offset_of_spawnValues_3() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___spawnValues_3)); }
	inline Vector3_t4282066566  get_spawnValues_3() const { return ___spawnValues_3; }
	inline Vector3_t4282066566 * get_address_of_spawnValues_3() { return &___spawnValues_3; }
	inline void set_spawnValues_3(Vector3_t4282066566  value)
	{
		___spawnValues_3 = value;
	}

	inline static int32_t get_offset_of_hazardCount_4() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___hazardCount_4)); }
	inline int32_t get_hazardCount_4() const { return ___hazardCount_4; }
	inline int32_t* get_address_of_hazardCount_4() { return &___hazardCount_4; }
	inline void set_hazardCount_4(int32_t value)
	{
		___hazardCount_4 = value;
	}

	inline static int32_t get_offset_of_spawnWait_5() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___spawnWait_5)); }
	inline float get_spawnWait_5() const { return ___spawnWait_5; }
	inline float* get_address_of_spawnWait_5() { return &___spawnWait_5; }
	inline void set_spawnWait_5(float value)
	{
		___spawnWait_5 = value;
	}

	inline static int32_t get_offset_of_startWait_6() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___startWait_6)); }
	inline float get_startWait_6() const { return ___startWait_6; }
	inline float* get_address_of_startWait_6() { return &___startWait_6; }
	inline void set_startWait_6(float value)
	{
		___startWait_6 = value;
	}

	inline static int32_t get_offset_of_waveWait_7() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___waveWait_7)); }
	inline float get_waveWait_7() const { return ___waveWait_7; }
	inline float* get_address_of_waveWait_7() { return &___waveWait_7; }
	inline void set_waveWait_7(float value)
	{
		___waveWait_7 = value;
	}

	inline static int32_t get_offset_of_scoreText_8() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___scoreText_8)); }
	inline GUIText_t3371372606 * get_scoreText_8() const { return ___scoreText_8; }
	inline GUIText_t3371372606 ** get_address_of_scoreText_8() { return &___scoreText_8; }
	inline void set_scoreText_8(GUIText_t3371372606 * value)
	{
		___scoreText_8 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_8, value);
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___score_9)); }
	inline int32_t get_score_9() const { return ___score_9; }
	inline int32_t* get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(int32_t value)
	{
		___score_9 = value;
	}

	inline static int32_t get_offset_of_restartText_10() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___restartText_10)); }
	inline GUIText_t3371372606 * get_restartText_10() const { return ___restartText_10; }
	inline GUIText_t3371372606 ** get_address_of_restartText_10() { return &___restartText_10; }
	inline void set_restartText_10(GUIText_t3371372606 * value)
	{
		___restartText_10 = value;
		Il2CppCodeGenWriteBarrier(&___restartText_10, value);
	}

	inline static int32_t get_offset_of_gameOverText_11() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOverText_11)); }
	inline GUIText_t3371372606 * get_gameOverText_11() const { return ___gameOverText_11; }
	inline GUIText_t3371372606 ** get_address_of_gameOverText_11() { return &___gameOverText_11; }
	inline void set_gameOverText_11(GUIText_t3371372606 * value)
	{
		___gameOverText_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_11, value);
	}

	inline static int32_t get_offset_of_gameOver_12() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___gameOver_12)); }
	inline bool get_gameOver_12() const { return ___gameOver_12; }
	inline bool* get_address_of_gameOver_12() { return &___gameOver_12; }
	inline void set_gameOver_12(bool value)
	{
		___gameOver_12 = value;
	}

	inline static int32_t get_offset_of_restart_13() { return static_cast<int32_t>(offsetof(GameController_t2782302542, ___restart_13)); }
	inline bool get_restart_13() const { return ___restart_13; }
	inline bool* get_address_of_restart_13() { return &___restart_13; }
	inline void set_restart_13(bool value)
	{
		___restart_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
