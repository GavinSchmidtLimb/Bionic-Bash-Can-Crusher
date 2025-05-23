﻿// MIT License - Copyright (c) 2022 Jared Cook
#pragma once
#include "Modules/ModuleInterface.h"
#include "CoreMinimal.h"

class FCTweenModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
