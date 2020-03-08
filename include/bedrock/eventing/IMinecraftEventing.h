#pragma once

#include "../../unmapped/IWebviewTelemetry"
#include "../../unmapped/IPackTelemetry"


class IMinecraftEventing : IPackTelemetry, IWebviewTelemetry {

public:
    virtual IMinecraftEventing::~IMinecraftEventing()

    IMinecraftEventing(void);
};
