#include "Book.h"

Book::Book()
{
    author = "undefined";
    edition = "undefined";
    publication_date = "undefined";
    isbn = 0;
}

Book::Book(string author, string edition, string publication_date, long isbn)
{
    this->author = author;
    this->edition = edition;
    this->publication_date = publication_date;
    this->isbn = isbn;
}

void Book::setAuthor(string author)
{
    this->author = author;
}

void Book::setEdition(string edition)
{
    this->edition = edition;
}

void Book::setPublicationDate(string publication_date)
{
    this->publication_date = publication_date;
}

void Book::setIsbn(long isbn)
{
    this->isbn = isbn;
}

string Book::getAuthor() const
{
    return author;
}

string Book::getEdition() const
{
    return edition;
}

string Book::getPublicationDate() const
{
    return publication_date;
}

long Book::getIsbn() const
{
    return isbn;
}

void Book::showBook() const
{
    cout << "--------------------------------------------------------------------------\n\n";
    cout << "Author: " << author << endl;
    cout << "Edition: " << edition << endl;
    cout << "Publication date: " << publication_date << endl;
    cout << "Isbn: " << isbn << endl;
    cout << "\n";
}