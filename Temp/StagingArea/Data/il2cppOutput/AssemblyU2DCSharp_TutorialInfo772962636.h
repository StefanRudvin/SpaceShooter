#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AudioListener
struct AudioListener_t3685735200;
// UnityEngine.UI.Toggle
struct Toggle_t110812896;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialInfo
struct  TutorialInfo_t772962636  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean TutorialInfo::showAtStart
	bool ___showAtStart_2;
	// System.String TutorialInfo::url
	String_t* ___url_3;
	// UnityEngine.GameObject TutorialInfo::overlay
	GameObject_t3674682005 * ___overlay_4;
	// UnityEngine.AudioListener TutorialInfo::mainListener
	AudioListener_t3685735200 * ___mainListener_5;
	// UnityEngine.UI.Toggle TutorialInfo::showAtStartToggle
	Toggle_t110812896 * ___showAtStartToggle_6;

public:
	inline static int32_t get_offset_of_showAtStart_2() { return static_cast<int32_t>(offsetof(TutorialInfo_t772962636, ___showAtStart_2)); }
	inline bool get_showAtStart_2() const { return ___showAtStart_2; }
	inline bool* get_address_of_showAtStart_2() { return &___showAtStart_2; }
	inline void set_showAtStart_2(bool value)
	{
		___showAtStart_2 = value;
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(TutorialInfo_t772962636, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier(&___url_3, value);
	}

	inline static int32_t get_offset_of_overlay_4() { return static_cast<int32_t>(offsetof(TutorialInfo_t772962636, ___overlay_4)); }
	inline GameObject_t3674682005 * get_overlay_4() const { return ___overlay_4; }
	inline GameObject_t3674682005 ** get_address_of_overlay_4() { return &___overlay_4; }
	inline void set_overlay_4(GameObject_t3674682005 * value)
	{
		___overlay_4 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_4, value);
	}

	inline static int32_t get_offset_of_mainListener_5() { return static_cast<int32_t>(offsetof(TutorialInfo_t772962636, ___mainListener_5)); }
	inline AudioListener_t3685735200 * get_mainListener_5() const { return ___mainListener_5; }
	inline AudioListener_t3685735200 ** get_address_of_mainListener_5() { return &___mainListener_5; }
	inline void set_mainListener_5(AudioListener_t3685735200 * value)
	{
		___mainListener_5 = value;
		Il2CppCodeGenWriteBarrier(&___mainListener_5, value);
	}

	inline static int32_t get_offset_of_showAtStartToggle_6() { return static_cast<int32_t>(offsetof(TutorialInfo_t772962636, ___showAtStartToggle_6)); }
	inline Toggle_t110812896 * get_showAtStartToggle_6() const { return ___showAtStartToggle_6; }
	inline Toggle_t110812896 ** get_address_of_showAtStartToggle_6() { return &___showAtStartToggle_6; }
	inline void set_showAtStartToggle_6(Toggle_t110812896 * value)
	{
		___showAtStartToggle_6 = value;
		Il2CppCodeGenWriteBarrier(&___showAtStartToggle_6, value);
	}
};

struct TutorialInfo_t772962636_StaticFields
{
public:
	// System.String TutorialInfo::showAtStartPrefsKey
	String_t* ___showAtStartPrefsKey_7;

public:
	inline static int32_t get_offset_of_showAtStartPrefsKey_7() { return static_cast<int32_t>(offsetof(TutorialInfo_t772962636_StaticFields, ___showAtStartPrefsKey_7)); }
	inline String_t* get_showAtStartPrefsKey_7() const { return ___showAtStartPrefsKey_7; }
	inline String_t** get_address_of_showAtStartPrefsKey_7() { return &___showAtStartPrefsKey_7; }
	inline void set_showAtStartPrefsKey_7(String_t* value)
	{
		___showAtStartPrefsKey_7 = value;
		Il2CppCodeGenWriteBarrier(&___showAtStartPrefsKey_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
