#pragma once

#include "./LogEndPoint.h"


class ContentLogEndPoint : Bedrock::LogEndPoint {

public:
    virtual ~ContentLogEndPoint();
    virtual void log(char const*);

    ContentLogEndPoint();
};
