#pragma once



namespace DataStructures {

class ByteQueue {

public:

    ByteQueue();
    ~ByteQueue();
    void Clear(char const*, unsigned int);
    void WriteBytes(char const*, unsigned int, char const*, unsigned int);
    void GetBytesWritten()const;
    void ReadBytes(char *, unsigned int, bool);
    void IncrementReadOffset(unsigned int);
    void PeekContiguousBytes(unsigned int *)const;
    void DecrementReadOffset(unsigned int);
    void Print();
};

}