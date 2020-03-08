#pragma once

#include "../../unmapped/Pack"
#include "../../unmapped/PackIdVersion"
#include "../../unmapped/IContentKeyProvider"


class PackSource {

public:
    virtual void getPackOrigin()const;
    virtual void getPackType()const;

    void resolveUpgradeDependencies(Pack &, IContentKeyProvider const&);
    void fetchPack(PackIdVersion const&);
    PackSource(void);
};
