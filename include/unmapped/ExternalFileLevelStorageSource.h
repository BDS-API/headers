#pragma once

#include "../core/FilePathManager"
#include "../bedrock/Scheduler"
#include "../bedrock/level/LevelStorageSource"
#include "../bedrock/level/LevelData"
#include "../core/Path"


class ExternalFileLevelStorageSource : LevelStorageSource {

public:
    virtual ExternalFileLevelStorageSource::~ExternalFileLevelStorageSource()
    virtual void getName()const;
    virtual void getLevelData(std::string const&)const;
    virtual void getLevelData(std::string const&, LevelData &)const;
    virtual void saveLevelData(std::string const&, LevelData const&);
    virtual void getLevelList(std::vector<Core::PathBuffer<std::string>, std::allocator<Core::PathBuffer<std::string>>> &);
    virtual void createLevelStorage(Scheduler &, std::string const&, ContentIdentity const&, IContentKeyProvider const&);
    virtual bool isNewLevelIdAcceptable(std::string const&);
    virtual void deleteLevel(std::string const&);
    virtual void renameLevel(std::string const&, std::string const&);
    virtual void renameLevel(LevelData &, Core::Path const&, std::string const&);
    virtual void createBackupCopyOfWorld(std::string const&, std::string const&, std::string const&);
    virtual bool isConvertible(std::string const&);
    virtual bool requiresConversion(std::string const&);
    virtual void convertLevel(std::string const&, ProgressListener *);
    virtual bool isLevelMarkedForSync(Core::Path const&)const;
    virtual bool isLevelPartiallyCopied(Core::Path const&)const;
    virtual void getLevelDatFoundPath(Core::Path const&)const;
    virtual void getBasePath()const;
    virtual void getPathToLevel(std::string const&)const;
    virtual void getPathToLevelInfo(std::string const&, bool)const;

    ExternalFileLevelStorageSource(Core::FilePathManager *, std::shared_ptr<SaveTransactionManager>);
};
