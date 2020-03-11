#pragma once

#include "../../unmapped/IContentKeyProvider.h"
#include "../../unmapped/PackIdVersion.h"
#include "../../unmapped/Pack.h"


class PackSource {

public:
    virtual void getPackOrigin()const;
    virtual void getPackType()const;

    ~PackSource();
    ~PackSource();
    void resolveUpgradeDependencies(Pack &, IContentKeyProvider const&);
    void fetchPack(PackIdVersion const&);
    PackSource();
};
