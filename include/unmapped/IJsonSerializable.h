#pragma once



class IJsonSerializable {

public:
    virtual IJsonSerializable::~IJsonSerializable()

    IJsonSerializable(void);
    IJsonSerializable(IJsonSerializable const&);
};
