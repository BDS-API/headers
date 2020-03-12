#pragma once



class CompoundTagVariant {

public:
    void get();
    void get()const;
    void operator->()const;
    CompoundTagVariant(Tag &&);
    void operator*()const;
    CompoundTagVariant(CompoundTagVariant &&);
    void emplace(Tag &&);
    ~CompoundTagVariant();
    void copy()const;
    CompoundTagVariant();
};
