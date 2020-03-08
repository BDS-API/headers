#pragma once

#include "../../unmapped/IContentKeyProvider"
#include "../../unmapped/PackManifestFactory"


class CompositePackSource : PackSource {

public:
    virtual CompositePackSource::~CompositePackSource()
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    CompositePackSource(void);
    CompositePackSource(std::vector<PackSource *, std::allocator<PackSource *>> &&);
    void addPackSource(PackSource *);
    void clear();
    void getPackSources();
};
