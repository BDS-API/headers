#pragma once

#include "BitStream.h"


namespace RakNet {

    class HuffmanEncodingTree {

    public:
        void GenerateFromFrequencyTable(unsigned int *);
        void FreeMemory();
        void EncodeArray(unsigned char *, unsigned long, RakNet::BitStream *);
        ~HuffmanEncodingTree();
//      void InsertNodeIntoSortedList(HuffmanEncodingTreeNode *, DataStructures::LinkedList<HuffmanEncodingTreeNode *> *)const; //TODO: incomplete function definition
        void DecodeArray(RakNet::BitStream *, unsigned int, unsigned long, unsigned char *);
        HuffmanEncodingTree();
        void DecodeArray(unsigned char *, unsigned int, RakNet::BitStream *);
    };
}
