#pragma once

#include "../bedrock/io/BinaryStream"
#include "../bedrock/io/ReadOnlyBinaryStream"


using namespace Core;

class FlatFileManifestInfo {

public:

    FlatFileManifestInfo(void);
    void setPath(Core::Path const&);
    void setSeekPos(unsigned long);
    void getSeekPos()const;
    void setFileSize(unsigned long);
    void getFileSize()const;
    void setFlags(unsigned char);
    void getFlags()const;
    void getFileType()const;
    bool isFile()const;
    void setFileType(Core::FileType);
    bool isDirectory()const;
    bool isDeleted()const;
    void setDeleted(bool);
    void setAttributes(Core::FileType, bool);
    void readFromStream(ReadOnlyBinaryStream &);
    void writeToStream(BinaryStream &)const;
    FlatFileManifestInfo(Core::FlatFileManifestInfo const&);
    FlatFileManifestInfo(Core::FlatFileManifestInfo&&);
};
