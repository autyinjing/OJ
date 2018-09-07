class MyHashSet {
public:
    struct stIdxBit {
        int idx;
        int bit;
    };

    stIdxBit locate(int key) {
        stIdxBit ib;
        ib.idx = key >> 5;
        ib.bit = key & 31;
        return ib;
    }

    void setBitFlag(int &val, int bit) {
        val |= (1 << (bit - 1));
    }

    void resetBitFlag(int &val, int bit) {
        val &= (~(1 << (bit - 1)));
    }

    bool testBitFlag(int val, int bit) {
        return (val >> (bit - 1)) & 1;
    }

    MyHashSet() {
        fill(&mask[0], &mask[31250], 0);
    }

    void add(int key) {
        auto ib = locate(key);
        setBitFlag(mask[ib.idx], ib.bit);
    }

    void remove(int key) {
        auto ib = locate(key);
        resetBitFlag(mask[ib.idx], ib.bit);
    }

    bool contains(int key) {
        auto ib = locate(key);
        return testBitFlag(mask[ib.idx], ib.bit);
    }

private:
    int mask[31251];    //1000000 / 32 = 31250
};
