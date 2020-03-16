#pragma once

#include "../../unmapped/IWebviewTelemetry.h"
#include "../../unmapped/IPackTelemetry.h"


class IMinecraftEventing : public IPackTelemetry, public IWebviewTelemetry {

public:
    virtual ~IMinecraftEventing(); // _ZN18IMinecraftEventingD2Ev
    virtual void __fake_function0(); // fake
    IMinecraftEventing(); // _ZN18IMinecraftEventingC2Ev
};
