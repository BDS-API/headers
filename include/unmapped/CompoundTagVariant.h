#pragma once

#include "../bedrock/nbt/Tag"


class CompoundTagVariant {

public:

    void get();
    void copy()const;
    void get()const;
    CompoundTagVariant(void);
    CompoundTagVariant(CompoundTagVariant&&);
    CompoundTagVariant(Tag &&);
    void emplace(Tag &&);
};
