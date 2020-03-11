#pragma once

#include "./PackSource.h"
#include <memory>
#include "../../unmapped/IContentKeyProvider.h"
#include <vector>
#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/Pack.h"
#include <functional>


class CompositePackSource : PackSource {

public:
    virtual ~CompositePackSource();
//  virtual void forEachPackConst(std::function<void (Pack const&)>)const; //TODO: incomplete function definition
//  virtual void forEachPack(std::function<void (Pack &)>); //TODO: incomplete function definition
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    CompositePackSource();
    CompositePackSource(std::vector<PackSource *, std::allocator<PackSource *>> &&);
    void addPackSource(PackSource *);
    void clear();
    void getPackSources();
};
