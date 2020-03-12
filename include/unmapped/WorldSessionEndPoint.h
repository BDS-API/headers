#pragma once

#include "ContentLogEndPoint.h"


class WorldSessionEndPoint : ContentLogEndPoint {

public:
    ~WorldSessionEndPoint();
//  virtual void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition
    virtual void flush();
    virtual void setEnabled(bool);
    virtual bool isEnabled()const;
    WorldSessionEndPoint(IMinecraftEventing &);
};
