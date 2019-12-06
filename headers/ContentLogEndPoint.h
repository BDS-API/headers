#pragma once

class ContentLogEndPoint : Bedrock::LogEndPoint {

public:
    virtual ~ContentLogEndPoint();
    virtual void log(char const*);

    void ContentLogEndPoint(void);
};
