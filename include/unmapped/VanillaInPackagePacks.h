#pragma once



class VanillaInPackagePacks : IInPackagePacks {

public:
    virtual VanillaInPackagePacks::~VanillaInPackagePacks()
    virtual void getPacks(PackType)const;

    VanillaInPackagePacks(void);
};
