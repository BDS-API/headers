#pragma once

class Json::FastWriter : Json::Writer {

public:
    virtual ~FastWriter();
    virtual void write[abi:cxx11](Json::Value const&);

    void FastWriter(void);
    void enableYAMLCompatibility(void);
    void writeValue(Json::Value const&);
};
