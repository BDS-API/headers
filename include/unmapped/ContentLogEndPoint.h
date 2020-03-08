#pragma once



class ContentLogEndPoint : Bedrock::LogEndPoint {

public:
    virtual ContentLogEndPoint::~ContentLogEndPoint()
    virtual void log(char const*);

    ContentLogEndPoint(void);
};
