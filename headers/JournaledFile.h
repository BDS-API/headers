#pragma once

class JournaledFile {

public:

    void fileOrBackupExists(Core::Path);
    void populateImportantFiles(Core::Path, std::vector<std::string, std::allocator<std::string>> &);
    bool isOldFile(Core::Path);
    bool isNewFile(Core::Path);
    void JournaledFile(std::function<Core::Result ()(Core::Path)> &&);
    bool isOpen(void)const;
    void close(void);
    void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode);
    void _flushFiles(void);
    void write(void const*, unsigned long);
    void flush(void);
    void getFile(void);
    void getFile(void)const;
};
