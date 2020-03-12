#pragma once



namespace DataStructures {

    class ByteQueue {

    public:
        ByteQueue();
        void Print();
        void IncrementReadOffset(unsigned int);
        void ReadBytes(char *, unsigned int, bool);
        ~ByteQueue();
        void PeekContiguousBytes(unsigned int *)const;
        void WriteBytes(char const*, unsigned int, char const*, unsigned int);
        void DecrementReadOffset(unsigned int);
        void GetBytesWritten()const;
        void Clear(char const*, unsigned int);
    };
}
