#pragma once

#include "../../unmapped/PackIdVersion"
#include "../../unmapped/IContentKeyProvider"
#include "../../unmapped/Pack"


class PackSource {

public:
    virtual void getPackOrigin()const;
    virtual void getPackType()const;

    void resolveUpgradeDependencies(Pack &, IContentKeyProvider const&);
    void fetchPack(PackIdVersion const&);
    PackSource(void);
};
