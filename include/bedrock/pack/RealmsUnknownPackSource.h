#pragma once

#include "../../unmapped/Pack.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../mce/UUID.h"
#include "../../unmapped/IContentKeyProvider.h"
#include <functional>
#include <memory>
#include "PackSource.h"


class RealmsUnknownPackSource : PackSource {

public:
    virtual void getPackOrigin()const;
    ~RealmsUnknownPackSource();
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void getPackType()const;
    virtual void forEachPack(std::function<void (Pack &)>);
    void clearPacks();
    void removePack(mce::UUID const&);
    void addPack(std::unique_ptr<Pack> &&);
//  RealmsUnknownPackSource(PackType, PackOrigin); //TODO: incomplete function definition
};
