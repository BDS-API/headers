#pragma once



namespace DataStructures {

    class ByteQueue {

    public:
        ByteQueue(); // _ZN14DataStructures9ByteQueueC2Ev
        ~ByteQueue(); // _ZN14DataStructures9ByteQueueD2Ev
        void Clear(char const*, unsigned int); // _ZN14DataStructures9ByteQueue5ClearEPKcj
        void WriteBytes(char const*, unsigned int, char const*, unsigned int); // _ZN14DataStructures9ByteQueue10WriteBytesEPKcjS2_j
        void GetBytesWritten()const; // _ZNK14DataStructures9ByteQueue15GetBytesWrittenEv
        void ReadBytes(char *, unsigned int, bool); // _ZN14DataStructures9ByteQueue9ReadBytesEPcjb
        void IncrementReadOffset(unsigned int); // _ZN14DataStructures9ByteQueue19IncrementReadOffsetEj
        void PeekContiguousBytes(unsigned int *)const; // _ZNK14DataStructures9ByteQueue19PeekContiguousBytesEPj
        void DecrementReadOffset(unsigned int); // _ZN14DataStructures9ByteQueue19DecrementReadOffsetEj
        void Print(); // _ZN14DataStructures9ByteQueue5PrintEv
    };
}
