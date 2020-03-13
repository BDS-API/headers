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

    FileArchiver(Scheduler &, Core::FilePathManager *, ResourcePackRepository &, std::function<void (std::string const&)>); // _ZN12FileArchiverC2ER9SchedulerPN4Core15FilePathManagerER22ResourcePackRepositorySt8functionIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
    ~FileArchiver(); // _ZN12FileArchiverD2Ev
    void archivePack(Core::Path const&, Core::Path const&, std::function<void (FileArchiver::Result &)>); // _ZN12FileArchiver11archivePackERKN4Core4PathES3_St8functionIFvRNS_6ResultEEE
    void _clearArchiveState(); // _ZN12FileArchiver18_clearArchiveStateEv
    void _printResultMessage(FileArchiver::Result const&); // _ZN12FileArchiver19_printResultMessageERKNS_6ResultE
    void archiveLevel(std::string const&, bool, Core::Path const&, std::function<void (FileArchiver::Result &)>); // _ZN12FileArchiver12archiveLevelERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbRKN4Core4PathESt8functionIFvRNS_6ResultEEE
    void _printStartMessage(); // _ZN12FileArchiver18_printStartMessageEv
    void archiveLevel(Level &, bool, Core::Path const&, std::function<void (FileArchiver::Result &)>); // _ZN12FileArchiver12archiveLevelER5LevelbRKN4Core4PathESt8functionIFvRNS_6ResultEEE
    void _archiveFiles(Core::Path const&, std::string, bool, unsigned long); // _ZN12FileArchiver13_archiveFilesERKN4Core4PathENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbm
    void _copyPackToTemp(PackInstance const&, Core::Path const&, FileArchiver::Result &); // _ZN12FileArchiver15_copyPackToTempERK12PackInstanceRKN4Core4PathERNS_6ResultE
    void _validatePremiumUpgradePacks(Core::Path const&); // _ZN12FileArchiver28_validatePremiumUpgradePacksERKN4Core4PathE
    void _revertPremiumUpgradePacks(Core::Path const&); // _ZN12FileArchiver26_revertPremiumUpgradePacksERKN4Core4PathE
    void _printMessage(std::string const&); // _ZN12FileArchiver13_printMessageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void importLevel(Core::Path const&, std::function<void (FileArchiver::Result &)>, bool); // _ZN12FileArchiver11importLevelERKN4Core4PathESt8functionIFvRNS_6ResultEEEb
    void _importVanillaLevel(Core::Path const&, std::function<void (FileArchiver::Result &)>, bool); // _ZN12FileArchiver19_importVanillaLevelERKN4Core4PathESt8functionIFvRNS_6ResultEEEb
//  void generateFilePickerSettings(FileArchiver::ExportType, std::string const&)const; //TODO: incomplete function definition // _ZNK12FileArchiver26generateFilePickerSettingsENS_10ExportTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getOperationPercentage()const; // _ZNK12FileArchiver22getOperationPercentageEv
    void getCurrentState()const; // _ZNK12FileArchiver15getCurrentStateEv
    void _hasResourcePacks(std::string const&)const; // _ZNK12FileArchiver17_hasResourcePacksERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _importWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>); // _ZN12FileArchiver12_importWorldERKN4Core4PathESt10shared_ptrINS_6ResultEE
    void _sanitizeWorld(Core::Path const&); // _ZN12FileArchiver14_sanitizeWorldERKN4Core4PathE
    void _importLegacyWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>); // _ZN12FileArchiver18_importLegacyWorldERKN4Core4PathESt10shared_ptrINS_6ResultEE
    class Result {

    public:
        Result(FileArchiver::Result const&); // _ZN12FileArchiver6ResultC2ERKS0_
        Result(FileArchiver::Result &&); // _ZN12FileArchiver6ResultC2EOS0_
        ~Result(); // _ZN12FileArchiver6ResultD2Ev
        Result(); // _ZN12FileArchiver6ResultC2Ev
    };
};
