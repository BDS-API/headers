#pragma once

#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/IContentKeyProvider.h"
#include <functional>
#include <vector>
#include "../../unmapped/Pack.h"
#include "PackSource.h"


class CompositePackSource : PackSource {

public:
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    virtual void forEachPack(std::function<void (Pack &)>);
    ~CompositePackSource();
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    void clear();
    void addPackSource(PackSource *);
    void getPackSources();
    CompositePackSource(std::vector<PackSource *> &&);
    CompositePackSource();
};
