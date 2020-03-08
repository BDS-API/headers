#pragma once

#include "../bedrock/eventing/IMinecraftEventing"


class WorldSessionEndPoint : ContentLogEndPoint {

public:
    WorldSessionEndPoint::~WorldSessionEndPoint()
    virtual void flush();
    virtual void setEnabled(bool);
    virtual bool isEnabled()const;
    virtual void log(LogArea, LogLevel, char const*);

    WorldSessionEndPoint(IMinecraftEventing &);
};
