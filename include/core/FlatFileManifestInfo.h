#pragma once

#include "../bedrock/io/BinaryStream.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "Path.h"


namespace Core {

    class FlatFileManifestInfo {

    public:
        void setFileSize(unsigned long);
        void writeToStream(BinaryStream &)const;
        void operator==(Core::FlatFileManifestInfo const&)const;
        void setPath(Core::Path const&);
        void setSeekPos(unsigned long);
        bool isDeleted()const;
        ~FlatFileManifestInfo();
        FlatFileManifestInfo(Core::FlatFileManifestInfo const&);
//      void setAttributes(Core::FileType, bool); //TODO: incomplete function definition
        void getFileType()const;
        void getFlags()const;
        std::string getPath()const;
        void setFlags(unsigned char);
        bool isFile()const;
//      void setFileType(Core::FileType); //TODO: incomplete function definition
        void getSeekPos()const;
        FlatFileManifestInfo();
        FlatFileManifestInfo(Core::FlatFileManifestInfo &&);
        void getFileSize()const;
        bool isDirectory()const;
        void setDeleted(bool);
        void readFromStream(ReadOnlyBinaryStream &);
    };
}
