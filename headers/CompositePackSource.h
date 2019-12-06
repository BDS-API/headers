#pragma once

class CompositePackSource : PackSource {

public:
    virtual ~CompositePackSource();
    virtual void forEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void forEachPack(std::function<void ()(Pack &)>);
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

    void CompositePackSource(void);
    void CompositePackSource(std::vector<PackSource *, std::allocator<PackSource *>> &&);
    void addPackSource(PackSource *);
    void clear(void);
    void getPackSources(void);
};
