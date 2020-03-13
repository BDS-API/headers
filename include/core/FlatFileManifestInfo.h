#pragma once

#include <string>


namespace Core {

    class FlatFileManifestInfo {

    public:
        ~FlatFileManifestInfo(); // _ZN4Core20FlatFileManifestInfoD2Ev
        FlatFileManifestInfo(); // _ZN4Core20FlatFileManifestInfoC2Ev
        void setPath(Core::Path const&); // _ZN4Core20FlatFileManifestInfo7setPathERKNS_4PathE
        std::string getPath()const; // _ZNK4Core20FlatFileManifestInfo7getPathB5cxx11Ev
        void setSeekPos(unsigned long); // _ZN4Core20FlatFileManifestInfo10setSeekPosEm
        void getSeekPos()const; // _ZNK4Core20FlatFileManifestInfo10getSeekPosEv
        void setFileSize(unsigned long); // _ZN4Core20FlatFileManifestInfo11setFileSizeEm
        void getFileSize()const; // _ZNK4Core20FlatFileManifestInfo11getFileSizeEv
        void setFlags(unsigned char); // _ZN4Core20FlatFileManifestInfo8setFlagsEh
        void getFlags()const; // _ZNK4Core20FlatFileManifestInfo8getFlagsEv
        void getFileType()const; // _ZNK4Core20FlatFileManifestInfo11getFileTypeEv
        bool isFile()const; // _ZNK4Core20FlatFileManifestInfo6isFileEv
//      void setFileType(Core::FileType); //TODO: incomplete function definition // _ZN4Core20FlatFileManifestInfo11setFileTypeENS_8FileTypeE
        bool isDirectory()const; // _ZNK4Core20FlatFileManifestInfo11isDirectoryEv
        bool isDeleted()const; // _ZNK4Core20FlatFileManifestInfo9isDeletedEv
        void setDeleted(bool); // _ZN4Core20FlatFileManifestInfo10setDeletedEb
//      void setAttributes(Core::FileType, bool); //TODO: incomplete function definition // _ZN4Core20FlatFileManifestInfo13setAttributesENS_8FileTypeEb
        void readFromStream(ReadOnlyBinaryStream &); // _ZN4Core20FlatFileManifestInfo14readFromStreamER20ReadOnlyBinaryStream
        void writeToStream(BinaryStream &)const; // _ZNK4Core20FlatFileManifestInfo13writeToStreamER12BinaryStream
        void operator==(Core::FlatFileManifestInfo const&)const; // _ZNK4Core20FlatFileManifestInfoeqERKS0_
        FlatFileManifestInfo(Core::FlatFileManifestInfo const&); // _ZN4Core20FlatFileManifestInfoC2ERKS0_
        FlatFileManifestInfo(Core::FlatFileManifestInfo &&); // _ZN4Core20FlatFileManifestInfoC2EOS0_
    };
}
