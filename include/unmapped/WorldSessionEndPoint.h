#pragma once

#include "ContentLogEndPoint.h"
#include "../bedrock/eventing/IMinecraftEventing.h"


class WorldSessionEndPoint : ContentLogEndPoint {

public:
    ~WorldSessionEndPoint();
    virtual bool isEnabled()const;
//  virtual void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition
    virtual void flush();
    virtual void setEnabled(bool);
    WorldSessionEndPoint(IMinecraftEventing &);
};
