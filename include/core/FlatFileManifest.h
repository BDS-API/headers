#pragma once

#include "./FlatFileManifestInfo.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include <memory>
#include <vector>
#include "../bedrock/io/BinaryStream.h"
#include "./Path.h"
#include <string>


namespace Core {

class FlatFileManifest {

public:

    std::string getManifestPath()const;
    FlatFileManifest();
    ~FlatFileManifest();
    void _clear();
    void _createFromVector(Core::Path const&, std::vector<Core::FlatFileManifestInfo, std::allocator<Core::FlatFileManifestInfo>> const&, unsigned long, bool);
    void _mergeDuplicateEntries(unsigned long, Core::FlatFileManifestInfo &);
    void _addMissingDirectoriesForEntry(Core::Path const&);
    void createFromVectorWithValidation(Core::Path const&, std::vector<Core::FlatFileManifestInfo, std::allocator<Core::FlatFileManifestInfo>> const&, unsigned long);
    void _verifyUniqueFileNamesDebugPrint()const;
    void readFromStream(std::string const&, Core::Path const&, bool);
    void _readHeaderFromStream(ReadOnlyBinaryStream &);
    void writeToStream(BinaryStream &)const;
    void _writeHeaderToStream(BinaryStream &)const;
    void findFileOrDirectoryEntry(Core::Path const&, bool)const;
    bool isValid()const;
    void getEntriesCount()const;
    void getByIndex(unsigned long)const;
    void getByIndex(unsigned long);
};

}