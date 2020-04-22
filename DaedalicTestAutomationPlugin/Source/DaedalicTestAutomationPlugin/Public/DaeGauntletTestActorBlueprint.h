#pragma once

#include <CoreMinimal.h>
#include <Engine/Blueprint.h>
#include "DaeGauntletTestActorBlueprint.generated.h"

/** Single automated test to be run as part of a test suite. */
UCLASS(BlueprintType)
class DAEDALICTESTAUTOMATIONPLUGIN_API UDaeGauntletTestActorBlueprint : public UBlueprint
{
    GENERATED_BODY()

public:
#if WITH_EDITOR
    // UBlueprint interface
    virtual bool SupportedByDefaultBlueprintFactory() const override
    {
        return false;
    }
    // End of UBlueprint interface
#endif
};
