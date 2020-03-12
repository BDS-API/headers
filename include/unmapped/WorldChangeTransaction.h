#pragma once



class WorldChangeTransaction {

public:
    class Data;

    ~WorldChangeTransaction();
    void setBlock(BlockPos const&, Block const&, Block const&, int);
    WorldChangeTransaction(BlockSource &);
    void apply()const;
    void setBlock(BlockPos const&, Block const&, int);
    void getBlock(BlockPos const&)const;
    class Data {

    public:
        ~Data();
        Data();
    };
};
