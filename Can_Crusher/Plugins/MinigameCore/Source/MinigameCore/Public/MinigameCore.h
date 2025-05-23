﻿// Copyright Limbitless Solutions, Inc. All Rights Reserved


#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FMinigameCoreModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};


