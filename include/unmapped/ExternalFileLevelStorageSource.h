#pragma once

#include <string>
#include <memory>
#include <vector>
#include "../bedrock/level/LevelStorageSource.h"


class ExternalFileLevelStorageSource : LevelStorageSource {

public:
    virtual bool isLevelPartiallyCopied(Core::Path const&)const;
    ~ExternalFileLevelStorageSource();
    virtual void getPathToLevel(std::string const&)const;
    virtual bool isConvertible(std::string const&);
    virtual void getLevelList(std::vector<Core::PathBuffer<std::string>> &);
    virtual void saveLevelData(std::string const&, LevelData const&);
    virtual bool isNewLevelIdAcceptable(std::string const&);
    virtual void createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);
//  virtual void convertLevel(std::string const&, ProgressListener *); //TODO: incomplete function definition
    virtual void renameLevel(std::string const&, std::string const&);
    virtual std::string getName()const;
    virtual void renameLevel(LevelData &, Core::Path const&, std::string const&);
    virtual bool requiresConversion(std::string const&);
    virtual std::string getLevelDatFoundPath(Core::Path const&)const;
    virtual void deleteLevel(std::string const&);
    virtual std::string getBasePath()const;
    virtual void createLevelStorage(Scheduler &, std::string const&, ContentIdentity const&, IContentKeyProvider const&);
    virtual void getLevelData(std::string const&)const;
    virtual void getLevelData(std::string const&, LevelData &)const;
    virtual void getPathToLevelInfo(std::string const&, bool)const;
    virtual bool isLevelMarkedForSync(Core::Path const&)const;
    ExternalFileLevelStorageSource(Core::FilePathManager *, std::shared_ptr<SaveTransactionManager>);
};
