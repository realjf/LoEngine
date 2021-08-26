#pragma once

#include <Lo/Engine/LoEngine.h>

namespace Lo
{

	class CEngine : public Lo::LoEngine
	{
	private:
		CEngine();
		~CEngine();

	public:
		virtual void release() override;

	public:
		static CEngine* create();

	private:
		static void destroy();
		static CEngine* m_Instance;
	};

}