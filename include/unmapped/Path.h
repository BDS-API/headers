#pragma once

#include <vector>


class Path {

public:
    class Node;

    Path(Path const&); // _ZN4PathC2ERKS_
    Path(); // _ZN4PathC2Ev
    ~Path(); // _ZN4PathD2Ev
//  void buildFromNodes(std::vector<Path::Node> &&, PathCompletionType); //TODO: incomplete function definition // _ZN4Path14buildFromNodesEOSt6vectorINS_4NodeESaIS1_EE18PathCompletionType
    void next(); // _ZN4Path4nextEv
    bool isDone(); // _ZN4Path6isDoneEv
    bool isValid()const; // _ZNK4Path7isValidEv
    bool isValidIndex(unsigned long)const; // _ZNK4Path12isValidIndexEm
    void getSize()const; // _ZNK4Path7getSizeEv
    void setSize(unsigned long); // _ZN4Path7setSizeEm
    void getIndex()const; // _ZNK4Path8getIndexEv
    void setIndex(unsigned long); // _ZN4Path8setIndexEm
    void getPos(Actor const*, unsigned long)const; // _ZNK4Path6getPosEPK5Actorm
    void getBlockPos(Actor const*, unsigned long)const; // _ZNK4Path11getBlockPosEPK5Actorm
    void currentPos(Actor const*)const; // _ZNK4Path10currentPosEPK5Actor
    void getCompletionType()const; // _ZNK4Path17getCompletionTypeEv
    void currentPos()const; // _ZNK4Path10currentPosEv
    void getNodePos(unsigned long)const; // _ZNK4Path10getNodePosEm
    void getNodeType(unsigned long)const; // _ZNK4Path11getNodeTypeEm
    void getEndPos()const; // _ZNK4Path9getEndPosEv
    void getLastPos()const; // _ZNK4Path10getLastPosEv
    void sameAs(Path *)const; // _ZNK4Path6sameAsEPS_
    bool endsInXZ(Vec3 const&); // _ZN4Path8endsInXZERK4Vec3
    void makeCopy()const; // _ZNK4Path8makeCopyEv
    class Node {

    public:
        Node(Path::Node const&); // _ZN4Path4NodeC2ERKS0_
        void set(PathfinderNode const&); // _ZN4Path4Node3setERK14PathfinderNode
        Node(); // _ZN4Path4NodeC2Ev
        void getType()const; // _ZNK4Path4Node7getTypeEv
    };
};
