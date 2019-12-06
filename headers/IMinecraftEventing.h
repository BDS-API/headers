#pragma once

class IMinecraftEventing : IPackTelemetry, IWebviewTelemetry {

public:
    virtual ~IMinecraftEventing();

    void IMinecraftEventing(void);
};
