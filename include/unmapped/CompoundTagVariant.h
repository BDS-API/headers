#pragma once

class CompoundTagVariant {

public:

    void get(void);
    void copy(void)const;
    void get(void)const;
    CompoundTagVariant(void);
    CompoundTagVariant(CompoundTagVariant&&);
    CompoundTagVariant(Tag &&);
    void emplace(Tag &&);
};
