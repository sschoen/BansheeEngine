#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "BsScriptObject.h"
#include "../../../bsf/Source/Foundation/bsfCore/Particles/BsParticleEvolver.h"
#include "../../../bsf/Source/Foundation/bsfCore/Particles/BsParticleDistribution.h"
#include "../../../bsf/Source/Foundation/bsfCore/Particles/BsParticleDistribution.h"

namespace bs
{
	struct __PARTICLE_SIZE_DESCInterop
	{
		MonoObject* size;
		MonoObject* size3D;
		bool use3DSize;
	};

	class BS_SCR_BE_EXPORT ScriptPARTICLE_SIZE_DESC : public ScriptObject<ScriptPARTICLE_SIZE_DESC>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "ParticleSizeOptions")

		static MonoObject* box(const __PARTICLE_SIZE_DESCInterop& value);
		static __PARTICLE_SIZE_DESCInterop unbox(MonoObject* value);
		static PARTICLE_SIZE_DESC fromInterop(const __PARTICLE_SIZE_DESCInterop& value);
		static __PARTICLE_SIZE_DESCInterop toInterop(const PARTICLE_SIZE_DESC& value);

	private:
		ScriptPARTICLE_SIZE_DESC(MonoObject* managedInstance);

	};
}
