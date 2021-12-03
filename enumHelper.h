
const int MAX_BOOK_ISSUED_TO_USER = 5;
const int MAX_LENDING_DAYS = 10;
enum BookFormat {
    Paperback,
    NewsPaper,
    Magazine,
    Ebook
};

enum BookStatus {
    Available,
    Reserved,
    Lost
};

enum ReservationStatus {
    Waiting,
    Pending,
    Canceled,
    None
};

enum AccountStatus {
    Active,
    Closed,
    Canceled,
    Blacklisted,
    None
};

