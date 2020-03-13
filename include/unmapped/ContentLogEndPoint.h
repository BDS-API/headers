#pragma once

#include "LogEndPoint.h"


class ContentLogEndPoint : Bedrock::LogEndPoint {

public:
    ~ContentLogEndPoint(); // _ZN18ContentLogEndPointD2Ev
    virtual void log(char const*); // _ZN18ContentLogEndPoint3logEPKc
    ContentLogEndPoint(); // _ZN18ContentLogEndPointC2Ev
};
