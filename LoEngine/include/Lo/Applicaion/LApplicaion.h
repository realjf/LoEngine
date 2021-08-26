#pragma once

#include "Lo/Core/LCommon.h"

#include <Lo/Engine/LoEngine.h>

namespace Lo
{
	class LO_API LApplication
	{
	public:
		LApplication();
		virtual ~LApplication();


		virtual void onInit() {}
		virtual void onQuit() {}
		virtual void onUpdate() {}

		void run();
		void quit();

	public:
		static LApplication* get();

	private:
		static LApplication* m_Instance;
		bool m_IsRunning = true;
		LoEngine* m_Engine = nullptr;
	};
}