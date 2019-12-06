#pragma once

class VanillaInPackagePacks : IInPackagePacks {

public:
    virtual ~VanillaInPackagePacks();
    virtual void getPacks(PackType)const;

    void VanillaInPackagePacks(void);
};
