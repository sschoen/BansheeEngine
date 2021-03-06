#include "BsScriptVector4I.generated.h"
#include "BsMonoMethod.h"
#include "BsMonoClass.h"
#include "BsMonoUtil.h"

namespace bs
{
	ScriptVector4I::ScriptVector4I(MonoObject* managedInstance)
		:ScriptObject(managedInstance)
	{ }

	void ScriptVector4I::initRuntimeData()
	{ }

	MonoObject*ScriptVector4I::box(const Vector4I& value)
	{
		return MonoUtil::box(metaData.scriptClass->_getInternalClass(), (void*)&value);
	}

	Vector4I ScriptVector4I::unbox(MonoObject* value)
	{
		return *(Vector4I*)MonoUtil::unbox(value);
	}

}
