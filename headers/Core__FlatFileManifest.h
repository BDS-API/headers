#pragma once

class Core::FlatFileManifest {

public:

    void FlatFileManifest(void);
    void _clear(void);
    void _createFromVector(Core::Path const&, std::vector<Core::FlatFileManifestInfo, std::allocator<Core::FlatFileManifestInfo>> const&, unsigned long, bool);
    void _mergeDuplicateEntries(unsigned long, Core::FlatFileManifestInfo &);
    void _addMissingDirectoriesForEntry(Core::Path const&);
    void createFromVectorWithValidation(Core::Path const&, std::vector<Core::FlatFileManifestInfo, std::allocator<Core::FlatFileManifestInfo>> const&, unsigned long);
    void _verifyUniqueFileNamesDebugPrint(void)const;
    void readFromStream(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Core::Path const&, bool);
    void _readHeaderFromStream(ReadOnlyBinaryStream &);
    void writeToStream(BinaryStream &)const;
    void _writeHeaderToStream(BinaryStream &)const;
    void findFileOrDirectoryEntry(Core::Path const&, bool)const;
    bool isValid(void)const;
    void getEntriesCount(void)const;
    void getByIndex(unsigned long)const;
    void getByIndex(unsigned long);
};
