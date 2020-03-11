#pragma once

#include "../core/Path.h"
#include "../bedrock/resourcepack/ResourcePackRepository.h"
#include "../core/FilePathManager.h"
#include "./PackInstance.h"
#include "../bedrock/Scheduler.h"
#include <memory>
#include "../bedrock/level/Level.h"
#include "./Result.h"
#include <functional>
#include <string>


class FileArchiver {

public:
    static std::string EXTENSION_VANILLA;
    static std::string EXTENSION_TEMPLATE;
    static std::string EXTENSION_RESOURCEPACK;
    static std::string IMPORT_LOCK_FILE;


//  FileArchiver(Scheduler &, Core::FilePathManager *, ResourcePackRepository &, std::function<void (std::string const&)>); //TODO: incomplete function definition
    ~FileArchiver();
//  void archivePack(Core::Path const&, Core::Path const&, std::function<void (FileArchiver::Result &)>); //TODO: incomplete function definition
    void _clearArchiveState();
    void _printResultMessage(FileArchiver::Result const&);
//  void archiveLevel(std::string const&, bool, Core::Path const&, std::function<void (FileArchiver::Result &)>); //TODO: incomplete function definition
    void _printStartMessage();
//  void archiveLevel(Level &, bool, Core::Path const&, std::function<void (FileArchiver::Result &)>); //TODO: incomplete function definition
    void _archiveFiles(Core::Path const&, std::string, bool, unsigned long);
    void _copyPackToTemp(PackInstance const&, Core::Path const&, FileArchiver::Result &);
    void _validatePremiumUpgradePacks(Core::Path const&);
    void _revertPremiumUpgradePacks(Core::Path const&);
    void _printMessage(std::string const&);
//  void importLevel(Core::Path const&, std::function<void (FileArchiver::Result &)>, bool); //TODO: incomplete function definition
//  void _importVanillaLevel(Core::Path const&, std::function<void (FileArchiver::Result &)>, bool); //TODO: incomplete function definition
//  void generateFilePickerSettings(FileArchiver::ExportType, std::string const&)const; //TODO: incomplete function definition
    void getOperationPercentage()const;
    void getCurrentState()const;
    void _hasResourcePacks(std::string const&)const;
    void _importWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>);
    void _sanitizeWorld(Core::Path const&);
    void _importLegacyWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>);
};
