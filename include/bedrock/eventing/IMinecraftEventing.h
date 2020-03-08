#pragma once

#include "../../unmapped/IWebviewTelemetry"
#include "../../unmapped/IPackTelemetry"


class IMinecraftEventing : IPackTelemetry, IWebviewTelemetry {

public:
    IMinecraftEventing::~IMinecraftEventing()

    IMinecraftEventing(void);
};
