#pragma once

class IMinecraftEventing : IPackTelemetry, IWebviewTelemetry {

public:
    virtual IMinecraftEventing::~IMinecraftEventing();

    IMinecraftEventing(void);
};
