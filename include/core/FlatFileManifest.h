#pragma once

#include <string>
#include <vector>


namespace Core {

    class FlatFileManifest {

    public:
        void createFromVectorWithValidation(Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&, unsigned long);
        void _mergeDuplicateEntries(unsigned long, Core::FlatFileManifestInfo &);
        std::string getManifestPath()const;
        void getByIndex(unsigned long);
        bool isValid()const;
        void _verifyUniqueFileNamesDebugPrint()const;
        ~FlatFileManifest();
        void _writeHeaderToStream(BinaryStream &)const;
        void getEntriesCount()const;
        void findFileOrDirectoryEntry(Core::Path const&, bool)const;
        void _createFromVector(Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&, unsigned long, bool);
        FlatFileManifest();
        void writeToStream(BinaryStream &)const;
        void _addMissingDirectoriesForEntry(Core::Path const&);
        void getByIndex(unsigned long)const;
        void readFromStream(std::string const&, Core::Path const&, bool);
        void _clear();
        void _readHeaderFromStream(ReadOnlyBinaryStream &);
    };
}
