#pragma once



class CompoundTagVariant {

public:
    void operator*()const; // _ZNK18CompoundTagVariantdeEv
    void get(); // _ZN18CompoundTagVariant3getEv
    void copy()const; // _ZNK18CompoundTagVariant4copyEv
    ~CompoundTagVariant(); // _ZN18CompoundTagVariantD2Ev
    void get()const; // _ZNK18CompoundTagVariant3getEv
    void operator->()const; // _ZNK18CompoundTagVariantptEv
    CompoundTagVariant(); // _ZN18CompoundTagVariantC2Ev
    CompoundTagVariant(CompoundTagVariant &&); // _ZN18CompoundTagVariantC2EOS_
    CompoundTagVariant(Tag &&); // _ZN18CompoundTagVariantC2EO3Tag
    void emplace(Tag &&); // _ZN18CompoundTagVariant7emplaceEO3Tag
};
