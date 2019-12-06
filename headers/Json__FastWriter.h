#pragma once

class Json::FastWriter : Json::Writer {

public:
    virtual ~FastWriter();

    void FastWriter(void);
    void enableYAMLCompatibility(void);
    void writeValue(Json::Value const&);
};
