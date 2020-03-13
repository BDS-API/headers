#pragma once



class PackSource {

public:
    virtual void getPackOrigin()const; // _ZNK10PackSource13getPackOriginEv
    virtual void getPackType()const; // _ZNK10PackSource11getPackTypeEv
    ~PackSource(); // _ZN10PackSourceD2Ev
    void resolveUpgradeDependencies(Pack &, IContentKeyProvider const&); // _ZN10PackSource26resolveUpgradeDependenciesER4PackRK19IContentKeyProvider
    void fetchPack(PackIdVersion const&); // _ZN10PackSource9fetchPackERK13PackIdVersion
    PackSource(); // _ZN10PackSourceC2Ev
};
