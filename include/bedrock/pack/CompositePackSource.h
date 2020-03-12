#pragma once

#include "PackSource.h"
#include <vector>
#include <functional>


class CompositePackSource : PackSource {

public:
    ~CompositePackSource();
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    virtual void forEachPack(std::function<void (Pack &)>);
    void getPackSources();
    CompositePackSource();
    CompositePackSource(std::vector<PackSource *> &&);
    void clear();
    void addPackSource(PackSource *);
};
