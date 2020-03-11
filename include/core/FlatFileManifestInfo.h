#pragma once

#include "./FlatFileManifestInfo.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "../bedrock/io/BinaryStream.h"
#include "./Path.h"
#include <string>


namespace Core {

class FlatFileManifestInfo {

public:

    ~FlatFileManifestInfo();
    FlatFileManifestInfo();
    void setPath(Core::Path const&);
    std::string getPath()const;
    void setSeekPos(unsigned long);
    void getSeekPos()const;
    void setFileSize(unsigned long);
    void getFileSize()const;
    void setFlags(unsigned char);
    void getFlags()const;
    void getFileType()const;
    bool isFile()const;
//  void setFileType(Core::FileType); //TODO: incomplete function definition
    bool isDirectory()const;
    bool isDeleted()const;
    void setDeleted(bool);
//  void setAttributes(Core::FileType, bool); //TODO: incomplete function definition
    void readFromStream(ReadOnlyBinaryStream &);
    void writeToStream(BinaryStream &)const;
    void operator==(Core::FlatFileManifestInfo const&)const;
    FlatFileManifestInfo(Core::FlatFileManifestInfo const&);
    FlatFileManifestInfo(Core::FlatFileManifestInfo &&);
};

}