#pragma once

#include "../core/Path.h"
#include "../core/FilePathManager.h"
#include "./ContentIdentity.h"
#include "../bedrock/Scheduler.h"
#include <memory>
#include "./SaveTransactionManager.h"
#include "./IContentKeyProvider.h"
#include <vector>
#include "../bedrock/level/LevelStorageSource.h"
#include "../bedrock/level/LevelData.h"
#include <string>


class ExternalFileLevelStorageSource : LevelStorageSource {

public:
    virtual ~ExternalFileLevelStorageSource();
    virtual std::string getName()const;
    virtual void getLevelData(std::string const&)const;
    virtual void getLevelData(std::string const&, LevelData &)const;
    virtual void saveLevelData(std::string const&, LevelData const&);
//  virtual void getLevelList(std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &); //TODO: incomplete function definition
    virtual void createLevelStorage(Scheduler &, std::string const&, ContentIdentity const&, IContentKeyProvider const&);
    virtual bool isNewLevelIdAcceptable(std::string const&);
    virtual void deleteLevel(std::string const&);
    virtual void renameLevel(std::string const&, std::string const&);
    virtual void renameLevel(LevelData &, Core::Path const&, std::string const&);
    virtual void createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);
    virtual bool isConvertible(std::string const&);
    virtual bool requiresConversion(std::string const&);
//  virtual void convertLevel(std::string const&, ProgressListener *); //TODO: incomplete function definition
    virtual bool isLevelMarkedForSync(Core::Path const&)const;
    virtual bool isLevelPartiallyCopied(Core::Path const&)const;
    virtual std::string getLevelDatFoundPath(Core::Path const&)const;
    virtual std::string getBasePath()const;
    virtual void getPathToLevel(std::string const&)const;
    virtual void getPathToLevelInfo(std::string const&, bool)const;

    ExternalFileLevelStorageSource(Core::FilePathManager *, std::shared_ptr<SaveTransactionManager>);
};
