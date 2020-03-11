#pragma once

#include "../../mce/UUID.h"
#include "./PackSource.h"
#include <memory>
#include "../../unmapped/IContentKeyProvider.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/Pack.h"
#include <functional>


class RealmsUnknownPackSource : PackSource {

public:
    virtual ~RealmsUnknownPackSource();
//  virtual void forEachPackConst(std::function<void (Pack const&)>)const; //TODO: incomplete function definition
//  virtual void forEachPack(std::function<void (Pack &)>); //TODO: incomplete function definition
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

//  RealmsUnknownPackSource(PackType, PackOrigin); //TODO: incomplete function definition
    void addPack(std::unique_ptr<Pack, std::default_delete<Pack>> &&);
    void removePack(mce::UUID const&);
    void clearPacks();
};
