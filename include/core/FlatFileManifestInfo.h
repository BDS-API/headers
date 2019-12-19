#pragma once

using namespace Core;

class FlatFileManifestInfo {

public:

    FlatFileManifestInfo(void);
    void setPath(Core::Path const&);
    void setSeekPos(unsigned long);
    void getSeekPos(void)const;
    void setFileSize(unsigned long);
    void getFileSize(void)const;
    void setFlags(unsigned char);
    void getFlags(void)const;
    void getFileType(void)const;
    bool isFile(void)const;
    void setFileType(Core::FileType);
    bool isDirectory(void)const;
    bool isDeleted(void)const;
    void setDeleted(bool);
    void setAttributes(Core::FileType, bool);
    void readFromStream(ReadOnlyBinaryStream &);
    void writeToStream(BinaryStream &)const;
    FlatFileManifestInfo(Core::FlatFileManifestInfo const&);
    FlatFileManifestInfo(Core::FlatFileManifestInfo&&);
};
