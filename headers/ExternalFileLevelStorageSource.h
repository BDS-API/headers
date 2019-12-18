#pragma once

class ExternalFileLevelStorageSource : LevelStorageSource {

public:
    virtual ~ExternalFileLevelStorageSource();
    virtual void getName[abi:cxx11](void)const;
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
    virtual void requiresConversion(std::string const&);
    virtual void convertLevel(std::string const&, ProgressListener *);
    virtual bool isLevelMarkedForSync(Core::Path const&)const;
    virtual bool isLevelPartiallyCopied(Core::Path const&)const;
    virtual void getLevelDatFoundPath[abi:cxx11](Core::Path const&)const;
    virtual void getBasePath[abi:cxx11](void)const;
    virtual void getPathToLevel(std::string const&)const;
    virtual void getPathToLevelInfo(std::string const&, bool)const;

    void ExternalFileLevelStorageSource(Core::FilePathManager *, std::shared_ptr<SaveTransactionManager>);
};
