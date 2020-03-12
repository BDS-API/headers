#pragma once



namespace DataStructures {

    class ByteQueue {

    public:
        void PeekContiguousBytes(unsigned int *)const;
        void Clear(char const*, unsigned int);
        void GetBytesWritten()const;
        void ReadBytes(char *, unsigned int, bool);
        void DecrementReadOffset(unsigned int);
        void IncrementReadOffset(unsigned int);
        ByteQueue();
        void Print();
        void WriteBytes(char const*, unsigned int, char const*, unsigned int);
        ~ByteQueue();
    };
}
