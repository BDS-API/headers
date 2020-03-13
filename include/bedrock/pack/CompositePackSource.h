#pragma once

#include <functional>
#include "PackSource.h"
#include <vector>


class CompositePackSource : PackSource {

public:
    ~CompositePackSource(); // _ZN19CompositePackSourceD2Ev
    virtual void forEachPackConst(std::function<void (Pack const&)>)const; // _ZNK19CompositePackSource16forEachPackConstESt8functionIFvRK4PackEE
    virtual void forEachPack(std::function<void (Pack &)>); // _ZN19CompositePackSource11forEachPackESt8functionIFvR4PackEE
    virtual void load(PackManifestFactory &, IContentKeyProvider const&); // _ZN19CompositePackSource4loadER19PackManifestFactoryRK19IContentKeyProvider
    CompositePackSource(); // _ZN19CompositePackSourceC2Ev
    CompositePackSource(std::vector<PackSource *> &&); // _ZN19CompositePackSourceC2EOSt6vectorIP10PackSourceSaIS2_EE
    void addPackSource(PackSource *); // _ZN19CompositePackSource13addPackSourceEP10PackSource
    void clear(); // _ZN19CompositePackSource5clearEv
    void getPackSources(); // _ZN19CompositePackSource14getPackSourcesEv
};
