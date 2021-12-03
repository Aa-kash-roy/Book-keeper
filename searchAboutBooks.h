class Search {
    public:
        virtual vector<Book> searchByTitle(string title) = 0;
        virtual vector<Book> searchByAuthor(string author) = 0;
        virtual vector<Book> searchBySubject(string subject) = 0;
};

class SearchCatalog : public Search {
    private:
        _Date creationDate;
        static int totalBooks;
        /*
            These will be removed once the database is added to
            the program ..!
        */
        map<string, vector<Book>> bookTitles;
        map<string, vector<Book>> bookAuthors;
        map<string, vector<Book>> bookSubjects;
    
    public:
        vector<Book> searchByTitle(string query){

        }
        vector<Book> searchByAuthor(string query){

        }
        vector<Book> searchBySubject(string query){

        }
};