#pragma once

#include <Lo/Applicaion/LApplicaion.h>


class ExampleApplication : public Lo::LApplication
{
public:
	ExampleApplication();
	~ExampleApplication();

	virtual void onInit();
	virtual void onQuit();
	virtual void onUpdate();
};

