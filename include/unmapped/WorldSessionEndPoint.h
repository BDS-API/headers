#pragma once

#include "../bedrock/eventing/IMinecraftEventing.h"
#include "./ContentLogEndPoint.h"


class WorldSessionEndPoint : ContentLogEndPoint {

public:
    virtual ~WorldSessionEndPoint();
    virtual void flush();
    virtual void setEnabled(bool);
    virtual bool isEnabled()const;
//  virtual void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition

    WorldSessionEndPoint(IMinecraftEventing &);
};
