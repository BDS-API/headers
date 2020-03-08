#pragma once



using namespace Core;

class DirectoryIterationItem {

public:

    DirectoryIterationItem(Core::DirectoryIterationFlags);
    void getFileSize(void)const;
    void setFileSize(unsigned long);
    void getFileSizeAllocationOnDisk(void)const;
    void setFileSizeAllocationOnDisk(unsigned long);
    void setName(Core::PathPart const&);
    void getName(void)const;
    void setFullPathName(Core::Path);
    void getType(void)const;
    void setType(Core::FileType);
    bool isDirectory(void)const;
    bool isFile(void)const;
    void getCreateTime(void)const;
    void setCreateTime(long);
    void getModifyTime(void)const;
    void setModifyTime(long);
};
