#pragma once

#include "../../core/Path.h"
#include "../../unmapped/Pack.h"
#include "../../unmapped/PackManifestFactory.h"
#include "../../unmapped/IContentKeyProvider.h"
#include <functional>
#include <memory>
#include "PackSource.h"


class DirectoryPackSource : PackSource {

public:
    virtual void getPackOrigin()const;
    virtual void getPackType()const;
    ~DirectoryPackSource();
    virtual void forEachPackConst(std::function<void (Pack const&)>)const;
    virtual void forEachPack(std::function<void (Pack &)>);
    virtual void load(PackManifestFactory &, IContentKeyProvider const&);
    void deleteAllPacksAndReset();
    void checkAndRemoveIncompletePacks(Core::Path const&);
//  DirectoryPackSource(Core::Path const&, PackType, PackOrigin, bool); //TODO: incomplete function definition
    std::string getPath()const;
    void _setPath(Core::Path const&);
    void removePack(Core::Path const&);
    void addPack(std::unique_ptr<Pack> &&);
    void _isDiscovered()const;
    bool isCopyable()const;
};
