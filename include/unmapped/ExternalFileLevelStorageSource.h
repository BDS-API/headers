#pragma once

#include "SaveTransactionManager.h"
#include "../bedrock/level/LevelData.h"
#include "IContentKeyProvider.h"
#include <string>
#include "../bedrock/Scheduler.h"
#include "ContentIdentity.h"
#include "../bedrock/level/LevelStorageSource.h"
#include "../core/Path.h"
#include <vector>
#include <memory>
#include "../core/FilePathManager.h"


class ExternalFileLevelStorageSource : LevelStorageSource {

public:
//  virtual void getLevelList(std::vector<Core::PathBuffer<std::string>> &); //TODO: incomplete function definition
    virtual void getLevelData(std::string const&, LevelData &)const;
    virtual void createLevelStorage(Scheduler &, std::string const&, ContentIdentity const&, IContentKeyProvider const&);
    virtual std::string getName()const;
    virtual bool isNewLevelIdAcceptable(std::string const&);
    virtual void getPathToLevel(std::string const&)const;
//  virtual void convertLevel(std::string const&, ProgressListener *); //TODO: incomplete function definition
    virtual bool isConvertible(std::string const&);
    virtual void getLevelData(std::string const&)const;
    virtual void renameLevel(LevelData &, Core::Path const&, std::string const&);
    virtual std::string getBasePath()const;
    virtual void createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);
    virtual void getPathToLevelInfo(std::string const&, bool)const;
    virtual bool isLevelMarkedForSync(Core::Path const&)const;
    virtual void renameLevel(std::string const&, std::string const&);
    virtual std::string getLevelDatFoundPath(Core::Path const&)const;
    virtual void saveLevelData(std::string const&, LevelData const&);
    ~ExternalFileLevelStorageSource();
    virtual void deleteLevel(std::string const&);
    virtual bool isLevelPartiallyCopied(Core::Path const&)const;
    virtual bool requiresConversion(std::string const&);
    ExternalFileLevelStorageSource(Core::FilePathManager *, std::shared_ptr<SaveTransactionManager>);
};
