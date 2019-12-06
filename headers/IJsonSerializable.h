#pragma once

class IJsonSerializable {

public:
    virtual ~IJsonSerializable();

    void IJsonSerializable(void);
    void IJsonSerializable(IJsonSerializable const&);
};
