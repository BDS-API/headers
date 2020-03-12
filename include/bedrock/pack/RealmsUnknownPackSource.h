#pragma once

#include <memory>
#include "PackSource.h"
#include <functional>


class RealmsUnknownPackSource : PackSource {

public:
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    virtual void forEachPack(std::function<void (Pack &)>);
    ~RealmsUnknownPackSource();
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
//  RealmsUnknownPackSource(PackType, PackOrigin); //TODO: incomplete function definition
    void removePack(mce::UUID const&);
    void clearPacks();
    void addPack(std::unique_ptr<Pack> &&);
};
