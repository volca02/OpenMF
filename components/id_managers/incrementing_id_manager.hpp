#ifndef INCREMENTING_ID_MANAGER
#define INCREMENTING_ID_MANAGER

namespace MFGame
{

class IncrementingIDManager: public IDManager
{
public:
    virtual Id allocate() override;
private:
    Id mNextId;
};

}

#endif // INCREMENTING_ID_MANAGER
