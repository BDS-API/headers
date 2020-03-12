#pragma once

#include "../bedrock/level/Level.h"
#include <string>
#include "../bedrock/Scheduler.h"
#include "../bedrock/resourcepack/ResourcePackRepository.h"
#include <functional>
#include "../core/Path.h"
#include <memory>
#include "../core/FilePathManager.h"
#include "PackInstance.h"


class FileArchiver {

public:
    class Result;

    static std::string EXTENSION_VANILLA;
    static std::string EXTENSION_TEMPLATE;
    static std::string EXTENSION_RESOURCEPACK;
    static std::string IMPORT_LOCK_FILE;

    void _clearArchiveState();
    void _printStartMessage();
    ~FileArchiver();
    void getOperationPercentage()const;
    void _importWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>);
    void importLevel(Core::Path const&, std::function<void (FileArchiver::Result &)>, bool);
    void archiveLevel(std::string const&, bool, Core::Path const&, std::function<void (FileArchiver::Result &)>);
    void _copyPackToTemp(PackInstance const&, Core::Path const&, FileArchiver::Result &);
    void _printMessage(std::string const&);
    void getCurrentState()const;
    void archivePack(Core::Path const&, Core::Path const&, std::function<void (FileArchiver::Result &)>);
    FileArchiver(Scheduler &, Core::FilePathManager *, ResourcePackRepository &, std::function<void (std::string const&)>);
    void archiveLevel(Level &, bool, Core::Path const&, std::function<void (FileArchiver::Result &)>);
    void _importLegacyWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>);
    void _sanitizeWorld(Core::Path const&);
    void _validatePremiumUpgradePacks(Core::Path const&);
    void _hasResourcePacks(std::string const&)const;
    void _archiveFiles(Core::Path const&, std::string, bool, unsigned long);
    void _printResultMessage(FileArchiver::Result const&);
    void _importVanillaLevel(Core::Path const&, std::function<void (FileArchiver::Result &)>, bool);
//  void generateFilePickerSettings(FileArchiver::ExportType, std::string const&)const; //TODO: incomplete function definition
    void _revertPremiumUpgradePacks(Core::Path const&);
    class Result {

    public:
        Result(FileArchiver::Result &&);
        Result(FileArchiver::Result const&);
        Result();
        ~Result();
    };
};
