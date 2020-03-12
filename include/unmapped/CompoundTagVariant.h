#pragma once

#include "../bedrock/nbt/Tag.h"


class CompoundTagVariant {

public:
    void operator->()const;
    void emplace(Tag &&);
    void get()const;
    void operator*()const;
    void get();
    CompoundTagVariant(Tag &&);
    ~CompoundTagVariant();
    CompoundTagVariant(CompoundTagVariant &&);
    void copy()const;
    CompoundTagVariant();
};
