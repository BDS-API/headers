#pragma once

#include "LogEndPoint.h"


class ContentLogEndPoint : Bedrock::LogEndPoint {

public:
    virtual void log(char const*);
    ~ContentLogEndPoint();
    ContentLogEndPoint();
};
