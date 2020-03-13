#pragma once

#include <string>
#include <vector>


namespace Core {

    class FlatFileManifest {

    public:
        std::string getManifestPath()const; // _ZNK4Core16FlatFileManifest15getManifestPathB5cxx11Ev
        FlatFileManifest(); // _ZN4Core16FlatFileManifestC2Ev
        ~FlatFileManifest(); // _ZN4Core16FlatFileManifestD2Ev
        void _clear(); // _ZN4Core16FlatFileManifest6_clearEv
        void _createFromVector(Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&, unsigned long, bool); // _ZN4Core16FlatFileManifest17_createFromVectorERKNS_4PathERKSt6vectorINS_20FlatFileManifestInfoESaIS5_EEmb
        void _mergeDuplicateEntries(unsigned long, Core::FlatFileManifestInfo &); // _ZN4Core16FlatFileManifest22_mergeDuplicateEntriesEmRNS_20FlatFileManifestInfoE
        void _addMissingDirectoriesForEntry(Core::Path const&); // _ZN4Core16FlatFileManifest30_addMissingDirectoriesForEntryERKNS_4PathE
        void createFromVectorWithValidation(Core::Path const&, std::vector<Core::FlatFileManifestInfo> const&, unsigned long); // _ZN4Core16FlatFileManifest30createFromVectorWithValidationERKNS_4PathERKSt6vectorINS_20FlatFileManifestInfoESaIS5_EEm
        void _verifyUniqueFileNamesDebugPrint()const; // _ZNK4Core16FlatFileManifest32_verifyUniqueFileNamesDebugPrintEv
        void readFromStream(std::string const&, Core::Path const&, bool); // _ZN4Core16FlatFileManifest14readFromStreamERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_4PathEb
        void _readHeaderFromStream(ReadOnlyBinaryStream &); // _ZN4Core16FlatFileManifest21_readHeaderFromStreamER20ReadOnlyBinaryStream
        void writeToStream(BinaryStream &)const; // _ZNK4Core16FlatFileManifest13writeToStreamER12BinaryStream
        void _writeHeaderToStream(BinaryStream &)const; // _ZNK4Core16FlatFileManifest20_writeHeaderToStreamER12BinaryStream
        void findFileOrDirectoryEntry(Core::Path const&, bool)const; // _ZNK4Core16FlatFileManifest24findFileOrDirectoryEntryERKNS_4PathEb
        bool isValid()const; // _ZNK4Core16FlatFileManifest7isValidEv
        void getEntriesCount()const; // _ZNK4Core16FlatFileManifest15getEntriesCountEv
        void getByIndex(unsigned long)const; // _ZNK4Core16FlatFileManifest10getByIndexEm
        void getByIndex(unsigned long); // _ZN4Core16FlatFileManifest10getByIndexEm
    };
}
