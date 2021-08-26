#include "Lo/Applicaion/LApplicaion.h"
#include <stdexcept>

namespace Lo
{
	LApplication* LApplication::m_Instance = nullptr;

	LApplication::LApplication()
	{
		LASSERT(!m_Instance);
		m_Instance = this;
		m_Engine = CreateLoEngine();
	}

	LApplication::~LApplication()
	{
		m_Engine->release();
	}

	void LApplication::run()
	{
		onInit();

		while (m_IsRunning) 
		{
			onUpdate();
		}

		onQuit();
	}

	void LApplication::quit()
	{
		m_IsRunning = false;
	}

	LApplication* LApplication::get()
	{
		LASSERT(m_Instance);
		return m_Instance;
	}

}

