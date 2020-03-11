#pragma once

#include "../../unmapped/IPackTelemetry.h"
#include "../../unmapped/IWebviewTelemetry.h"


class IMinecraftEventing : IPackTelemetry, IWebviewTelemetry {

public:
    virtual ~IMinecraftEventing();

    IMinecraftEventing();
};
