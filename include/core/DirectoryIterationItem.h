#pragma once



using namespace Core;

class DirectoryIterationItem {

public:

    DirectoryIterationItem(Core::DirectoryIterationFlags);
    void getFileSize()const;
    void setFileSize(unsigned long);
    void getFileSizeAllocationOnDisk()const;
    void setFileSizeAllocationOnDisk(unsigned long);
    void setName(Core::PathPart const&);
    void getName()const;
    void setFullPathName(Core::Path);
    void getType()const;
    void setType(Core::FileType);
    bool isDirectory()const;
    bool isFile()const;
    void getCreateTime()const;
    void setCreateTime(long);
    void getModifyTime()const;
    void setModifyTime(long);
};
