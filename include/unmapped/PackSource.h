#pragma once

class PackSource {

public:
    virtual void getPackOrigin(void)const;
    virtual void getPackType(void)const;

    void resolveUpgradeDependencies(Pack &, IContentKeyProvider const&);
    void fetchPack(PackIdVersion const&);
    PackSource(void);
};
