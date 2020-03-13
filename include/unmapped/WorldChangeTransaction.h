#pragma once



class WorldChangeTransaction {

public:
    class Data;

    WorldChangeTransaction(BlockSource &); // _ZN22WorldChangeTransactionC2ER11BlockSource
    ~WorldChangeTransaction(); // _ZN22WorldChangeTransactionD2Ev
    void setBlock(BlockPos const&, Block const&, int); // _ZN22WorldChangeTransaction8setBlockERK8BlockPosRK5Blocki
    void setBlock(BlockPos const&, Block const&, Block const&, int); // _ZN22WorldChangeTransaction8setBlockERK8BlockPosRK5BlockS5_i
    void getBlock(BlockPos const&)const; // _ZNK22WorldChangeTransaction8getBlockERK8BlockPos
    void apply()const; // _ZNK22WorldChangeTransaction5applyEv
    class Data {

    public:
        Data(); // _ZN22WorldChangeTransaction4DataC2Ev
        ~Data(); // _ZN22WorldChangeTransaction4DataD2Ev
    };
};
