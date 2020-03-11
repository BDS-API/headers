#pragma once

#include "./CompoundTagVariant.h"
#include "../bedrock/nbt/Tag.h"


class CompoundTagVariant {

public:

    void operator*()const;
    void get();
    void copy()const;
    ~CompoundTagVariant();
    void get()const;
    void operator->()const;
    CompoundTagVariant();
    CompoundTagVariant(CompoundTagVariant &&);
    CompoundTagVariant(Tag &&);
    void emplace(Tag &&);
};
