#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "Wrappers/BsScriptComponent.h"
#include "../../../bsf/Source/Foundation/bsfCore/Renderer/BsReflectionProbe.h"
#include "Math/BsVector3.h"

namespace bs
{
	class CReflectionProbe;

	class BS_SCR_BE_EXPORT ScriptCReflectionProbe : public TScriptComponent<ScriptCReflectionProbe, CReflectionProbe>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "ReflectionProbe")

		ScriptCReflectionProbe(MonoObject* managedInstance, const GameObjectHandle<CReflectionProbe>& value);

	private:
		static ReflectionProbeType Internal_getType(ScriptCReflectionProbe* thisPtr);
		static void Internal_setType(ScriptCReflectionProbe* thisPtr, ReflectionProbeType type);
		static float Internal_getRadius(ScriptCReflectionProbe* thisPtr);
		static void Internal_setRadius(ScriptCReflectionProbe* thisPtr, float radius);
		static void Internal_getExtents(ScriptCReflectionProbe* thisPtr, Vector3* __output);
		static void Internal_setExtents(ScriptCReflectionProbe* thisPtr, Vector3* extents);
		static MonoObject* Internal_getCustomTexture(ScriptCReflectionProbe* thisPtr);
		static void Internal_setCustomTexture(ScriptCReflectionProbe* thisPtr, MonoObject* texture);
		static void Internal_capture(ScriptCReflectionProbe* thisPtr);
	};
}
