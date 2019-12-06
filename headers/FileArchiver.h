#pragma once

class FileArchiver {

public:

    void FileArchiver(Scheduler &, Core::FilePathManager *, ResourcePackRepository &, std::function<void ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)>);
    void archivePack(Core::Path const&, Core::Path const&, std::function<void ()(FileArchiver::Result &)>);
    void _clearArchiveState(void);
    void _printResultMessage(FileArchiver::Result const&);
    void archiveLevel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, Core::Path const&, std::function<void ()(FileArchiver::Result &)>);
    void _printStartMessage(void);
    void archiveLevel(Level &, bool, Core::Path const&, std::function<void ()(FileArchiver::Result &)>);
    void _archiveFiles(Core::Path const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, bool, unsigned long);
    void _copyPackToTemp(PackInstance const&, Core::Path const&, FileArchiver::Result &);
    void _validatePremiumUpgradePacks(Core::Path const&);
    void _revertPremiumUpgradePacks(Core::Path const&);
    void _printMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void importLevel(Core::Path const&, std::function<void ()(FileArchiver::Result &)>, bool);
    void _importVanillaLevel(Core::Path const&, std::function<void ()(FileArchiver::Result &)>, bool);
    void generateFilePickerSettings(FileArchiver::ExportType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void getOperationPercentage(void)const;
    void getCurrentState(void)const;
    void _hasResourcePacks(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void _importWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>);
    void _sanitizeWorld(Core::Path const&);
    void _importLegacyWorld(Core::Path const&, std::shared_ptr<FileArchiver::Result>);
};
