#pragma once

#include "ContentLogEndPoint.h"


class WorldSessionEndPoint : ContentLogEndPoint {

public:
    ~WorldSessionEndPoint(); // _ZN20WorldSessionEndPointD2Ev
    virtual void flush(); // _ZN20WorldSessionEndPoint5flushEv
    virtual void setEnabled(bool); // _ZN20WorldSessionEndPoint10setEnabledEb
    virtual bool isEnabled()const; // _ZNK20WorldSessionEndPoint9isEnabledEv
//  virtual void log(LogArea, LogLevel, char const*); //TODO: incomplete function definition // _ZN20WorldSessionEndPoint3logE7LogArea8LogLevelPKc
    WorldSessionEndPoint(IMinecraftEventing &); // _ZN20WorldSessionEndPointC2ER18IMinecraftEventing
};
