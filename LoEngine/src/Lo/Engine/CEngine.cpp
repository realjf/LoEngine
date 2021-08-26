#include "CEngine.h"

#include <Lo/Core/LCommon.h>

namespace Lo
{

	LoEngine* CreateLoEngine()
	{
		return CEngine::create();
	}

	CEngine::CEngine()
	{

	}

	CEngine::~CEngine()
	{

	}

	void CEngine::release()
	{
		CEngine::destroy();
	}

	CEngine* CEngine::create()
	{
		LASSERT(!m_Instance);
		m_Instance = new CEngine();
		return m_Instance;
	}

	void CEngine::destroy()
	{
		LASSERT(m_Instance);
		delete m_Instance;
		m_Instance = nullptr;
	}

	Lo::CEngine* CEngine::m_Instance = nullptr;

}