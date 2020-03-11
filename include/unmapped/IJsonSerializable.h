#pragma once

#include "./IJsonSerializable.h"


class IJsonSerializable {

public:
    virtual ~IJsonSerializable();

    IJsonSerializable();
    IJsonSerializable(IJsonSerializable const&);
};
