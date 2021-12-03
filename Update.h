class Update{
public:
    virtual bool Add_Book() = 0{

    }
    virtual bool Remove_Book() = 0{

    }
    virtual bool Edit_Book() = 0{

    }
};

class UpdateCatalog : public Update{


};