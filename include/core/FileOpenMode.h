#pragma once



namespace Core {

    class FileOpenMode {

    public:
        void read();
        bool isCreate()const;
        void cMode();
        void rbPlus();
        void readExisting();
        void create();
        void append();
        void truncate();
        FileOpenMode();
        void wbPlus();
        void wb();
        bool isBinary()const;
        void binary();
        void writeCreateOrAppend();
        void cModeWide();
        bool isWrite()const;
        bool isTruncate()const;
        bool isReadOnly()const;
        FileOpenMode(char const*);
        void operator==(Core::FileOpenMode const&)const;
        bool isRead()const;
        bool isAppend()const;
//      FileOpenMode(std::_Ios_Openmode); //TODO: incomplete function definition
        void wPlus();
        void writeCreateOrTruncate();
        void write();
        void rb();
    };
}
