#pragma once

#include <Lo/Core/LCommon.h>

namespace Lo
{

	class LoEngine
	{
	public:
		LoEngine() {}
		~LoEngine() {}

		virtual void release() = 0;

	};

	LO_API LoEngine* CreateLoEngine();

}