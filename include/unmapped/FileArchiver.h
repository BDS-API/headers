#pragma once

#include <string>
#include <memory>
#include <functional>


class FileArchiver {

public:
    class Result;

    static std::string EXTENSION_VANILLA;
    static std::string EXTENSION_TEMPLATE;
    static std::string EXTENSION_RESOURCEPACK;
    static std::string IMPORT_LOCK_FILE;

    void archiveLevel(Level &, bool, Core::Path const&, std::function<void (FileArchiver::Result &)>);
    void _clearArchiveState();
    void _importWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>);
    void _importLegacyWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>);
    void _sanitizeWorld(Core::Path const&);
    void _printResultMessage(FileArchiver::Result const&);
    void archiveLevel(std::string const&, bool, Core::Path const&, std::function<void (FileArchiver::Result &)>);
    void archivePack(Core::Path const&, Core::Path const&, std::function<void (FileArchiver::Result &)>);
    void _importVanillaLevel(Core::Path const&, std::function<void (FileArchiver::Result &)>, bool);
    void getOperationPercentage()const;
    ~FileArchiver();
    void _hasResourcePacks(std::string const&)const;
    FileArchiver(Scheduler &, Core::FilePathManager *, ResourcePackRepository &, std::function<void (std::string const&)>);
    void _revertPremiumUpgradePacks(Core::Path const&);
//  void generateFilePickerSettings(FileArchiver::ExportType, std::string const&)const; //TODO: incomplete function definition
    void _archiveFiles(Core::Path const&, std::string, bool, unsigned long);
    void _copyPackToTemp(PackInstance const&, Core::Path const&, FileArchiver::Result &);
    void importLevel(Core::Path const&, std::function<void (FileArchiver::Result &)>, bool);
    void _printMessage(std::string const&);
    void _printStartMessage();
    void _validatePremiumUpgradePacks(Core::Path const&);
    void getCurrentState()const;
    class Result {

    public:
        Result();
        Result(FileArchiver::Result &&);
        Result(FileArchiver::Result const&);
        ~Result();
    };
};
