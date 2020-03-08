#pragma once



class ContentLogEndPoint : Bedrock::LogEndPoint {

public:
    ContentLogEndPoint::~ContentLogEndPoint()
    virtual void log(char const*);

    ContentLogEndPoint(void);
};
