#pragma once



namespace Core {

    class FileOpenMode {

    public:
        bool isReadOnly()const;
        bool isAppend()const;
        void cMode();
        bool isBinary()const;
        void wbPlus();
        void wb();
        FileOpenMode();
        void truncate();
        void read();
        void binary();
        bool isWrite()const;
        void rb();
        void wPlus();
        void operator==(Core::FileOpenMode const&)const;
        void cModeWide();
        bool isCreate()const;
        void writeCreateOrAppend();
        void create();
        void rbPlus();
        void append();
//      FileOpenMode(std::_Ios_Openmode); //TODO: incomplete function definition
        void writeCreateOrTruncate();
        bool isRead()const;
        FileOpenMode(char const*);
        bool isTruncate()const;
        void write();
        void readExisting();
    };
}
