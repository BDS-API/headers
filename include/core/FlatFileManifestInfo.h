#pragma once

#include <string>


namespace Core {

    class FlatFileManifestInfo {

    public:
        void operator==(Core::FlatFileManifestInfo const&)const;
        FlatFileManifestInfo(Core::FlatFileManifestInfo &&);
        void getFileSize()const;
        void writeToStream(BinaryStream &)const;
        void setDeleted(bool);
        void getSeekPos()const;
        void getFlags()const;
        void getFileType()const;
        bool isDeleted()const;
        void setFileSize(unsigned long);
        void setPath(Core::Path const&);
        bool isFile()const;
        void readFromStream(ReadOnlyBinaryStream &);
        void setSeekPos(unsigned long);
//      void setFileType(Core::FileType); //TODO: incomplete function definition
        FlatFileManifestInfo();
        bool isDirectory()const;
        void setFlags(unsigned char);
        ~FlatFileManifestInfo();
        std::string getPath()const;
//      void setAttributes(Core::FileType, bool); //TODO: incomplete function definition
        FlatFileManifestInfo(Core::FlatFileManifestInfo const&);
    };
}
