class Address {

    string streetAddress;
    string city;
    string state;
    string zipcode;
    string country;
};

class Person {

    string name;
    Address address;
    string email;
    string phone;
};


class Account {
    private:
        string Id;
        string password;
        AccountStatus status;
        Person person;

    protected:
        bool resetPassword(){

        }
};

class Librarian : public Account {
    public:
        bool addBookItem(){

        }
        bool blockMember(){

        }
        bool unblockMember(){

        }
};

class Member : public Account {
    private:
        _Date dateOfMembership;
        int totalBookIssued;
    
    public:
        int getTotalBookIssued(){

        }
};

class Book{
public:
    string ISBN;
    string title;
    Author author;
    string subject;
    string publisher;
    string language;
    int numberOfPages;

    string getTitle(){

    }
};

class BookItem : public Book{
protected:
    string barcode;
    bool isReferenceOnly;
    _Date borrowed;
    _Date dueDate;
    double price;
    BookFormat format;
    BookStatus status;

public:
    bool checkOut(){

    }
};
