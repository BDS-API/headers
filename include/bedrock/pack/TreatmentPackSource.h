#pragma once

#include "../../core/Path.h"
#include "./PackSource.h"
#include <memory>
#include "../../unmapped/IContentKeyProvider.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/Pack.h"
#include <functional>
#include <string>


class TreatmentPackSource : PackSource {

public:
    virtual ~TreatmentPackSource();
//  virtual void forEachPackConst(std::function<void (Pack const&)>)const; //TODO: incomplete function definition
//  virtual void forEachPack(std::function<void (Pack &)>); //TODO: incomplete function definition
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);

//  TreatmentPackSource(Core::Path const&, PackType); //TODO: incomplete function definition
    std::string getPath()const;
    bool isCopyable()const;
    void addPack(std::unique_ptr<Pack, std::default_delete<Pack>> &&);
    void removePack(Core::Path const&);
};
