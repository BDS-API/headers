#pragma once

#include "../../unmapped/IContentKeyProvider.h"
#include "../../unmapped/PackIdVersion.h"
#include "../../unmapped/Pack.h"


class PackSource {

public:
    virtual void getPackType()const;
    virtual void getPackOrigin()const;
    void resolveUpgradeDependencies(Pack &, IContentKeyProvider const&);
    ~PackSource();
    void fetchPack(PackIdVersion const&);
    PackSource();
};
