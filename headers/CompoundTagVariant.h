#pragma once

class CompoundTagVariant {

public:

    void get(void);
    void copy(void)const;
    void get(void)const;
    void CompoundTagVariant(void);
    void CompoundTagVariant(CompoundTagVariant&&);
    void CompoundTagVariant(Tag &&);
    void emplace(Tag &&);
};
