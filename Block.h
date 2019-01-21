#include <cstdint>
#include <iostream>

using namespace std;

class Block {
    public:
        Block(uint64_t index, const string& data);
        string previousHash;
        string getHash() const;
    private:
        uint64_t index;
        uint64_t nonce;
        string hash;
        string data;
        time_t timestamp;
};
