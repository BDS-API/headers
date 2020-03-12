#pragma once

#include <string>
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "Path.h"
#include <vector>
#include "../bedrock/io/BinaryStream.h"
#include "FlatFileManifestInfo.h"


namespace Core {

    class FlatFileManifest {

    public:
        void getByIndex(unsigned long)const;
        FlatFileManifest();
        void getByIndex(unsigned long);
        void getEntriesCount()const;
        ~FlatFileManifest();
        void _verifyUniqueFileNamesDebugPrint()const;
        void writeToStream(BinaryStream &)const;
        void findFileOrDirectoryEntry(Core::Path const&, bool)const;
        void _clear();
        void _addMissingDirectoriesForEntry(Core::Path const&);
        void readFromStream(std::string const&, Core::Path const&, bool);
        void _writeHeaderToStream(BinaryStream &)const;
        bool isValid()const;
        void _mergeDuplicateEntries(unsigned long, Core::FlatFileManifestInfo &);
        void _readHeaderFromStream(ReadOnlyBinaryStream &);
        std::string getManifestPath()const;
        void createFromVectorWithValidation(Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&, unsigned long);
        void _createFromVector(Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&, unsigned long, bool);
    };
}
